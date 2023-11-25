rm -r -f src/
mkdir src
antlr4 -Dlanguage=Cpp -no-listener -visitor -o src/ ShellX.g4
