grammar ShellX;

// Parser Rules
program: (line)* EOF;
statement: command | structure | assignment | variableAssignment;
line: statement;
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
structure: forLoop | whileLoop | ifElseStatement;
forLoop: FOR VAR IN range NEWLINE forInner;
forInner: FORSTART NEWLINE line* FOREND;
FORSTART: 'do:';
FOREND: ':done';
whileLoop: WHILE ARG command END;
ifElseStatement: IF ARG command (ELSE command)?;

lsCommand: LS (flags)? (ARG | VAR)* NEWLINE?;
pwdCommand: PWD NEWLINE?;
catCommand: CAT (flags)? (ARG | VAR)* NEWLINE?;
mvCommand: MV (flags)? (ARG | VAR)* NEWLINE?;
touchCommand: TOUCH (flags)? (ARG | VAR)* NEWLINE?;
echoCommand: ECHO (flags)? (ARG | VAR)* NEWLINE?;
rmCommand: RM (flags)? (ARG | VAR)* NEWLINE?;
mkdirCommand: MKDIR (flags)? (ARG | VAR)* NEWLINE?;
grepCommand: GREP (flags)? (ARG | VAR)* NEWLINE?;
cpCommand: CP (flags)? (ARG | VAR)* NEWLINE?;
assignment: VAR EQ ARG;
variableAssignment: VAR EQ ENV_VAR;
range: LBRAC INT INB INT RBRAC;
first_int: INT;
second_int: INT;

// Extra Lexer Rules
LBRAC: '{';
RBRAC: '}';
INB: '..';
flags: (FLAG WS?)+;
FLAG: '-' [a-zA-Z]+;
ENV_VAR: '$' [a-zA-Z]+;
IN: 'in';
END: 'end';
NEWLINE: '\r'? '\n' ;
EQ: '=';
INT: [0-9]+;

// Lexer Rules
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
ELSE: 'else';
VAR: [a-zA-Z]+;
ARG: [a-zA-Z0-9]+;
WS: [ \t\r\n]+ -> skip;
