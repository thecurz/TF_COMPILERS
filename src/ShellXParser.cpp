
// Generated from ShellX.g4 by ANTLR 4.13.1


#include "../headers/ShellXVisitor.h"

#include "../headers/ShellXParser.h"


using namespace antlrcpp;

using namespace antlr4;

namespace {

struct ShellXParserStaticData final {
  ShellXParserStaticData(std::vector<std::string> ruleNames,
                        std::vector<std::string> literalNames,
                        std::vector<std::string> symbolicNames)
      : ruleNames(std::move(ruleNames)), literalNames(std::move(literalNames)),
        symbolicNames(std::move(symbolicNames)),
        vocabulary(this->literalNames, this->symbolicNames) {}

  ShellXParserStaticData(const ShellXParserStaticData&) = delete;
  ShellXParserStaticData(ShellXParserStaticData&&) = delete;
  ShellXParserStaticData& operator=(const ShellXParserStaticData&) = delete;
  ShellXParserStaticData& operator=(ShellXParserStaticData&&) = delete;

  std::vector<antlr4::dfa::DFA> decisionToDFA;
  antlr4::atn::PredictionContextCache sharedContextCache;
  const std::vector<std::string> ruleNames;
  const std::vector<std::string> literalNames;
  const std::vector<std::string> symbolicNames;
  const antlr4::dfa::Vocabulary vocabulary;
  antlr4::atn::SerializedATNView serializedATN;
  std::unique_ptr<antlr4::atn::ATN> atn;
};

::antlr4::internal::OnceFlag shellxParserOnceFlag;
#if ANTLR4_USE_THREAD_LOCAL_CACHE
static thread_local
#endif
ShellXParserStaticData *shellxParserStaticData = nullptr;

void shellxParserInitialize() {
#if ANTLR4_USE_THREAD_LOCAL_CACHE
  if (shellxParserStaticData != nullptr) {
    return;
  }
#else
  assert(shellxParserStaticData == nullptr);
#endif
  auto staticData = std::make_unique<ShellXParserStaticData>(
    std::vector<std::string>{
      "program", "command", "lsCommand", "pwdCommand", "catCommand", "mvCommand", 
      "touchCommand", "echoCommand", "rmCommand", "mkdirCommand", "grepCommand", 
      "cpCommand", "structure", "assignment"
    },
    std::vector<std::string>{
      "", "'('", "')'", "'='", "'#shellx'", "'ls'", "'pwd'", "'cat'", "'mv'", 
      "'touch'", "'echo'", "'rm'", "'mkdir'", "'grep'", "'cp'", "'for'", 
      "'while'", "'if'", "'elif'"
    },
    std::vector<std::string>{
      "", "", "", "", "SHELLX", "LS", "PWD", "CAT", "MV", "TOUCH", "ECHO", 
      "RM", "MKDIR", "GREP", "CP", "FOR", "WHILE", "IF", "ELIF", "VAR", 
      "ARG", "WS"
    }
  );
  static const int32_t serializedATNSegment[] = {
  	4,1,21,132,2,0,7,0,2,1,7,1,2,2,7,2,2,3,7,3,2,4,7,4,2,5,7,5,2,6,7,6,2,
  	7,7,7,2,8,7,8,2,9,7,9,2,10,7,10,2,11,7,11,2,12,7,12,2,13,7,13,1,0,1,0,
  	1,0,1,0,5,0,33,8,0,10,0,12,0,36,9,0,1,0,1,0,1,1,1,1,1,1,1,1,1,1,1,1,1,
  	1,1,1,1,1,1,1,3,1,50,8,1,1,2,1,2,5,2,54,8,2,10,2,12,2,57,9,2,1,3,1,3,
  	5,3,61,8,3,10,3,12,3,64,9,3,1,4,1,4,5,4,68,8,4,10,4,12,4,71,9,4,1,5,1,
  	5,5,5,75,8,5,10,5,12,5,78,9,5,1,6,1,6,5,6,82,8,6,10,6,12,6,85,9,6,1,7,
  	1,7,5,7,89,8,7,10,7,12,7,92,9,7,1,8,1,8,5,8,96,8,8,10,8,12,8,99,9,8,1,
  	9,1,9,5,9,103,8,9,10,9,12,9,106,9,9,1,10,1,10,5,10,110,8,10,10,10,12,
  	10,113,9,10,1,11,1,11,5,11,117,8,11,10,11,12,11,120,9,11,1,12,1,12,1,
  	12,1,12,1,12,1,12,1,13,1,13,1,13,1,13,1,13,0,0,14,0,2,4,6,8,10,12,14,
  	16,18,20,22,24,26,0,2,1,0,19,20,1,0,15,18,139,0,28,1,0,0,0,2,49,1,0,0,
  	0,4,51,1,0,0,0,6,58,1,0,0,0,8,65,1,0,0,0,10,72,1,0,0,0,12,79,1,0,0,0,
  	14,86,1,0,0,0,16,93,1,0,0,0,18,100,1,0,0,0,20,107,1,0,0,0,22,114,1,0,
  	0,0,24,121,1,0,0,0,26,127,1,0,0,0,28,34,5,4,0,0,29,33,3,2,1,0,30,33,3,
  	24,12,0,31,33,3,26,13,0,32,29,1,0,0,0,32,30,1,0,0,0,32,31,1,0,0,0,33,
  	36,1,0,0,0,34,32,1,0,0,0,34,35,1,0,0,0,35,37,1,0,0,0,36,34,1,0,0,0,37,
  	38,5,0,0,1,38,1,1,0,0,0,39,50,3,4,2,0,40,50,3,6,3,0,41,50,3,8,4,0,42,
  	50,3,10,5,0,43,50,3,12,6,0,44,50,3,14,7,0,45,50,3,16,8,0,46,50,3,18,9,
  	0,47,50,3,20,10,0,48,50,3,22,11,0,49,39,1,0,0,0,49,40,1,0,0,0,49,41,1,
  	0,0,0,49,42,1,0,0,0,49,43,1,0,0,0,49,44,1,0,0,0,49,45,1,0,0,0,49,46,1,
  	0,0,0,49,47,1,0,0,0,49,48,1,0,0,0,50,3,1,0,0,0,51,55,5,5,0,0,52,54,7,
  	0,0,0,53,52,1,0,0,0,54,57,1,0,0,0,55,53,1,0,0,0,55,56,1,0,0,0,56,5,1,
  	0,0,0,57,55,1,0,0,0,58,62,5,6,0,0,59,61,7,0,0,0,60,59,1,0,0,0,61,64,1,
  	0,0,0,62,60,1,0,0,0,62,63,1,0,0,0,63,7,1,0,0,0,64,62,1,0,0,0,65,69,5,
  	7,0,0,66,68,7,0,0,0,67,66,1,0,0,0,68,71,1,0,0,0,69,67,1,0,0,0,69,70,1,
  	0,0,0,70,9,1,0,0,0,71,69,1,0,0,0,72,76,5,8,0,0,73,75,7,0,0,0,74,73,1,
  	0,0,0,75,78,1,0,0,0,76,74,1,0,0,0,76,77,1,0,0,0,77,11,1,0,0,0,78,76,1,
  	0,0,0,79,83,5,9,0,0,80,82,7,0,0,0,81,80,1,0,0,0,82,85,1,0,0,0,83,81,1,
  	0,0,0,83,84,1,0,0,0,84,13,1,0,0,0,85,83,1,0,0,0,86,90,5,10,0,0,87,89,
  	7,0,0,0,88,87,1,0,0,0,89,92,1,0,0,0,90,88,1,0,0,0,90,91,1,0,0,0,91,15,
  	1,0,0,0,92,90,1,0,0,0,93,97,5,11,0,0,94,96,7,0,0,0,95,94,1,0,0,0,96,99,
  	1,0,0,0,97,95,1,0,0,0,97,98,1,0,0,0,98,17,1,0,0,0,99,97,1,0,0,0,100,104,
  	5,12,0,0,101,103,7,0,0,0,102,101,1,0,0,0,103,106,1,0,0,0,104,102,1,0,
  	0,0,104,105,1,0,0,0,105,19,1,0,0,0,106,104,1,0,0,0,107,111,5,13,0,0,108,
  	110,7,0,0,0,109,108,1,0,0,0,110,113,1,0,0,0,111,109,1,0,0,0,111,112,1,
  	0,0,0,112,21,1,0,0,0,113,111,1,0,0,0,114,118,5,14,0,0,115,117,7,0,0,0,
  	116,115,1,0,0,0,117,120,1,0,0,0,118,116,1,0,0,0,118,119,1,0,0,0,119,23,
  	1,0,0,0,120,118,1,0,0,0,121,122,7,1,0,0,122,123,5,1,0,0,123,124,5,20,
  	0,0,124,125,5,2,0,0,125,126,3,2,1,0,126,25,1,0,0,0,127,128,5,19,0,0,128,
  	129,5,3,0,0,129,130,5,20,0,0,130,27,1,0,0,0,13,32,34,49,55,62,69,76,83,
  	90,97,104,111,118
  };
  staticData->serializedATN = antlr4::atn::SerializedATNView(serializedATNSegment, sizeof(serializedATNSegment) / sizeof(serializedATNSegment[0]));

  antlr4::atn::ATNDeserializer deserializer;
  staticData->atn = deserializer.deserialize(staticData->serializedATN);

  const size_t count = staticData->atn->getNumberOfDecisions();
  staticData->decisionToDFA.reserve(count);
  for (size_t i = 0; i < count; i++) { 
    staticData->decisionToDFA.emplace_back(staticData->atn->getDecisionState(i), i);
  }
  shellxParserStaticData = staticData.release();
}

}

