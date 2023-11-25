#include "src/ShellXBaseVisitor.h"

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
  std::any visitAssignment(ShellXParser::AssignmentContext *ctx) override;
  std::any visitVariableAssignment(
      ShellXParser::VariableAssignmentContext *ctx) override;
  std::any visitFlags(ShellXParser::FlagsContext *ctx) override;
};