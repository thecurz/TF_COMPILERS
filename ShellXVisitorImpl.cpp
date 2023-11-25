#include "ShellXVisitorImpl.h"
#include <cstdlib>
#include <iostream>
#include <string>
#include "exprtk.hpp"

std::any visitChildren(antlr4::tree::ParseTree *tree) { return 0; }
std::any ShellXVisitorImpl::visitProgram(ShellXParser::ProgramContext *ctx) {

  return visitChildren(ctx);
}

std::any
ShellXVisitorImpl::visitLsCommand(ShellXParser::LsCommandContext *ctx) {
  const char *initialCommand = "ls ";
  char *args = new char[strlen(initialCommand) + 1];
  strcpy(args, initialCommand);
  if (ctx->flags() != nullptr) {
    for (auto flag : ctx->flags()->FLAG()) {
      std::string flagText = flag->getText();
      char *newArgs = new char[strlen(args) + flagText.length() + 1];

      if (args != nullptr) {
        strcpy(newArgs, args);
        delete[] args;
      }

      strcat(newArgs, flagText.c_str());

      args = newArgs;
    }
    if (args != nullptr) {
      system(args);

      delete[] args;
    } else {
      system("ls");
    }
    return visitChildren(ctx);
  }
  system("ls");
  return visitChildren(ctx);
}
std::any ShellXVisitorImpl::visitCommand(ShellXParser::CommandContext *ctx) {
  return visitChildren(ctx);
}

std::any
ShellXVisitorImpl::visitPwdCommand(ShellXParser::PwdCommandContext *ctx) {
  system("pwd");
  return visitChildren(ctx);
}

std::any
ShellXVisitorImpl::visitCatCommand(ShellXParser::CatCommandContext *ctx) {
  const char *initialCommand = "cat ";
  char *args = new char[strlen(initialCommand) + 1];
  strcpy(args, initialCommand);

  if (ctx->flags() != nullptr) {
    for (auto flag : ctx->flags()->FLAG()) {
      std::string flagText = flag->getText();
      char *newArgs = new char[strlen(args) + flagText.length() + 1];

      if (args != nullptr) {
        strcpy(newArgs, args);
        delete[] args;
      }

      strcat(newArgs, flagText.c_str());

      args = newArgs;
    }
  } else {
    std::cerr << "Error: Missing flags for cat command.\n";
    system("cat");
    return visitChildren(ctx);
  }

  system(args);

  delete[] args;
  return visitChildren(ctx);
}

std::any
ShellXVisitorImpl::visitMvCommand(ShellXParser::MvCommandContext *ctx) {
  const char *initialCommand = "mv ";
  char *args = new char[strlen(initialCommand) + 1];
  strcpy(args, initialCommand);

  if (ctx->flags() != nullptr) {
    for (auto flag : ctx->flags()->FLAG()) {
      std::string flagText = flag->getText();
      char *newArgs = new char[strlen(args) + flagText.length() + 1];

      if (args != nullptr) {
        strcpy(newArgs, args);
        delete[] args;
      }

      strcat(newArgs, flagText.c_str());

      args = newArgs;
    }
  } else {
    std::cerr << "Error: Missing flags for mv command.\n";
    return visitChildren(ctx);
  }

  system(args);

  delete[] args;
  return visitChildren(ctx);
}