ShellXParser::ShellXParser(TokenStream *input) : ShellXParser(input, antlr4::atn::ParserATNSimulatorOptions()) {}

ShellXParser::ShellXParser(TokenStream *input, const antlr4::atn::ParserATNSimulatorOptions &options) : Parser(input) {
  ShellXParser::initialize();
  _interpreter = new atn::ParserATNSimulator(this, *shellxParserStaticData->atn, shellxParserStaticData->decisionToDFA, shellxParserStaticData->sharedContextCache, options);
}

ShellXParser::~ShellXParser() {
  delete _interpreter;
}

const atn::ATN& ShellXParser::getATN() const {
  return *shellxParserStaticData->atn;
}

std::string ShellXParser::getGrammarFileName() const {
  return "ShellX.g4";
}

const std::vector<std::string>& ShellXParser::getRuleNames() const {
  return shellxParserStaticData->ruleNames;
}

const dfa::Vocabulary& ShellXParser::getVocabulary() const {
  return shellxParserStaticData->vocabulary;
}

antlr4::atn::SerializedATNView ShellXParser::getSerializedATN() const {
  return shellxParserStaticData->serializedATN;
}


//----------------- ProgramContext ------------------------------------------------------------------

ShellXParser::ProgramContext::ProgramContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* ShellXParser::ProgramContext::SHELLX() {
  return getToken(ShellXParser::SHELLX, 0);
}

