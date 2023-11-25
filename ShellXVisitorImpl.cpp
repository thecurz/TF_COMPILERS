#include "ShellXVisitorImpl.h"
#include <cstdlib>
#include <iostream>
#include <string>
std::any visitChildren(antlr4::tree::ParseTree *tree) { return 0; }
std::any ShellXVisitorImpl::visitProgram(ShellXParser::ProgramContext *ctx) {
  // for (auto cmd : ctx->line()) {
  //   std::cout << cmd->statement()->command()->lsCommand()->getText()
  //             << std::endl;
  // }

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
  return visitChildren(ctx);
}

std::any ShellXVisitorImpl::visitForLoop(ShellXParser::ForLoopContext *ctx) {
  return visitChildren(ctx);
}

std::any
ShellXVisitorImpl::visitWhileLoop(ShellXParser::WhileLoopContext *ctx) {
  return visitChildren(ctx);
}

std::any ShellXVisitorImpl::visitIfElseStatement(
    ShellXParser::IfElseStatementContext *ctx) {
  return visitChildren(ctx);
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