std::any
ShellXVisitorImpl::visitTouchCommand(ShellXParser::TouchCommandContext *ctx) {
  const char *initialCommand = "touch ";
  char *args = new char[strlen(initialCommand) + 1];
  strcpy(args, initialCommand);

  if (ctx->flags() != nullptr) {
    for (auto flag : ctx->flags()->FLAG()) {
      std::string flagText = flag->getText();
      char *newArgs = new char[strlen(args) + flagText.length() + 1];

      if (args != nullptr) {
        strcpy(newArgs, args);
        delete[] args;
      }

      strcat(newArgs, flagText.c_str());

      args = newArgs;
    }
  } else {
    std::cerr << "Error: Missing flags for touch command.\n";
    system("touch");
    return visitChildren(ctx);
  }

  if (ctx->ARG().size() > 0) {
    std::string argText = ctx->ARG()[0]->getText();
    char *newArgs = new char[strlen(args) + argText.length() + 1];

    if (args != nullptr) {
      strcpy(newArgs, args);
      delete[] args;
    }

    strcat(newArgs, argText.c_str());

    args = newArgs;
  } else if (ctx->VAR().size() > 0) {
    std::string argText = ctx->VAR()[0]->getText();
    char *newArgs = new char[strlen(args) + argText.length() + 1];

    if (args != nullptr) {
      strcpy(newArgs, args);
      delete[] args;
    }

    strcat(newArgs, argText.c_str());

    args = newArgs;
  } else {
    std::cerr << "Error: Missing argument for touch command.\n";
    system("touch");
    return visitChildren(ctx);
  }

  system(args);

  delete[] args;
  return visitChildren(ctx);
}

std::any
ShellXVisitorImpl::visitEchoCommand(ShellXParser::EchoCommandContext *ctx) {
  const char *initialCommand = "echo ";
  char *args = new char[strlen(initialCommand) + 1];
  strcpy(args, initialCommand);

  if (ctx->flags() != nullptr) {
    for (auto flag : ctx->flags()->FLAG()) {
      std::string flagText = flag->getText();
      char *newArgs = new char[strlen(args) + flagText.length() + 1];

      if (args != nullptr) {
        strcpy(newArgs, args);
        delete[] args;
      }

      strcat(newArgs, flagText.c_str());

      args = newArgs;
    }
  } else {
    // TODO: remove??
    // std::cerr << "Error: Missing flags for echo command.\n";
    // system("echo");
    // return visitChildren(ctx);
  }
  if (ctx->ARG().size() > 0) {
    std::string argText = ctx->ARG()[0]->getText();
    char *newArgs = new char[strlen(args) + argText.length() + 1];

    if (args != nullptr) {
      strcpy(newArgs, args);
      delete[] args;
    }

    strcat(newArgs, argText.c_str());

    args = newArgs;
  } else if (ctx->VAR().size() > 0) {
    std::string argText = ctx->VAR()[0]->getText();
    char *newArgs = new char[strlen(args) + argText.length() + 1];

    if (args != nullptr) {
      strcpy(newArgs, args);
      delete[] args;
    }

    strcat(newArgs, argText.c_str());

    args = newArgs;
  } else {
    std::cerr << "Error: Missing argument for echo command.\n";
    system("echo");
    return visitChildren(ctx);
  }

  system(args);

  delete[] args;
  return visitChildren(ctx);
}

std::any
ShellXVisitorImpl::visitRmCommand(ShellXParser::RmCommandContext *ctx) {
  const char *initialCommand = "rm ";
  char *args = new char[strlen(initialCommand) + 1];
  strcpy(args, initialCommand);

  if (ctx->flags() != nullptr) {
    for (auto flag : ctx->flags()->FLAG()) {
      std::string flagText = flag->getText();
      char *newArgs = new char[strlen(args) + flagText.length() + 1];

      if (args != nullptr) {
        strcpy(newArgs, args);
        delete[] args;
      }

      strcat(newArgs, flagText.c_str());

      args = newArgs;
    }
  } else {
    // TODO: remove??
    std::cerr << "Error: Missing flags for rm command.\n";
    system("rm");
    return visitChildren(ctx);
  }
  if (ctx->ARG().size() > 0) {
    std::string argText = ctx->ARG()[0]->getText();
    char *newArgs = new char[strlen(args) + argText.length() + 1];

    if (args != nullptr) {
      strcpy(newArgs, args);
      delete[] args;
    }

    strcat(newArgs, argText.c_str());

    args = newArgs;
  } else if (ctx->VAR().size() > 0) {
    std::string argText = ctx->VAR()[0]->getText();
    char *newArgs = new char[strlen(args) + argText.length() + 1];

    if (args != nullptr) {
      strcpy(newArgs, args);
      delete[] args;
    }

    strcat(newArgs, argText.c_str());

    args = newArgs;
  } else {
    std::cerr << "Error: Missing argument for rm command.\n";
    system("rm");
    return visitChildren(ctx);
  }

  system(args);

  delete[] args;
  return visitChildren(ctx);
}

