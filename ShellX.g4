grammar ShellX;

// Parser Rules
program: SHELLX (command | structure | assignment)* EOF;
command: lsCommand      #ls
       | pwdCommand     #pwd
       | catCommand     #cat
       | mvCommand      #mv
       | touchCommand   #touch
       | echoCommand    #echo
       | rmCommand      #rm
       | mkdirCommand   #mkdir
       | grepCommand    #grep
       | cpCommand      #cp
       ;
lsCommand: LS (ARG | VAR)* ;
pwdCommand: PWD (ARG | VAR)* ;
catCommand: CAT (ARG | VAR)* ;
mvCommand: MV (ARG | VAR)* ;
touchCommand: TOUCH (ARG | VAR)* ;
echoCommand: ECHO (ARG | VAR)* ;
rmCommand: RM (ARG | VAR)* ;
mkdirCommand: MKDIR (ARG | VAR)* ;
grepCommand: GREP (ARG | VAR)* ;
cpCommand: CP (ARG | VAR)* ;
structure: (FOR | WHILE | IF | ELIF) '(' ARG ')' command;
assignment: VAR '=' ARG;

// Lexer Rules
SHELLX: '#shellx';
LS: 'ls';
PWD: 'pwd';
CAT: 'cat';
MV: 'mv';
TOUCH: 'touch';
ECHO: 'echo';
RM: 'rm';
MKDIR: 'mkdir';
GREP: 'grep';
CP: 'cp';
FOR: 'for';
WHILE: 'while';
IF: 'if';
ELIF: 'elif';
VAR: '$' [a-zA-Z0-9]+;
ARG: [a-zA-Z0-9]+;
WS: [ \t\r\n]+ -> skip;