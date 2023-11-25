#include "ANTLRInputStream.h"
#include "CommonTokenStream.h"
#include "ShellXVisitorImpl.h"
#include "antlr4-runtime.h"
#include "src/ShellXBaseVisitor.h"
#include "src/ShellXLexer.h"
#include "tree/ParseTree.h"

int32_t main(int argc, char *argv[]) {
  // if (argc < 2) {
  //   std::cerr << "Por favor, ingrese un archivo como input." << std::endl;
  //   return 1;
  // }

  std::ifstream inputFile(argv[1]);
  bool noinput = false;
  if (argc >= 2) {
    if (!inputFile) {
      std::cerr << "Error al leer el archivo: " << argv[1] << std::endl;
      // continue reading
    }
  } else {
    noinput = true;
  }

  std::string line;
  std::stringstream fileContent;
  if (noinput) {
    std::cout << "$ShellX>";
  }

  while (std::getline((inputFile.is_open() ? inputFile : std::cin), line)) {
    // while (std::getline(inputFile, line)) {
    std::stringstream currentLine;
    currentLine << line << "\n";
    fileContent << currentLine.str();
    if (noinput) {
      antlr4::ANTLRInputStream input(currentLine.str());

      ShellXLexer lexer(&input);
      antlr4::CommonTokenStream tokens(&lexer);
      ShellXParser parser(&tokens);

      antlr4::tree::ParseTree *tree = parser.program();
      ShellXVisitorImpl visitor;
      // std::cout << "tree:\n" << tree->toStringTree(&parser) << std::endl;
      visitor.visit(tree);
      std::cout << "\n$ShellX>";
    }
  }
  if (noinput) {
    return 0;
  }

  else {
      std::stringstream fileContent;
      fileContent << firstLine << "\n";

      std::string line;
      while (std::getline(inputFile, line)) { fileContent << line << "\n"; }

      std::string wholeFile = fileContent.str();
      antlr4::ANTLRInputStream input(wholeFile);

      ShellXLexer lexer(&input);
      antlr4::CommonTokenStream tokens(&lexer);
      ShellXParser parser(&tokens);

      antlr4::tree::ParseTree* tree = parser.program();
      ShellXVisitorImpl visitor;
      visitor.visit(tree);
  }

  inputFile.close();

  return 0;
}