std::any
ShellXVisitorImpl::visitMkdirCommand(ShellXParser::MkdirCommandContext *ctx) {
  const char *initialCommand = "mkdir ";
  char *args = new char[strlen(initialCommand) + 1];
  strcpy(args, initialCommand);

  if (ctx->flags() != nullptr) {
    for (auto flag : ctx->flags()->FLAG()) {
      std::string flagText = flag->getText();
      char *newArgs = new char[strlen(args) + flagText.length() + 1];

      if (args != nullptr) {
        strcpy(newArgs, args);
        delete[] args;
      }

      strcat(newArgs, flagText.c_str());

      args = newArgs;
    }
  } else {
    // TODO: remove??
    std::cerr << "Error: Missing flags for mkdir command.\n";
    system("mkdir");
    return visitChildren(ctx);
  }
  if (ctx->ARG().size() > 0) {
    std::string argText = ctx->ARG()[0]->getText();
    char *newArgs = new char[strlen(args) + argText.length() + 1];

    if (args != nullptr) {
      strcpy(newArgs, args);
      delete[] args;
    }

    strcat(newArgs, argText.c_str());

    args = newArgs;
  } else if (ctx->VAR().size() > 0) {
    std::string argText = ctx->VAR()[0]->getText();
    char *newArgs = new char[strlen(args) + argText.length() + 1];

    if (args != nullptr) {
      strcpy(newArgs, args);
      delete[] args;
    }

    strcat(newArgs, argText.c_str());

    args = newArgs;
  } else {
    std::cerr << "Error: Missing argument for mkdir command.\n";
    system("mkdir");
    return visitChildren(ctx);
  }

  system(args);

  delete[] args;
  return visitChildren(ctx);
}

std::any
ShellXVisitorImpl::visitGrepCommand(ShellXParser::GrepCommandContext *ctx) {
  const char *initialCommand = "grep ";
  char *args = new char[strlen(initialCommand) + 1];
  strcpy(args, initialCommand);

  if (ctx->flags() != nullptr) {
    for (auto flag : ctx->flags()->FLAG()) {
      std::string flagText = flag->getText();
      char *newArgs = new char[strlen(args) + flagText.length() + 1];

      if (args != nullptr) {
        strcpy(newArgs, args);
        delete[] args;
      }

      strcat(newArgs, flagText.c_str());

      args = newArgs;
    }
  } else {
    // TODO: remove??
    std::cerr << "Error: Missing flags for grep command.\n";
    system("grep");
    return visitChildren(ctx);
  }
  if (ctx->ARG().size() > 0) {
    std::string argText = ctx->ARG()[0]->getText();
    char *newArgs = new char[strlen(args) + argText.length() + 1];

    if (args != nullptr) {
      strcpy(newArgs, args);
      delete[] args;
    }

    strcat(newArgs, argText.c_str());

    args = newArgs;
  } else if (ctx->VAR().size() > 0) {
    std::string argText = ctx->VAR()[0]->getText();
    char *newArgs = new char[strlen(args) + argText.length() + 1];

    if (args != nullptr) {
      strcpy(newArgs, args);
      delete[] args;
    }

    strcat(newArgs, argText.c_str());

    args = newArgs;
  } else {
    std::cerr << "Error: Missing argument for grep command.\n";
    system("grep");
    return visitChildren(ctx);
  }

  system(args);

  delete[] args;
  return visitChildren(ctx);
}

