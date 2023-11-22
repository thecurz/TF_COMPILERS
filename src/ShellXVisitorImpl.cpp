#include "../headers/ShellXVisitorImpl.h"
#include <cstdlib>
#include <dirent.h>
std::any ShellXVisitorImpl::visitProgram(ShellXParser::ProgramContext *ctx) {
  for (auto context : ctx->command()) {
    auto LsCommandContext =
        dynamic_cast<ShellXParser::LsCommandContext *>(context);
    if (LsCommandContext) {
      visitLsCommand(LsCommandContext);
      continue;
    }
  }
  return visitChildren(ctx);
}

std::any
ShellXVisitorImpl::visitLsCommand(ShellXParser::LsCommandContext *ctx) {
  // TODO: Implement and test ls behavior
  std::cout << "DEBUG: ls command" << std::endl;
  DIR *dir;
  struct dirent *ent;
  if ((dir = opendir("./")) != NULL) {
    while ((ent = readdir(dir)) != NULL) {
      printf("%s\n", ent->d_name);
    }
    closedir(dir);
  } else {
    perror("");
  }
  return visitChildren(ctx);
}