tree::TerminalNode* ShellXParser::ProgramContext::EOF() {
  return getToken(ShellXParser::EOF, 0);
}

std::vector<ShellXParser::CommandContext *> ShellXParser::ProgramContext::command() {
  return getRuleContexts<ShellXParser::CommandContext>();
}

ShellXParser::CommandContext* ShellXParser::ProgramContext::command(size_t i) {
  return getRuleContext<ShellXParser::CommandContext>(i);
}

std::vector<ShellXParser::StructureContext *> ShellXParser::ProgramContext::structure() {
  return getRuleContexts<ShellXParser::StructureContext>();
}

ShellXParser::StructureContext* ShellXParser::ProgramContext::structure(size_t i) {
  return getRuleContext<ShellXParser::StructureContext>(i);
}

std::vector<ShellXParser::AssignmentContext *> ShellXParser::ProgramContext::assignment() {
  return getRuleContexts<ShellXParser::AssignmentContext>();
}

ShellXParser::AssignmentContext* ShellXParser::ProgramContext::assignment(size_t i) {
  return getRuleContext<ShellXParser::AssignmentContext>(i);
}


size_t ShellXParser::ProgramContext::getRuleIndex() const {
  return ShellXParser::RuleProgram;
}


std::any ShellXParser::ProgramContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ShellXVisitor*>(visitor))
    return parserVisitor->visitProgram(this);
  else
    return visitor->visitChildren(this);
}

ShellXParser::ProgramContext* ShellXParser::program() {
  ProgramContext *_localctx = _tracker.createInstance<ProgramContext>(_ctx, getState());
  enterRule(_localctx, 0, ShellXParser::RuleProgram);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(28);
    match(ShellXParser::SHELLX);
    setState(34);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 1048544) != 0)) {
      setState(32);
      _errHandler->sync(this);
      switch (_input->LA(1)) {
        case ShellXParser::LS:
        case ShellXParser::PWD:
        case ShellXParser::CAT:
        case ShellXParser::MV:
        case ShellXParser::TOUCH:
        case ShellXParser::ECHO:
        case ShellXParser::RM:
        case ShellXParser::MKDIR:
        case ShellXParser::GREP:
        case ShellXParser::CP: {
          setState(29);
          command();
          break;
        }

        case ShellXParser::FOR:
        case ShellXParser::WHILE:
        case ShellXParser::IF:
        case ShellXParser::ELIF: {
          setState(30);
          structure();
          break;
        }

        case ShellXParser::VAR: {
          setState(31);
          assignment();
          break;
        }

      default:
        throw NoViableAltException(this);
      }
      setState(36);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(37);
    match(ShellXParser::EOF);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- CommandContext ------------------------------------------------------------------

ShellXParser::CommandContext::CommandContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

ShellXParser::LsCommandContext* ShellXParser::CommandContext::lsCommand() {
  return getRuleContext<ShellXParser::LsCommandContext>(0);
}

ShellXParser::PwdCommandContext* ShellXParser::CommandContext::pwdCommand() {
  return getRuleContext<ShellXParser::PwdCommandContext>(0);
}

ShellXParser::CatCommandContext* ShellXParser::CommandContext::catCommand() {
  return getRuleContext<ShellXParser::CatCommandContext>(0);
}

ShellXParser::MvCommandContext* ShellXParser::CommandContext::mvCommand() {
  return getRuleContext<ShellXParser::MvCommandContext>(0);
}

ShellXParser::TouchCommandContext* ShellXParser::CommandContext::touchCommand() {
  return getRuleContext<ShellXParser::TouchCommandContext>(0);
}

ShellXParser::EchoCommandContext* ShellXParser::CommandContext::echoCommand() {
  return getRuleContext<ShellXParser::EchoCommandContext>(0);
}

ShellXParser::RmCommandContext* ShellXParser::CommandContext::rmCommand() {
  return getRuleContext<ShellXParser::RmCommandContext>(0);
}

ShellXParser::MkdirCommandContext* ShellXParser::CommandContext::mkdirCommand() {
  return getRuleContext<ShellXParser::MkdirCommandContext>(0);
}

ShellXParser::GrepCommandContext* ShellXParser::CommandContext::grepCommand() {
  return getRuleContext<ShellXParser::GrepCommandContext>(0);
}

ShellXParser::CpCommandContext* ShellXParser::CommandContext::cpCommand() {
  return getRuleContext<ShellXParser::CpCommandContext>(0);
}


size_t ShellXParser::CommandContext::getRuleIndex() const {
  return ShellXParser::RuleCommand;
}


std::any ShellXParser::CommandContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ShellXVisitor*>(visitor))
    return parserVisitor->visitCommand(this);
  else
    return visitor->visitChildren(this);
}

