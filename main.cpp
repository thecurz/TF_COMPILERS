#include "ANTLRInputStream.h"
#include "CommonTokenStream.h"
#include "ShellXVisitorImpl.h"
#include "antlr4-runtime.h"
#include "src/ShellXBaseVisitor.h"
#include "src/ShellXLexer.h"
#include "tree/ParseTree.h"

int32_t main(int argc, char *argv[]) {
  if (argc < 2) {
    std::cerr << "Por favor, ingrese un archivo como input." << std::endl;
    return 1;
  }

  std::ifstream inputFile(argv[1]);
  if (!inputFile) {
    std::cerr << "Error al leer el archivo: " << argv[1] << std::endl;
    return 1;
  }

  std::string line;
  std::stringstream fileContent;
  while (std::getline(inputFile, line)) {
    fileContent << line << "\n";
  }
  std::string wholeFile = fileContent.str();
  inputFile.close();

  // std::cout << "wholeFile: " << wholeFile << std::endl;
  antlr4::ANTLRInputStream input(wholeFile);

  ShellXLexer lexer(&input);
  antlr4::CommonTokenStream tokens(&lexer);
  ShellXParser parser(&tokens);

  antlr4::tree::ParseTree *tree = parser.program();
  ShellXVisitorImpl visitor;
  // std::cout << "tree:\n" << tree->toStringTree(&parser) << std::endl;
  visitor.visit(tree);

  return 0;
}
