
// Generated from ShellX.g4 by ANTLR 4.13.1

#pragma once


#include "antlr4-runtime.h"




class  ShellXParser : public antlr4::Parser {
public:
  enum {
    T__0 = 1, T__1 = 2, T__2 = 3, SHELLX = 4, LS = 5, PWD = 6, CAT = 7, 
    MV = 8, TOUCH = 9, ECHO = 10, RM = 11, MKDIR = 12, GREP = 13, CP = 14, 
    FOR = 15, WHILE = 16, IF = 17, ELIF = 18, VAR = 19, ARG = 20, WS = 21
  };

  enum {
    RuleProgram = 0, RuleCommand = 1, RuleLsCommand = 2, RulePwdCommand = 3, 
    RuleCatCommand = 4, RuleMvCommand = 5, RuleTouchCommand = 6, RuleEchoCommand = 7, 
    RuleRmCommand = 8, RuleMkdirCommand = 9, RuleGrepCommand = 10, RuleCpCommand = 11, 
    RuleStructure = 12, RuleAssignment = 13
  };

  explicit ShellXParser(antlr4::TokenStream *input);

  ShellXParser(antlr4::TokenStream *input, const antlr4::atn::ParserATNSimulatorOptions &options);

  ~ShellXParser() override;

  std::string getGrammarFileName() const override;

  const antlr4::atn::ATN& getATN() const override;

  const std::vector<std::string>& getRuleNames() const override;

  const antlr4::dfa::Vocabulary& getVocabulary() const override;

  antlr4::atn::SerializedATNView getSerializedATN() const override;


  class ProgramContext;
  class CommandContext;
  class LsCommandContext;
  class PwdCommandContext;
  class CatCommandContext;
  class MvCommandContext;
  class TouchCommandContext;
  class EchoCommandContext;
  class RmCommandContext;
  class MkdirCommandContext;
  class GrepCommandContext;
  class CpCommandContext;
  class StructureContext;
  class AssignmentContext; 

  class  ProgramContext : public antlr4::ParserRuleContext {
  public:
    ProgramContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *SHELLX();
    antlr4::tree::TerminalNode *EOF();
    std::vector<CommandContext *> command();
    CommandContext* command(size_t i);
    std::vector<StructureContext *> structure();
    StructureContext* structure(size_t i);
    std::vector<AssignmentContext *> assignment();
    AssignmentContext* assignment(size_t i);


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ProgramContext* program();

  class  CommandContext : public antlr4::ParserRuleContext {
  public:
    CommandContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    LsCommandContext *lsCommand();
    PwdCommandContext *pwdCommand();
    CatCommandContext *catCommand();
    MvCommandContext *mvCommand();
    TouchCommandContext *touchCommand();
    EchoCommandContext *echoCommand();
    RmCommandContext *rmCommand();
    MkdirCommandContext *mkdirCommand();
    GrepCommandContext *grepCommand();
    CpCommandContext *cpCommand();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  CommandContext* command();

  class  LsCommandContext : public antlr4::ParserRuleContext {
  public:
    LsCommandContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *LS();
    std::vector<antlr4::tree::TerminalNode *> ARG();
    antlr4::tree::TerminalNode* ARG(size_t i);
    std::vector<antlr4::tree::TerminalNode *> VAR();
    antlr4::tree::TerminalNode* VAR(size_t i);


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  LsCommandContext* lsCommand();

  class  PwdCommandContext : public antlr4::ParserRuleContext {
  public:
    PwdCommandContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *PWD();
    std::vector<antlr4::tree::TerminalNode *> ARG();
    antlr4::tree::TerminalNode* ARG(size_t i);
    std::vector<antlr4::tree::TerminalNode *> VAR();
    antlr4::tree::TerminalNode* VAR(size_t i);


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  PwdCommandContext* pwdCommand();