ShellXParser::CommandContext* ShellXParser::command() {
  CommandContext *_localctx = _tracker.createInstance<CommandContext>(_ctx, getState());
  enterRule(_localctx, 2, ShellXParser::RuleCommand);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(49);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case ShellXParser::LS: {
        enterOuterAlt(_localctx, 1);
        setState(39);
        lsCommand();
        break;
      }

      case ShellXParser::PWD: {
        enterOuterAlt(_localctx, 2);
        setState(40);
        pwdCommand();
        break;
      }

      case ShellXParser::CAT: {
        enterOuterAlt(_localctx, 3);
        setState(41);
        catCommand();
        break;
      }

      case ShellXParser::MV: {
        enterOuterAlt(_localctx, 4);
        setState(42);
        mvCommand();
        break;
      }

      case ShellXParser::TOUCH: {
        enterOuterAlt(_localctx, 5);
        setState(43);
        touchCommand();
        break;
      }

      case ShellXParser::ECHO: {
        enterOuterAlt(_localctx, 6);
        setState(44);
        echoCommand();
        break;
      }

      case ShellXParser::RM: {
        enterOuterAlt(_localctx, 7);
        setState(45);
        rmCommand();
        break;
      }

      case ShellXParser::MKDIR: {
        enterOuterAlt(_localctx, 8);
        setState(46);
        mkdirCommand();
        break;
      }

      case ShellXParser::GREP: {
        enterOuterAlt(_localctx, 9);
        setState(47);
        grepCommand();
        break;
      }

      case ShellXParser::CP: {
        enterOuterAlt(_localctx, 10);
        setState(48);
        cpCommand();
        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- LsCommandContext ------------------------------------------------------------------

ShellXParser::LsCommandContext::LsCommandContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* ShellXParser::LsCommandContext::LS() {
  return getToken(ShellXParser::LS, 0);
}

std::vector<tree::TerminalNode *> ShellXParser::LsCommandContext::ARG() {
  return getTokens(ShellXParser::ARG);
}

tree::TerminalNode* ShellXParser::LsCommandContext::ARG(size_t i) {
  return getToken(ShellXParser::ARG, i);
}

std::vector<tree::TerminalNode *> ShellXParser::LsCommandContext::VAR() {
  return getTokens(ShellXParser::VAR);
}

tree::TerminalNode* ShellXParser::LsCommandContext::VAR(size_t i) {
  return getToken(ShellXParser::VAR, i);
}


size_t ShellXParser::LsCommandContext::getRuleIndex() const {
  return ShellXParser::RuleLsCommand;
}


std::any ShellXParser::LsCommandContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ShellXVisitor*>(visitor))
    return parserVisitor->visitLsCommand(this);
  else
    return visitor->visitChildren(this);
}

ShellXParser::LsCommandContext* ShellXParser::lsCommand() {
  LsCommandContext *_localctx = _tracker.createInstance<LsCommandContext>(_ctx, getState());
  enterRule(_localctx, 4, ShellXParser::RuleLsCommand);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(51);
    match(ShellXParser::LS);
    setState(55);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 3, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        setState(52);
        _la = _input->LA(1);
        if (!(_la == ShellXParser::VAR

        || _la == ShellXParser::ARG)) {
        _errHandler->recoverInline(this);
        }
        else {
          _errHandler->reportMatch(this);
          consume();
        } 
      }
      setState(57);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 3, _ctx);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- PwdCommandContext ------------------------------------------------------------------

