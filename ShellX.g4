grammar ShellX;

// Parser Rules
program: (command | structure | assignment)* EOF;
command: lsCommand      
       | pwdCommand     
       | catCommand     
       | mvCommand     
       | touchCommand  
       | echoCommand    
       | rmCommand      
       | mkdirCommand   
       | grepCommand    
       | cpCommand      
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
PARAMS : ~[\r\n]+;
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
