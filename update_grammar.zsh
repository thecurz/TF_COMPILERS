rm -r -f src/
rm -r -f headers/
mkdir src
mkdir headers
antlr4 -Dlanguage=Cpp -no-listener -visitor -o src/ ShellX.g4
mv src/*.h headers/
