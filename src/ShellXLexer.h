
// Generated from ShellX.g4 by ANTLR 4.13.1

#pragma once


#include "antlr4-runtime.h"




class  ShellXLexer : public antlr4::Lexer {
public:
  enum {
    FORSTART = 1, FOREND = 2, LBRAC = 3, RBRAC = 4, INB = 5, FLAG = 6, ENV_VAR = 7, 
    IN = 8, END = 9, NEWLINE = 10, EQ = 11, INT = 12, LS = 13, PWD = 14, 
    CAT = 15, MV = 16, TOUCH = 17, ECHO = 18, RM = 19, MKDIR = 20, GREP = 21, 
    CP = 22, FOR = 23, WHILE = 24, IF = 25, ELSE = 26, VAR = 27, ARG = 28, 
    WS = 29
  };

  explicit ShellXLexer(antlr4::CharStream *input);

  ~ShellXLexer() override;


  std::string getGrammarFileName() const override;

  const std::vector<std::string>& getRuleNames() const override;

  const std::vector<std::string>& getChannelNames() const override;

  const std::vector<std::string>& getModeNames() const override;

  const antlr4::dfa::Vocabulary& getVocabulary() const override;

  antlr4::atn::SerializedATNView getSerializedATN() const override;

  const antlr4::atn::ATN& getATN() const override;

  // By default the static state used to implement the lexer is lazily initialized during the first
  // call to the constructor. You can call this function if you wish to initialize the static state
  // ahead of time.
  static void initialize();

private:

  // Individual action functions triggered by action() above.

  // Individual semantic predicate functions triggered by sempred() above.

};

