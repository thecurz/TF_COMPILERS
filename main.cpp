#include "antlr4-runtime.h"
#include "tree/ParseTree.h"

int32_t main(int argc, char* argv[]) {
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
    while (std::getline(inputFile, line)) {
        std::cout << line << std::endl;
    }

    inputFile.close();
    return 0;
}