#include "ShellXBaseVisitor.h"
#include <tree/ParseTreeVisitor.h>

class ShellXVisitorImpl : public ShellXBaseVisitor {
public:
    virtual antlrcpp::Any visitProgram(ShellXParser::ProgramContext *ctx) override {
        return visitChildren(ctx);
    }

    virtual antlrcpp::Any visitCommand(ShellXParser::CommandContext *ctx) override {
        return visitChildren(ctx);
    }

    virtual antlrcpp::Any visitStructure(ShellXParser::StructureContext *ctx) override {
        return visitChildren(ctx);
    }

    virtual antlrcpp::Any visitAssignment(ShellXParser::AssignmentContext *ctx) override {
        return visitChildren(ctx);
    }
};