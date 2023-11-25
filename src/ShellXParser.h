
// Generated from ShellX.g4 by ANTLR 4.13.1

#pragma once


#include "antlr4-runtime.h"




class  ShellXParser : public antlr4::Parser {
public:
  enum {
    FORSTART = 1, FOREND = 2, LBRAC = 3, RBRAC = 4, INB = 5, FLAG = 6, ENV_VAR = 7, 
    IN = 8, END = 9, NEWLINE = 10, EQ = 11, INT = 12, LS = 13, PWD = 14, 
    CAT = 15, MV = 16, TOUCH = 17, ECHO = 18, RM = 19, MKDIR = 20, GREP = 21, 
    CP = 22, FOR = 23, WHILE = 24, IF = 25, ELSE = 26, VAR = 27, ARG = 28, 
    WS = 29
  };

  enum {
    RuleProgram = 0, RuleStatement = 1, RuleLine = 2, RuleCommand = 3, RuleStructure = 4, 
    RuleForLoop = 5, RuleForInner = 6, RuleWhileLoop = 7, RuleIfElseStatement = 8, 
    RuleLsCommand = 9, RulePwdCommand = 10, RuleCatCommand = 11, RuleMvCommand = 12, 
    RuleTouchCommand = 13, RuleEchoCommand = 14, RuleRmCommand = 15, RuleMkdirCommand = 16, 
    RuleGrepCommand = 17, RuleCpCommand = 18, RuleAssignment = 19, RuleVariableAssignment = 20, 
    RuleRange = 21, RuleFirst_int = 22, RuleSecond_int = 23, RuleFlags = 24
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
  class StatementContext;
  class LineContext;
  class CommandContext;
  class StructureContext;
  class ForLoopContext;
  class ForInnerContext;
  class WhileLoopContext;
  class IfElseStatementContext;
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
  class AssignmentContext;
  class VariableAssignmentContext;
  class RangeContext;
  class First_intContext;
  class Second_intContext;
  class FlagsContext; 

  class  ProgramContext : public antlr4::ParserRuleContext {
  public:
    ProgramContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *EOF();
    std::vector<LineContext *> line();
    LineContext* line(size_t i);


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ProgramContext* program();

  class  StatementContext : public antlr4::ParserRuleContext {
  public:
    StatementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    CommandContext *command();
    StructureContext *structure();
    AssignmentContext *assignment();
    VariableAssignmentContext *variableAssignment();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  StatementContext* statement();

  class  LineContext : public antlr4::ParserRuleContext {
  public:
    LineContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    StatementContext *statement();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  LineContext* line();

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

  class  StructureContext : public antlr4::ParserRuleContext {
  public:
    StructureContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    ForLoopContext *forLoop();
    WhileLoopContext *whileLoop();
    IfElseStatementContext *ifElseStatement();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  StructureContext* structure();

  class  ForLoopContext : public antlr4::ParserRuleContext {
  public:
    ForLoopContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *FOR();
    antlr4::tree::TerminalNode *VAR();
    antlr4::tree::TerminalNode *IN();
    RangeContext *range();
    antlr4::tree::TerminalNode *NEWLINE();
    ForInnerContext *forInner();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ForLoopContext* forLoop();

  class  ForInnerContext : public antlr4::ParserRuleContext {
  public:
    ForInnerContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *FORSTART();
    antlr4::tree::TerminalNode *NEWLINE();
    antlr4::tree::TerminalNode *FOREND();
    std::vector<LineContext *> line();
    LineContext* line(size_t i);


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ForInnerContext* forInner();

  class  WhileLoopContext : public antlr4::ParserRuleContext {
  public:
    WhileLoopContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *WHILE();
    antlr4::tree::TerminalNode *ARG();
    CommandContext *command();
    antlr4::tree::TerminalNode *END();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  WhileLoopContext* whileLoop();

  class  IfElseStatementContext : public antlr4::ParserRuleContext {
  public:
    IfElseStatementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *IF();
    antlr4::tree::TerminalNode *ARG();
    std::vector<CommandContext *> command();
    CommandContext* command(size_t i);
    antlr4::tree::TerminalNode *ELSE();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  IfElseStatementContext* ifElseStatement();

  class  LsCommandContext : public antlr4::ParserRuleContext {
  public:
    LsCommandContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *LS();
    FlagsContext *flags();
    antlr4::tree::TerminalNode *NEWLINE();
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
    antlr4::tree::TerminalNode *NEWLINE();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  PwdCommandContext* pwdCommand();

  class  CatCommandContext : public antlr4::ParserRuleContext {
  public:
    CatCommandContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *CAT();
    FlagsContext *flags();
    antlr4::tree::TerminalNode *NEWLINE();
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
    FlagsContext *flags();
    antlr4::tree::TerminalNode *NEWLINE();
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
    FlagsContext *flags();
    antlr4::tree::TerminalNode *NEWLINE();
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
    FlagsContext *flags();
    antlr4::tree::TerminalNode *NEWLINE();
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
    FlagsContext *flags();
    antlr4::tree::TerminalNode *NEWLINE();
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
    FlagsContext *flags();
    antlr4::tree::TerminalNode *NEWLINE();
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
    FlagsContext *flags();
    antlr4::tree::TerminalNode *NEWLINE();
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
    FlagsContext *flags();
    antlr4::tree::TerminalNode *NEWLINE();
    std::vector<antlr4::tree::TerminalNode *> ARG();
    antlr4::tree::TerminalNode* ARG(size_t i);
    std::vector<antlr4::tree::TerminalNode *> VAR();
    antlr4::tree::TerminalNode* VAR(size_t i);


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  CpCommandContext* cpCommand();

  class  AssignmentContext : public antlr4::ParserRuleContext {
  public:
    AssignmentContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *VAR();
    antlr4::tree::TerminalNode *EQ();
    antlr4::tree::TerminalNode *ARG();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  AssignmentContext* assignment();

  class  VariableAssignmentContext : public antlr4::ParserRuleContext {
  public:
    VariableAssignmentContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *VAR();
    antlr4::tree::TerminalNode *EQ();
    antlr4::tree::TerminalNode *ENV_VAR();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  VariableAssignmentContext* variableAssignment();

  class  RangeContext : public antlr4::ParserRuleContext {
  public:
    RangeContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *LBRAC();
    std::vector<antlr4::tree::TerminalNode *> INT();
    antlr4::tree::TerminalNode* INT(size_t i);
    antlr4::tree::TerminalNode *INB();
    antlr4::tree::TerminalNode *RBRAC();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  RangeContext* range();

  class  First_intContext : public antlr4::ParserRuleContext {
  public:
    First_intContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *INT();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  First_intContext* first_int();

  class  Second_intContext : public antlr4::ParserRuleContext {
  public:
    Second_intContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *INT();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Second_intContext* second_int();

  class  FlagsContext : public antlr4::ParserRuleContext {
  public:
    FlagsContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<antlr4::tree::TerminalNode *> FLAG();
    antlr4::tree::TerminalNode* FLAG(size_t i);
    std::vector<antlr4::tree::TerminalNode *> WS();
    antlr4::tree::TerminalNode* WS(size_t i);


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  FlagsContext* flags();


  // By default the static state used to implement the parser is lazily initialized during the first
  // call to the constructor. You can call this function if you wish to initialize the static state
  // ahead of time.
  static void initialize();

private:
};