ShellXParser::PwdCommandContext::PwdCommandContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* ShellXParser::PwdCommandContext::PWD() {
  return getToken(ShellXParser::PWD, 0);
}

std::vector<tree::TerminalNode *> ShellXParser::PwdCommandContext::ARG() {
  return getTokens(ShellXParser::ARG);
}

tree::TerminalNode* ShellXParser::PwdCommandContext::ARG(size_t i) {
  return getToken(ShellXParser::ARG, i);
}

std::vector<tree::TerminalNode *> ShellXParser::PwdCommandContext::VAR() {
  return getTokens(ShellXParser::VAR);
}

tree::TerminalNode* ShellXParser::PwdCommandContext::VAR(size_t i) {
  return getToken(ShellXParser::VAR, i);
}


size_t ShellXParser::PwdCommandContext::getRuleIndex() const {
  return ShellXParser::RulePwdCommand;
}


std::any ShellXParser::PwdCommandContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ShellXVisitor*>(visitor))
    return parserVisitor->visitPwdCommand(this);
  else
    return visitor->visitChildren(this);
}

ShellXParser::PwdCommandContext* ShellXParser::pwdCommand() {
  PwdCommandContext *_localctx = _tracker.createInstance<PwdCommandContext>(_ctx, getState());
  enterRule(_localctx, 6, ShellXParser::RulePwdCommand);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(58);
    match(ShellXParser::PWD);
    setState(62);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 4, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        setState(59);
        _la = _input->LA(1);
        if (!(_la == ShellXParser::VAR

        || _la == ShellXParser::ARG)) {
        _errHandler->recoverInline(this);
        }
        else {
          _errHandler->reportMatch(this);
          consume();
        } 
      }
      setState(64);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 4, _ctx);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- CatCommandContext ------------------------------------------------------------------

ShellXParser::CatCommandContext::CatCommandContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* ShellXParser::CatCommandContext::CAT() {
  return getToken(ShellXParser::CAT, 0);
}

std::vector<tree::TerminalNode *> ShellXParser::CatCommandContext::ARG() {
  return getTokens(ShellXParser::ARG);
}

tree::TerminalNode* ShellXParser::CatCommandContext::ARG(size_t i) {
  return getToken(ShellXParser::ARG, i);
}

std::vector<tree::TerminalNode *> ShellXParser::CatCommandContext::VAR() {
  return getTokens(ShellXParser::VAR);
}

tree::TerminalNode* ShellXParser::CatCommandContext::VAR(size_t i) {
  return getToken(ShellXParser::VAR, i);
}


size_t ShellXParser::CatCommandContext::getRuleIndex() const {
  return ShellXParser::RuleCatCommand;
}


std::any ShellXParser::CatCommandContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ShellXVisitor*>(visitor))
    return parserVisitor->visitCatCommand(this);
  else
    return visitor->visitChildren(this);
}

ShellXParser::CatCommandContext* ShellXParser::catCommand() {
  CatCommandContext *_localctx = _tracker.createInstance<CatCommandContext>(_ctx, getState());
  enterRule(_localctx, 8, ShellXParser::RuleCatCommand);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(65);
    match(ShellXParser::CAT);
    setState(69);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 5, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        setState(66);
        _la = _input->LA(1);
        if (!(_la == ShellXParser::VAR

        || _la == ShellXParser::ARG)) {
        _errHandler->recoverInline(this);
        }
        else {
          _errHandler->reportMatch(this);
          consume();
        } 
      }
      setState(71);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 5, _ctx);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- MvCommandContext ------------------------------------------------------------------

ShellXParser::MvCommandContext::MvCommandContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* ShellXParser::MvCommandContext::MV() {
  return getToken(ShellXParser::MV, 0);
}

std::vector<tree::TerminalNode *> ShellXParser::MvCommandContext::ARG() {
  return getTokens(ShellXParser::ARG);
}

tree::TerminalNode* ShellXParser::MvCommandContext::ARG(size_t i) {
  return getToken(ShellXParser::ARG, i);
}

std::vector<tree::TerminalNode *> ShellXParser::MvCommandContext::VAR() {
  return getTokens(ShellXParser::VAR);
}

tree::TerminalNode* ShellXParser::MvCommandContext::VAR(size_t i) {
  return getToken(ShellXParser::VAR, i);
}


size_t ShellXParser::MvCommandContext::getRuleIndex() const {
  return ShellXParser::RuleMvCommand;
}


std::any ShellXParser::MvCommandContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ShellXVisitor*>(visitor))
    return parserVisitor->visitMvCommand(this);
  else
    return visitor->visitChildren(this);
}

