# Proyecto Final Teoría de Compiladores

## Ejecución:

- Requiere instalación de antlr4 Java runtime

```bash
antlr4 -Dlanguage=Cpp -no-listener -visitor ShellX.g4
g++ main.cpp src/*.cpp ShellXVisitorImpl.cpp -lantlr4-runtime
```
