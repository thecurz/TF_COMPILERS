#include "src/ShellXBaseVisitor.h"
#include "src/ShellXParser.h"
#include <any>

class ShellXVisitorImpl : public ShellXBaseVisitor {
  std::any visitProgram(ShellXParser::ProgramContext *ctx) override;
  std::any visitLsCommand(ShellXParser::LsCommandContext *ctx) override;
  std::any visitCommand(ShellXParser::CommandContext *ctx) override;
  std::any visitPwdCommand(ShellXParser::PwdCommandContext *ctx) override;
  std::any visitCatCommand(ShellXParser::CatCommandContext *ctx) override;
  std::any visitMvCommand(ShellXParser::MvCommandContext *ctx) override;
  std::any visitTouchCommand(ShellXParser::TouchCommandContext *ctx) override;
  std::any visitEchoCommand(ShellXParser::EchoCommandContext *ctx) override;
  std::any visitRmCommand(ShellXParser::RmCommandContext *ctx) override;
  std::any visitMkdirCommand(ShellXParser::MkdirCommandContext *ctx) override;
  std::any visitGrepCommand(ShellXParser::GrepCommandContext *ctx) override;
  std::any visitCpCommand(ShellXParser::CpCommandContext *ctx) override;
  std::any visitStructure(ShellXParser::StructureContext *ctx) override;
  std::any visitForLoop(ShellXParser::ForLoopContext *ctx) override;
  std::any visitWhileLoop(ShellXParser::WhileLoopContext *ctx) override;
  std::any
  visitIfElseStatement(ShellXParser::IfElseStatementContext *ctx) override;
  // bool ShellXVisitorImpl::evaluateCondition(const std::string& condition) override;
  std::any visitAssignment(ShellXParser::AssignmentContext *ctx) override;
  std::any visitVariableAssignment(
      ShellXParser::VariableAssignmentContext *ctx) override;
  std::any visitFlags(ShellXParser::FlagsContext *ctx) override;
  std::any visitCode(ShellXParser::CodeContext *ctx) override;
  std::any visitExpr(ShellXParser::ExprContext *ctx) override;
};