ShellXParser::MvCommandContext* ShellXParser::mvCommand() {
  MvCommandContext *_localctx = _tracker.createInstance<MvCommandContext>(_ctx, getState());
  enterRule(_localctx, 10, ShellXParser::RuleMvCommand);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(72);
    match(ShellXParser::MV);
    setState(76);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 6, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        setState(73);
        _la = _input->LA(1);
        if (!(_la == ShellXParser::VAR

        || _la == ShellXParser::ARG)) {
        _errHandler->recoverInline(this);
        }
        else {
          _errHandler->reportMatch(this);
          consume();
        } 
      }
      setState(78);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 6, _ctx);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- TouchCommandContext ------------------------------------------------------------------

ShellXParser::TouchCommandContext::TouchCommandContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* ShellXParser::TouchCommandContext::TOUCH() {
  return getToken(ShellXParser::TOUCH, 0);
}

std::vector<tree::TerminalNode *> ShellXParser::TouchCommandContext::ARG() {
  return getTokens(ShellXParser::ARG);
}

tree::TerminalNode* ShellXParser::TouchCommandContext::ARG(size_t i) {
  return getToken(ShellXParser::ARG, i);
}

std::vector<tree::TerminalNode *> ShellXParser::TouchCommandContext::VAR() {
  return getTokens(ShellXParser::VAR);
}

tree::TerminalNode* ShellXParser::TouchCommandContext::VAR(size_t i) {
  return getToken(ShellXParser::VAR, i);
}


size_t ShellXParser::TouchCommandContext::getRuleIndex() const {
  return ShellXParser::RuleTouchCommand;
}


std::any ShellXParser::TouchCommandContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ShellXVisitor*>(visitor))
    return parserVisitor->visitTouchCommand(this);
  else
    return visitor->visitChildren(this);
}

ShellXParser::TouchCommandContext* ShellXParser::touchCommand() {
  TouchCommandContext *_localctx = _tracker.createInstance<TouchCommandContext>(_ctx, getState());
  enterRule(_localctx, 12, ShellXParser::RuleTouchCommand);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(79);
    match(ShellXParser::TOUCH);
    setState(83);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 7, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        setState(80);
        _la = _input->LA(1);
        if (!(_la == ShellXParser::VAR

        || _la == ShellXParser::ARG)) {
        _errHandler->recoverInline(this);
        }
        else {
          _errHandler->reportMatch(this);
          consume();
        } 
      }
      setState(85);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 7, _ctx);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- EchoCommandContext ------------------------------------------------------------------

ShellXParser::EchoCommandContext::EchoCommandContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* ShellXParser::EchoCommandContext::ECHO() {
  return getToken(ShellXParser::ECHO, 0);
}

std::vector<tree::TerminalNode *> ShellXParser::EchoCommandContext::ARG() {
  return getTokens(ShellXParser::ARG);
}

tree::TerminalNode* ShellXParser::EchoCommandContext::ARG(size_t i) {
  return getToken(ShellXParser::ARG, i);
}

std::vector<tree::TerminalNode *> ShellXParser::EchoCommandContext::VAR() {
  return getTokens(ShellXParser::VAR);
}

tree::TerminalNode* ShellXParser::EchoCommandContext::VAR(size_t i) {
  return getToken(ShellXParser::VAR, i);
}


size_t ShellXParser::EchoCommandContext::getRuleIndex() const {
  return ShellXParser::RuleEchoCommand;
}


std::any ShellXParser::EchoCommandContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ShellXVisitor*>(visitor))
    return parserVisitor->visitEchoCommand(this);
  else
    return visitor->visitChildren(this);
}

ShellXParser::EchoCommandContext* ShellXParser::echoCommand() {
  EchoCommandContext *_localctx = _tracker.createInstance<EchoCommandContext>(_ctx, getState());
  enterRule(_localctx, 14, ShellXParser::RuleEchoCommand);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(86);
    match(ShellXParser::ECHO);
    setState(90);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 8, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        setState(87);
        _la = _input->LA(1);
        if (!(_la == ShellXParser::VAR

        || _la == ShellXParser::ARG)) {
        _errHandler->recoverInline(this);
        }
        else {
          _errHandler->reportMatch(this);
          consume();
        } 
      }
      setState(92);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 8, _ctx);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- RmCommandContext ------------------------------------------------------------------

ShellXParser::RmCommandContext::RmCommandContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* ShellXParser::RmCommandContext::RM() {
  return getToken(ShellXParser::RM, 0);
}

std::vector<tree::TerminalNode *> ShellXParser::RmCommandContext::ARG() {
  return getTokens(ShellXParser::ARG);
}

tree::TerminalNode* ShellXParser::RmCommandContext::ARG(size_t i) {
  return getToken(ShellXParser::ARG, i);
}

std::vector<tree::TerminalNode *> ShellXParser::RmCommandContext::VAR() {
  return getTokens(ShellXParser::VAR);
}

