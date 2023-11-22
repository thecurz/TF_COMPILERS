
// Generated from ShellX.g4 by ANTLR 4.13.1

#pragma once


#include "antlr4-runtime.h"
#include "ShellXParser.h"



/**
 * This class defines an abstract visitor for a parse tree
 * produced by ShellXParser.
 */
class  ShellXVisitor : public antlr4::tree::AbstractParseTreeVisitor {
public:

  /**
   * Visit parse trees produced by ShellXParser.
   */
    virtual std::any visitProgram(ShellXParser::ProgramContext *context) = 0;

    virtual std::any visitCommand(ShellXParser::CommandContext *context) = 0;

    virtual std::any visitLsCommand(ShellXParser::LsCommandContext *context) = 0;

    virtual std::any visitPwdCommand(ShellXParser::PwdCommandContext *context) = 0;

    virtual std::any visitCatCommand(ShellXParser::CatCommandContext *context) = 0;

    virtual std::any visitMvCommand(ShellXParser::MvCommandContext *context) = 0;

    virtual std::any visitTouchCommand(ShellXParser::TouchCommandContext *context) = 0;

    virtual std::any visitEchoCommand(ShellXParser::EchoCommandContext *context) = 0;

    virtual std::any visitRmCommand(ShellXParser::RmCommandContext *context) = 0;

    virtual std::any visitMkdirCommand(ShellXParser::MkdirCommandContext *context) = 0;

    virtual std::any visitGrepCommand(ShellXParser::GrepCommandContext *context) = 0;

    virtual std::any visitCpCommand(ShellXParser::CpCommandContext *context) = 0;

    virtual std::any visitStructure(ShellXParser::StructureContext *context) = 0;

    virtual std::any visitAssignment(ShellXParser::AssignmentContext *context) = 0;


};

