# Proyecto Final Teoría de Compiladores

# Shell X

## Lenguaje básico de scripting
con estructuras repetitivas, condicionales y selectivas, variables ylistas.

## Ejecutar en modo “headless” un script

## Tratamiento de variables de entorno
* pwd : indica el directorio actual `pwdCommand: PWD NEWLINE?`

## Acceso a comandos de sistema
Se han considerado los siguientes comandos del sistema a ser ejecutados por el shell:
* ls : lista los archivos `LS (flags)? (ARG | VAR)* NEWLINE?`
* cat : ver el contenido de uno o más archivos `CAT (flags)? (ARG | VAR)* NEWLINE?`
* mv : mover o renombrar archivos `MV (flags)? (ARG | VAR)* NEWLINE?`
* touch : crear uno o más archivos `TOUCH (flags)? (ARG | VAR)* NEWLINE?`
* echo : devuelve el valor retornado del último comando `ECHO (flags)? (ARG | VAR)* NEWLINE?`
* rm : elimina uno o más archivos `RM (flags)? (ARG | VAR)* NEWLINE?`
* mkdir : crea uno o más directorios / carpetas `MKDIR (flags)? (ARG | VAR)* NEWLINE?`
* grep : busca una palabra en un archivo o más `GREP (flags)? (ARG | VAR)* NEWLINE?`;
* cp : copia un archivo o más `CP (flags)? (ARG | VAR)* NEWLINE?`;

## Modo interactivo
, el cual es el modo principal, permite mostrar un prompt definido en lavariable PS1 o PROMPT

## Característica adicional
 a su criterio, extensión del lenguaje, característica interactivacomo autosugestions, manejo de colores, etc


# Ejecución:

* Requiere instalación de [antlr4 Java runtime](https://www.antlr.org/)
* Generar las librerías:
    ```bash
    antlr4 -o src/ ShellX.g4 -Dlanguage=Cpp -no-listener -visitor
    g++ main.cpp src/*.cpp ShellXVisitorImpl.cpp -IANTLRI -lantlr4-runtime
    ```

    * Puede omitirse -IANTLRI. Sin embargo, de salir errores, incluirlo.
    * ANTLRI es una variable de entorno.
        * Ejemplo: `/usr/local/include/antlr4-runtime`
        * También puede ser reemplazado por el directorio en sí directamente