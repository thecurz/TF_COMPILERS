grammar ShellX;

// Parser Rules
program: (line)* EOF;
statement: command
       | code
       | assignment
       | variableAssignment
       ;
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
code   :   expr NEWLINE?
       |   structure
       |   funct
       ;
structure: forLoop
       | whileLoop
       | ifElseStatement
       ;
funct  :   defFunc inDef+
       ;
defFunc:   FUNC fCall DDOT NEWLINE
       ;
inDef  :   INDENT code
       |   INDENT inDef
       ;
fCall  :   ARG LPAREN expr RPAREN
       ;
comp   :   expr COMP expr
       ;
expr   :   expr (PLUS|MINU) expr
       |   fCall
       |   ARG
       |   REAL
       |   INT
       ;

/* Structures */
forLoop       : FOR VAR IN range NEWLINE forInner;
forInner      : FORSTART NEWLINE line* FOREND;
whileLoop     : WHILE ARG command END;

ifStatement          : IF comp DDOT NEWLINE inDef;
ifelseStatement      : INDENT* ELSE IF comp DDOT NEWLINE inDef;
elseStatement        : INDENT* ELSE DDOT NEWLINE inDef;
ifElseStatement      : ifStatement (ifelseStatement)* (elseStatement)?;

/* Access to Environment Variables */
pwdCommand    : PWD NEWLINE?;

/* System Commands */
lsCommand     : LS (flags)? (ARG | VAR)* NEWLINE?;
catCommand    : CAT (flags)? (ARG | VAR)* NEWLINE?;
mvCommand     : MV (flags)? (ARG | VAR)* NEWLINE?;
touchCommand  : TOUCH (flags)? (ARG | VAR)* NEWLINE?;
echoCommand   : ECHO (flags)? (ARG | VAR)* NEWLINE?;
rmCommand     : RM (flags)? (ARG | VAR)* NEWLINE?;
mkdirCommand  : MKDIR (flags)? (ARG | VAR)* NEWLINE?;
grepCommand   : GREP (flags)? (ARG | VAR)* NEWLINE?;
cpCommand     : CP (flags)? (ARG | VAR)* NEWLINE?;
assignment    : VAR EQ ARG;
variableAssignment: VAR EQ ENV_VAR;
range         : LBRAC INT INB INT RBRAC;
flags         : (FLAG WS?)+;

// ================================================

// Lexer Rules
LBRAC  : '{';
RBRAC  : '}';
LPAREN :   '(';
RPAREN :   ')';
PLUS   :   '+' ;
MINU   :   '-' ;
COMP   :   '<' | '>';
INB    : '..';
EQ     : '=';
NEWLINE: '\r'? '\n' ;
INDENT :   '\t';
DDOT   : ':';
IN     : 'in';
END    : 'end';

LS     : 'ls';
PWD    : 'pwd';
CAT    : 'cat';
MV     : 'mv';
TOUCH  : 'touch';
ECHO   : 'echo';
RM     : 'rm';
MKDIR  : 'mkdir';
GREP   : 'grep';
CP     : 'cp';

FORSTART: 'do:';
FOREND : ':done';
FOR    : 'for';
FUNC   :   'func';
WHILE  : 'while';
IF     : 'if';
ELSE   : 'else';

FLAG   : '-' [a-zA-Z]+;
ENV_VAR: '$' [a-zA-Z]+;
REAL   : ([0-9]*[.][0-9]+)([eE][-+]?[0-9]+)?;
INT    : [0-9]+;
ARG    : [a-zA-Z_][a-zA-Z0-9]*;
VAR    : [a-zA-Z_][a-zA-Z]*;
WS     : [ \r\n\f]+ -> skip ;