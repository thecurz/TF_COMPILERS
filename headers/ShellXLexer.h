
// Generated from ShellX.g4 by ANTLR 4.13.1

#pragma once


#include "antlr4-runtime.h"




class  ShellXLexer : public antlr4::Lexer {
public:
  enum {
    T__0 = 1, T__1 = 2, T__2 = 3, SHELLX = 4, LS = 5, PWD = 6, CAT = 7, 
    MV = 8, TOUCH = 9, ECHO = 10, RM = 11, MKDIR = 12, GREP = 13, CP = 14, 
    FOR = 15, WHILE = 16, IF = 17, ELIF = 18, VAR = 19, ARG = 20, WS = 21
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

