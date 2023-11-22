#include "ShellXBaseVisitor.h"
#include <tree/ParseTreeVisitor.h>

class ShellXVisitorImpl : public ShellXBaseVisitor {
public:
    virtual std::any visitProgram(ShellXParser::ProgramContext* ctx) override {
        return visitChildren(ctx);
    }

    virtual std::any visitLs(ShellXParser::LsContext* ctx) override {
        return visitChildren(ctx);
    }

    virtual std::any visitPwd(ShellXParser::PwdContext* ctx) override {
        return visitChildren(ctx);
    }

    virtual std::any visitCat(ShellXParser::CatContext* ctx) override {
        return visitChildren(ctx);
    }

    virtual std::any visitMv(ShellXParser::MvContext* ctx) override {
        return visitChildren(ctx);
    }

    virtual std::any visitTouch(ShellXParser::TouchContext* ctx) override {
        return visitChildren(ctx);
    }

    virtual std::any visitEcho(ShellXParser::EchoContext* ctx) override {
        return visitChildren(ctx);
    }

    virtual std::any visitRm(ShellXParser::RmContext* ctx) override {
        return visitChildren(ctx);
    }

    virtual std::any visitMkdir(ShellXParser::MkdirContext* ctx) override {
        return visitChildren(ctx);
    }

    virtual std::any visitGrep(ShellXParser::GrepContext* ctx) override {
        return visitChildren(ctx);
    }

    virtual std::any visitCp(ShellXParser::CpContext* ctx) override {
        return visitChildren(ctx);
    }

    virtual std::any visitStructure(ShellXParser::StructureContext* ctx) override {
        return visitChildren(ctx);
    }

    virtual std::any visitAssignment(ShellXParser::AssignmentContext* ctx) override {
        return visitChildren(ctx);
    }

};