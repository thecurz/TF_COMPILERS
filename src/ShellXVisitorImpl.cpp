#include "../headers/ShellXVisitorImpl.h"

std::any ShellXVisitorImpl::visitProgram(ShellXParser::ProgramContext* ctx) {
    for (auto context : ctx->command()) {
        auto LsCommandContext = dynamic_cast<ShellXParser::LsCommandContext*>(context);
        if (LsCommandContext) {
            visitLsCommand(LsCommandContext);
            continue;
        }
    }
    return visitChildren(ctx);
}

std::any ShellXVisitorImpl::visitLsCommand(ShellXParser::LsCommandContext* ctx) {
    std::cout << "visitLsCommand" << std::endl;
    return visitChildren(ctx);
}