tree::TerminalNode* ShellXParser::RmCommandContext::VAR(size_t i) {
  return getToken(ShellXParser::VAR, i);
}


size_t ShellXParser::RmCommandContext::getRuleIndex() const {
  return ShellXParser::RuleRmCommand;
}


std::any ShellXParser::RmCommandContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ShellXVisitor*>(visitor))
    return parserVisitor->visitRmCommand(this);
  else
    return visitor->visitChildren(this);
}

ShellXParser::RmCommandContext* ShellXParser::rmCommand() {
  RmCommandContext *_localctx = _tracker.createInstance<RmCommandContext>(_ctx, getState());
  enterRule(_localctx, 16, ShellXParser::RuleRmCommand);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(93);
    match(ShellXParser::RM);
    setState(97);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 9, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        setState(94);
        _la = _input->LA(1);
        if (!(_la == ShellXParser::VAR

        || _la == ShellXParser::ARG)) {
        _errHandler->recoverInline(this);
        }
        else {
          _errHandler->reportMatch(this);
          consume();
        } 
      }
      setState(99);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 9, _ctx);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- MkdirCommandContext ------------------------------------------------------------------

ShellXParser::MkdirCommandContext::MkdirCommandContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* ShellXParser::MkdirCommandContext::MKDIR() {
  return getToken(ShellXParser::MKDIR, 0);
}

std::vector<tree::TerminalNode *> ShellXParser::MkdirCommandContext::ARG() {
  return getTokens(ShellXParser::ARG);
}

tree::TerminalNode* ShellXParser::MkdirCommandContext::ARG(size_t i) {
  return getToken(ShellXParser::ARG, i);
}

std::vector<tree::TerminalNode *> ShellXParser::MkdirCommandContext::VAR() {
  return getTokens(ShellXParser::VAR);
}

tree::TerminalNode* ShellXParser::MkdirCommandContext::VAR(size_t i) {
  return getToken(ShellXParser::VAR, i);
}


size_t ShellXParser::MkdirCommandContext::getRuleIndex() const {
  return ShellXParser::RuleMkdirCommand;
}


std::any ShellXParser::MkdirCommandContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ShellXVisitor*>(visitor))
    return parserVisitor->visitMkdirCommand(this);
  else
    return visitor->visitChildren(this);
}

ShellXParser::MkdirCommandContext* ShellXParser::mkdirCommand() {
  MkdirCommandContext *_localctx = _tracker.createInstance<MkdirCommandContext>(_ctx, getState());
  enterRule(_localctx, 18, ShellXParser::RuleMkdirCommand);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(100);
    match(ShellXParser::MKDIR);
    setState(104);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 10, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        setState(101);
        _la = _input->LA(1);
        if (!(_la == ShellXParser::VAR

        || _la == ShellXParser::ARG)) {
        _errHandler->recoverInline(this);
        }
        else {
          _errHandler->reportMatch(this);
          consume();
        } 
      }
      setState(106);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 10, _ctx);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- GrepCommandContext ------------------------------------------------------------------

ShellXParser::GrepCommandContext::GrepCommandContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* ShellXParser::GrepCommandContext::GREP() {
  return getToken(ShellXParser::GREP, 0);
}

std::vector<tree::TerminalNode *> ShellXParser::GrepCommandContext::ARG() {
  return getTokens(ShellXParser::ARG);
}

tree::TerminalNode* ShellXParser::GrepCommandContext::ARG(size_t i) {
  return getToken(ShellXParser::ARG, i);
}

std::vector<tree::TerminalNode *> ShellXParser::GrepCommandContext::VAR() {
  return getTokens(ShellXParser::VAR);
}

tree::TerminalNode* ShellXParser::GrepCommandContext::VAR(size_t i) {
  return getToken(ShellXParser::VAR, i);
}


size_t ShellXParser::GrepCommandContext::getRuleIndex() const {
  return ShellXParser::RuleGrepCommand;
}


std::any ShellXParser::GrepCommandContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ShellXVisitor*>(visitor))
    return parserVisitor->visitGrepCommand(this);
  else
    return visitor->visitChildren(this);
}

ShellXParser::GrepCommandContext* ShellXParser::grepCommand() {
  GrepCommandContext *_localctx = _tracker.createInstance<GrepCommandContext>(_ctx, getState());
  enterRule(_localctx, 20, ShellXParser::RuleGrepCommand);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(107);
    match(ShellXParser::GREP);
    setState(111);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 11, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        setState(108);
        _la = _input->LA(1);
        if (!(_la == ShellXParser::VAR

        || _la == ShellXParser::ARG)) {
        _errHandler->recoverInline(this);
        }
        else {
          _errHandler->reportMatch(this);
          consume();
        } 
      }
      setState(113);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 11, _ctx);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- CpCommandContext ------------------------------------------------------------------