  class  CatCommandContext : public antlr4::ParserRuleContext {
  public:
    CatCommandContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *CAT();
    std::vector<antlr4::tree::TerminalNode *> ARG();
    antlr4::tree::TerminalNode* ARG(size_t i);
    std::vector<antlr4::tree::TerminalNode *> VAR();
    antlr4::tree::TerminalNode* VAR(size_t i);


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  CatCommandContext* catCommand();

  class  MvCommandContext : public antlr4::ParserRuleContext {
  public:
    MvCommandContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *MV();
    std::vector<antlr4::tree::TerminalNode *> ARG();
    antlr4::tree::TerminalNode* ARG(size_t i);
    std::vector<antlr4::tree::TerminalNode *> VAR();
    antlr4::tree::TerminalNode* VAR(size_t i);


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  MvCommandContext* mvCommand();

  class  TouchCommandContext : public antlr4::ParserRuleContext {
  public:
    TouchCommandContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *TOUCH();
    std::vector<antlr4::tree::TerminalNode *> ARG();
    antlr4::tree::TerminalNode* ARG(size_t i);
    std::vector<antlr4::tree::TerminalNode *> VAR();
    antlr4::tree::TerminalNode* VAR(size_t i);


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  TouchCommandContext* touchCommand();

  class  EchoCommandContext : public antlr4::ParserRuleContext {
  public:
    EchoCommandContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *ECHO();
    std::vector<antlr4::tree::TerminalNode *> ARG();
    antlr4::tree::TerminalNode* ARG(size_t i);
    std::vector<antlr4::tree::TerminalNode *> VAR();
    antlr4::tree::TerminalNode* VAR(size_t i);


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  EchoCommandContext* echoCommand();

  class  RmCommandContext : public antlr4::ParserRuleContext {
  public:
    RmCommandContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *RM();
    std::vector<antlr4::tree::TerminalNode *> ARG();
    antlr4::tree::TerminalNode* ARG(size_t i);
    std::vector<antlr4::tree::TerminalNode *> VAR();
    antlr4::tree::TerminalNode* VAR(size_t i);


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  RmCommandContext* rmCommand();

  class  MkdirCommandContext : public antlr4::ParserRuleContext {
  public:
    MkdirCommandContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *MKDIR();
    std::vector<antlr4::tree::TerminalNode *> ARG();
    antlr4::tree::TerminalNode* ARG(size_t i);
    std::vector<antlr4::tree::TerminalNode *> VAR();
    antlr4::tree::TerminalNode* VAR(size_t i);


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  MkdirCommandContext* mkdirCommand();

  class  GrepCommandContext : public antlr4::ParserRuleContext {
  public:
    GrepCommandContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *GREP();
    std::vector<antlr4::tree::TerminalNode *> ARG();
    antlr4::tree::TerminalNode* ARG(size_t i);
    std::vector<antlr4::tree::TerminalNode *> VAR();
    antlr4::tree::TerminalNode* VAR(size_t i);


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  GrepCommandContext* grepCommand();

  class  CpCommandContext : public antlr4::ParserRuleContext {
  public:
    CpCommandContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *CP();
    std::vector<antlr4::tree::TerminalNode *> ARG();
    antlr4::tree::TerminalNode* ARG(size_t i);
    std::vector<antlr4::tree::TerminalNode *> VAR();
    antlr4::tree::TerminalNode* VAR(size_t i);


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  CpCommandContext* cpCommand();

  class  StructureContext : public antlr4::ParserRuleContext {
  public:
    StructureContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *ARG();
    CommandContext *command();
    antlr4::tree::TerminalNode *FOR();
    antlr4::tree::TerminalNode *WHILE();
    antlr4::tree::TerminalNode *IF();
    antlr4::tree::TerminalNode *ELIF();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  StructureContext* structure();

  class  AssignmentContext : public antlr4::ParserRuleContext {
  public:
    AssignmentContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *VAR();
    antlr4::tree::TerminalNode *ARG();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  AssignmentContext* assignment();


  // By default the static state used to implement the parser is lazily initialized during the first
  // call to the constructor. You can call this function if you wish to initialize the static state
  // ahead of time.
  static void initialize();

private:
};

