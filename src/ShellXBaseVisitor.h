
// Generated from ShellX.g4 by ANTLR 4.13.1

#pragma once


#include "antlr4-runtime.h"
#include "ShellXVisitor.h"


/**
 * This class provides an empty implementation of ShellXVisitor, which can be
 * extended to create a visitor which only needs to handle a subset of the available methods.
 */
class  ShellXBaseVisitor : public ShellXVisitor {
public:

  virtual std::any visitProgram(ShellXParser::ProgramContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitStatement(ShellXParser::StatementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitLine(ShellXParser::LineContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitCommand(ShellXParser::CommandContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitStructure(ShellXParser::StructureContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitForLoop(ShellXParser::ForLoopContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitForInner(ShellXParser::ForInnerContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitWhileLoop(ShellXParser::WhileLoopContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitIfElseStatement(ShellXParser::IfElseStatementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitLsCommand(ShellXParser::LsCommandContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitPwdCommand(ShellXParser::PwdCommandContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitCatCommand(ShellXParser::CatCommandContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitMvCommand(ShellXParser::MvCommandContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitTouchCommand(ShellXParser::TouchCommandContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitEchoCommand(ShellXParser::EchoCommandContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitRmCommand(ShellXParser::RmCommandContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitMkdirCommand(ShellXParser::MkdirCommandContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitGrepCommand(ShellXParser::GrepCommandContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitCpCommand(ShellXParser::CpCommandContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitAssignment(ShellXParser::AssignmentContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitVariableAssignment(ShellXParser::VariableAssignmentContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitRange(ShellXParser::RangeContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitFirst_int(ShellXParser::First_intContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitSecond_int(ShellXParser::Second_intContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitFlags(ShellXParser::FlagsContext *ctx) override {
    return visitChildren(ctx);
  }


};

