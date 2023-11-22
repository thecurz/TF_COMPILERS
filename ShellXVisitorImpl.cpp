#include "ShellXVisitorImpl.h"

std::any ShellXVisitorImpl::visitProgram(ShellXParser::ProgramContext* ctx) {
    return visitChildren(ctx);
}

std::any ShellXVisitorImpl::visitLs(ShellXParser::LsContext* ctx) {
    return visitChildren(ctx);
}

std::any ShellXVisitorImpl::visitPwd(ShellXParser::PwdContext* ctx) {
    return visitChildren(ctx);
}

std::any ShellXVisitorImpl::visitCat(ShellXParser::CatContext* ctx) {
    return visitChildren(ctx);
}

std::any ShellXVisitorImpl::visitMv(ShellXParser::MvContext* ctx) {
    return visitChildren(ctx);
}

std::any ShellXVisitorImpl::visitTouch(ShellXParser::TouchContext* ctx) {
    return visitChildren(ctx);
}

std::any ShellXVisitorImpl::visitEcho(ShellXParser::EchoContext* ctx) {
    return visitChildren(ctx);
}

std::any ShellXVisitorImpl::visitRm(ShellXParser::RmContext* ctx) {
    return visitChildren(ctx);
}

std::any ShellXVisitorImpl::visitMkdir(ShellXParser::MkdirContext* ctx) {
    return visitChildren(ctx);
}

std::any ShellXVisitorImpl::visitGrep(ShellXParser::GrepContext* ctx) {
    return visitChildren(ctx);
}

std::any ShellXVisitorImpl::visitCp(ShellXParser::CpContext* ctx) {
    return visitChildren(ctx);
}

std::any ShellXVisitorImpl::visitStructure(ShellXParser::StructureContext* ctx) {
    return visitChildren(ctx);
}

std::any ShellXVisitorImpl::visitAssignment(ShellXParser::AssignmentContext* ctx) {
    return visitChildren(ctx);
}