std::any
ShellXVisitorImpl::visitCpCommand(ShellXParser::CpCommandContext *ctx) {
  const char *initialCommand = "grep ";
  char *args = new char[strlen(initialCommand) + 1];
  strcpy(args, initialCommand);

  if (ctx->flags() != nullptr) {
    for (auto flag : ctx->flags()->FLAG()) {
      std::string flagText = flag->getText();
      char *newArgs = new char[strlen(args) + flagText.length() + 1];

      if (args != nullptr) {
        strcpy(newArgs, args);
        delete[] args;
      }

      strcat(newArgs, flagText.c_str());

      args = newArgs;
    }
  } else {
    // TODO: remove??
    std::cerr << "Error: Missing flags for grep command.\n";
    system("grep");
    return visitChildren(ctx);
  }
  if (ctx->ARG().size() > 0) {
    std::string argText = ctx->ARG()[0]->getText();
    char *newArgs = new char[strlen(args) + argText.length() + 1];

    if (args != nullptr) {
      strcpy(newArgs, args);
      delete[] args;
    }

    strcat(newArgs, argText.c_str());

    args = newArgs;
  } else if (ctx->VAR().size() > 0) {
    std::string argText = ctx->VAR()[0]->getText();
    char *newArgs = new char[strlen(args) + argText.length() + 1];

    if (args != nullptr) {
      strcpy(newArgs, args);
      delete[] args;
    }

    strcat(newArgs, argText.c_str());

    args = newArgs;
  } else {
    std::cerr << "Error: Missing argument for grep command.\n";
    system("grep");
    return visitChildren(ctx);
  }

  system(args);

  delete[] args;
  return visitChildren(ctx);
}

std::any
ShellXVisitorImpl::visitStructure(ShellXParser::StructureContext *ctx) {
  auto forloop = ctx->forLoop();
  // if (forloop != nullptr) {
  //   visitForLoop(forloop);
  // }
  return visitChildren(ctx);
}

std::any ShellXVisitorImpl::visitForLoop(ShellXParser::ForLoopContext *ctx) {
  int lstart = stoi(ctx->range()->INT()[0]->getText());
  int llast = stoi(ctx->range()->INT()[1]->getText());
  auto line = ctx->forInner()->line();
  for (int i = lstart; i < llast; i++) {
    // std::cout << i << std::endl;
    for (auto line : line)
      visitLine(line);
  }
  return visitChildren(ctx);
}

std::any
ShellXVisitorImpl::visitWhileLoop(ShellXParser::WhileLoopContext *ctx) {
  std::string condition = ctx->expr()->getText();
  while (evaluateCondition(condition)) {
      for (auto line : ctx->whileInner()->line()) {
          visitLine(line);
      }
  }
  return visitChildren(ctx);
}

std::any ShellXVisitorImpl::visitIfElseStatement(
    ShellXParser::IfElseStatementContext *ctx) {
std::string condition = ctx->expr()->getText();

  if (evaluateCondition(condition)) {
    for (auto line : ctx->ifBlock()->line()) {
        visitLine(line);
    }
  }
  else if (ctx->elseBlock() != nullptr) {
    for (auto line : ctx->elseBlock()->line()) {
        visitLine(line);
    }
  }
  return visitChildren(ctx);
}

bool ShellXVisitorImpl::evaluateCondition(const std::string& condition) {
    typedef exprtk::symbol_table<double> symbol_table_t;
    typedef exprtk::expression<double> expression_t;
    typedef exprtk::parser<double> parser_t;

    symbol_table_t symbol_table;
    expression_t expression;
    parser_t parser;

    symbol_table.add_constants();
    symbol_table.add_variable("i", 0.0);

    expression.register_symbol_table(symbol_table);

    if (!parser.compile(condition, expression)) {
        std::cerr << "Error al compilar la condición: " << condition << std::endl;
        return false;
    }

    double result = expression.value();
    return static_cast<bool>(result);
}

std::any
ShellXVisitorImpl::visitAssignment(ShellXParser::AssignmentContext *ctx) {
  return visitChildren(ctx);
}

std::any ShellXVisitorImpl::visitVariableAssignment(
    ShellXParser::VariableAssignmentContext *ctx) {
  return visitChildren(ctx);
}

std::any ShellXVisitorImpl::visitFlags(ShellXParser::FlagsContext *ctx) {
  return visitChildren(ctx);
}