ShellXParser::CpCommandContext::CpCommandContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* ShellXParser::CpCommandContext::CP() {
  return getToken(ShellXParser::CP, 0);
}

std::vector<tree::TerminalNode *> ShellXParser::CpCommandContext::ARG() {
  return getTokens(ShellXParser::ARG);
}

tree::TerminalNode* ShellXParser::CpCommandContext::ARG(size_t i) {
  return getToken(ShellXParser::ARG, i);
}

std::vector<tree::TerminalNode *> ShellXParser::CpCommandContext::VAR() {
  return getTokens(ShellXParser::VAR);
}

tree::TerminalNode* ShellXParser::CpCommandContext::VAR(size_t i) {
  return getToken(ShellXParser::VAR, i);
}


size_t ShellXParser::CpCommandContext::getRuleIndex() const {
  return ShellXParser::RuleCpCommand;
}


std::any ShellXParser::CpCommandContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ShellXVisitor*>(visitor))
    return parserVisitor->visitCpCommand(this);
  else
    return visitor->visitChildren(this);
}

ShellXParser::CpCommandContext* ShellXParser::cpCommand() {
  CpCommandContext *_localctx = _tracker.createInstance<CpCommandContext>(_ctx, getState());
  enterRule(_localctx, 22, ShellXParser::RuleCpCommand);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(114);
    match(ShellXParser::CP);
    setState(118);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 12, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        setState(115);
        _la = _input->LA(1);
        if (!(_la == ShellXParser::VAR

        || _la == ShellXParser::ARG)) {
        _errHandler->recoverInline(this);
        }
        else {
          _errHandler->reportMatch(this);
          consume();
        } 
      }
      setState(120);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 12, _ctx);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- StructureContext ------------------------------------------------------------------

ShellXParser::StructureContext::StructureContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* ShellXParser::StructureContext::ARG() {
  return getToken(ShellXParser::ARG, 0);
}

ShellXParser::CommandContext* ShellXParser::StructureContext::command() {
  return getRuleContext<ShellXParser::CommandContext>(0);
}

tree::TerminalNode* ShellXParser::StructureContext::FOR() {
  return getToken(ShellXParser::FOR, 0);
}

tree::TerminalNode* ShellXParser::StructureContext::WHILE() {
  return getToken(ShellXParser::WHILE, 0);
}

tree::TerminalNode* ShellXParser::StructureContext::IF() {
  return getToken(ShellXParser::IF, 0);
}

tree::TerminalNode* ShellXParser::StructureContext::ELIF() {
  return getToken(ShellXParser::ELIF, 0);
}


size_t ShellXParser::StructureContext::getRuleIndex() const {
  return ShellXParser::RuleStructure;
}


std::any ShellXParser::StructureContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ShellXVisitor*>(visitor))
    return parserVisitor->visitStructure(this);
  else
    return visitor->visitChildren(this);
}

ShellXParser::StructureContext* ShellXParser::structure() {
  StructureContext *_localctx = _tracker.createInstance<StructureContext>(_ctx, getState());
  enterRule(_localctx, 24, ShellXParser::RuleStructure);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(121);
    _la = _input->LA(1);
    if (!((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 491520) != 0))) {
    _errHandler->recoverInline(this);
    }
    else {
      _errHandler->reportMatch(this);
      consume();
    }
    setState(122);
    match(ShellXParser::T__0);
    setState(123);
    match(ShellXParser::ARG);
    setState(124);
    match(ShellXParser::T__1);
    setState(125);
    command();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- AssignmentContext ------------------------------------------------------------------

ShellXParser::AssignmentContext::AssignmentContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* ShellXParser::AssignmentContext::VAR() {
  return getToken(ShellXParser::VAR, 0);
}

tree::TerminalNode* ShellXParser::AssignmentContext::ARG() {
  return getToken(ShellXParser::ARG, 0);
}


size_t ShellXParser::AssignmentContext::getRuleIndex() const {
  return ShellXParser::RuleAssignment;
}


std::any ShellXParser::AssignmentContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ShellXVisitor*>(visitor))
    return parserVisitor->visitAssignment(this);
  else
    return visitor->visitChildren(this);
}

ShellXParser::AssignmentContext* ShellXParser::assignment() {
  AssignmentContext *_localctx = _tracker.createInstance<AssignmentContext>(_ctx, getState());
  enterRule(_localctx, 26, ShellXParser::RuleAssignment);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(127);
    match(ShellXParser::VAR);
    setState(128);
    match(ShellXParser::T__2);
    setState(129);
    match(ShellXParser::ARG);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

void ShellXParser::initialize() {
#if ANTLR4_USE_THREAD_LOCAL_CACHE
  shellxParserInitialize();
#else
  ::antlr4::internal::call_once(shellxParserOnceFlag, shellxParserInitialize);
#endif
}
