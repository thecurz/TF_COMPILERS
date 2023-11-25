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
  // while (std::getline(inputFile, line)) {
  //   std::cout << line << std::endl;
  // }
  std::getline(inputFile, line);
  inputFile.close();

  antlr4::ANTLRInputStream input(line);

  ShellXLexer lexer(&input);
  antlr4::CommonTokenStream tokens(&lexer);
  ShellXParser parser(&tokens);

  antlr4::tree::ParseTree *tree = parser.program();
  ShellXVisitorImpl visitor;
  // std::cout << "tree:\n" << tree->toStringTree(&parser) << std::endl;
  visitor.visit(tree);

  return 0;
}
