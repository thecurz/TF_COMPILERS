grammar ShellX;

// Parser Rules
program: SHELLX (command | structure | assignment)* EOF;
command: (LS | PWD | CAT | MV | TOUCH | ECHO | RM | MKDIR | GREP | CP) (ARG | VAR)*;
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