#include "ShellXBaseVisitor.h"

class ShellXVisitorImpl : public ShellXBaseVisitor {
    std::any visitProgram(ShellXParser::ProgramContext* ctx) override;
    std::any visitLsCommand(ShellXParser::LsCommandContext* ctx) override;
};