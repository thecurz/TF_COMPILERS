
// Generated from ShellX.g4 by ANTLR 4.13.1


#include "ShellXVisitor.h"

#include "ShellXParser.h"


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
      "program", "statement", "line", "command", "structure", "forLoop", 
      "forInner", "whileLoop", "ifElseStatement", "lsCommand", "pwdCommand", 
      "catCommand", "mvCommand", "touchCommand", "echoCommand", "rmCommand", 
      "mkdirCommand", "grepCommand", "cpCommand", "assignment", "variableAssignment", 
      "range", "first_int", "second_int", "flags"
    },
    std::vector<std::string>{
      "", "'do:'", "':done'", "'{'", "'}'", "'..'", "", "", "'in'", "'end'", 
      "", "'='", "", "'ls'", "'pwd'", "'cat'", "'mv'", "'touch'", "'echo'", 
      "'rm'", "'mkdir'", "'grep'", "'cp'", "'for'", "'while'", "'if'", "'else'"
    },
    std::vector<std::string>{
      "", "FORSTART", "FOREND", "LBRAC", "RBRAC", "INB", "FLAG", "ENV_VAR", 
      "IN", "END", "NEWLINE", "EQ", "INT", "LS", "PWD", "CAT", "MV", "TOUCH", 
      "ECHO", "RM", "MKDIR", "GREP", "CP", "FOR", "WHILE", "IF", "ELSE", 
      "VAR", "ARG", "WS"
    }
  );
  static const int32_t serializedATNSegment[] = {
  	4,1,29,260,2,0,7,0,2,1,7,1,2,2,7,2,2,3,7,3,2,4,7,4,2,5,7,5,2,6,7,6,2,
  	7,7,7,2,8,7,8,2,9,7,9,2,10,7,10,2,11,7,11,2,12,7,12,2,13,7,13,2,14,7,
  	14,2,15,7,15,2,16,7,16,2,17,7,17,2,18,7,18,2,19,7,19,2,20,7,20,2,21,7,
  	21,2,22,7,22,2,23,7,23,2,24,7,24,1,0,5,0,52,8,0,10,0,12,0,55,9,0,1,0,
  	1,0,1,1,1,1,1,1,1,1,3,1,63,8,1,1,2,1,2,1,3,1,3,1,3,1,3,1,3,1,3,1,3,1,
  	3,1,3,1,3,3,3,77,8,3,1,4,1,4,1,4,3,4,82,8,4,1,5,1,5,1,5,1,5,1,5,1,5,1,
  	5,1,6,1,6,1,6,5,6,94,8,6,10,6,12,6,97,9,6,1,6,1,6,1,7,1,7,1,7,1,7,1,7,
  	1,8,1,8,1,8,1,8,1,8,3,8,111,8,8,1,9,1,9,3,9,115,8,9,1,9,5,9,118,8,9,10,
  	9,12,9,121,9,9,1,9,3,9,124,8,9,1,10,1,10,3,10,128,8,10,1,11,1,11,3,11,
  	132,8,11,1,11,5,11,135,8,11,10,11,12,11,138,9,11,1,11,3,11,141,8,11,1,
  	12,1,12,3,12,145,8,12,1,12,5,12,148,8,12,10,12,12,12,151,9,12,1,12,3,
  	12,154,8,12,1,13,1,13,3,13,158,8,13,1,13,5,13,161,8,13,10,13,12,13,164,
  	9,13,1,13,3,13,167,8,13,1,14,1,14,3,14,171,8,14,1,14,5,14,174,8,14,10,
  	14,12,14,177,9,14,1,14,3,14,180,8,14,1,15,1,15,3,15,184,8,15,1,15,5,15,
  	187,8,15,10,15,12,15,190,9,15,1,15,3,15,193,8,15,1,16,1,16,3,16,197,8,
  	16,1,16,5,16,200,8,16,10,16,12,16,203,9,16,1,16,3,16,206,8,16,1,17,1,
  	17,3,17,210,8,17,1,17,5,17,213,8,17,10,17,12,17,216,9,17,1,17,3,17,219,
  	8,17,1,18,1,18,3,18,223,8,18,1,18,5,18,226,8,18,10,18,12,18,229,9,18,
  	1,18,3,18,232,8,18,1,19,1,19,1,19,1,19,1,20,1,20,1,20,1,20,1,21,1,21,
  	1,21,1,21,1,21,1,21,1,22,1,22,1,23,1,23,1,24,1,24,3,24,254,8,24,4,24,
  	256,8,24,11,24,12,24,257,1,24,0,0,25,0,2,4,6,8,10,12,14,16,18,20,22,24,
  	26,28,30,32,34,36,38,40,42,44,46,48,0,1,1,0,27,28,281,0,53,1,0,0,0,2,
  	62,1,0,0,0,4,64,1,0,0,0,6,76,1,0,0,0,8,81,1,0,0,0,10,83,1,0,0,0,12,90,
  	1,0,0,0,14,100,1,0,0,0,16,105,1,0,0,0,18,112,1,0,0,0,20,125,1,0,0,0,22,
  	129,1,0,0,0,24,142,1,0,0,0,26,155,1,0,0,0,28,168,1,0,0,0,30,181,1,0,0,
  	0,32,194,1,0,0,0,34,207,1,0,0,0,36,220,1,0,0,0,38,233,1,0,0,0,40,237,
  	1,0,0,0,42,241,1,0,0,0,44,247,1,0,0,0,46,249,1,0,0,0,48,255,1,0,0,0,50,
  	52,3,4,2,0,51,50,1,0,0,0,52,55,1,0,0,0,53,51,1,0,0,0,53,54,1,0,0,0,54,
  	56,1,0,0,0,55,53,1,0,0,0,56,57,5,0,0,1,57,1,1,0,0,0,58,63,3,6,3,0,59,
  	63,3,8,4,0,60,63,3,38,19,0,61,63,3,40,20,0,62,58,1,0,0,0,62,59,1,0,0,
  	0,62,60,1,0,0,0,62,61,1,0,0,0,63,3,1,0,0,0,64,65,3,2,1,0,65,5,1,0,0,0,
  	66,77,3,18,9,0,67,77,3,20,10,0,68,77,3,22,11,0,69,77,3,24,12,0,70,77,
  	3,26,13,0,71,77,3,28,14,0,72,77,3,30,15,0,73,77,3,32,16,0,74,77,3,34,
  	17,0,75,77,3,36,18,0,76,66,1,0,0,0,76,67,1,0,0,0,76,68,1,0,0,0,76,69,
  	1,0,0,0,76,70,1,0,0,0,76,71,1,0,0,0,76,72,1,0,0,0,76,73,1,0,0,0,76,74,
  	1,0,0,0,76,75,1,0,0,0,77,7,1,0,0,0,78,82,3,10,5,0,79,82,3,14,7,0,80,82,
  	3,16,8,0,81,78,1,0,0,0,81,79,1,0,0,0,81,80,1,0,0,0,82,9,1,0,0,0,83,84,
  	5,23,0,0,84,85,5,27,0,0,85,86,5,8,0,0,86,87,3,42,21,0,87,88,5,10,0,0,
  	88,89,3,12,6,0,89,11,1,0,0,0,90,91,5,1,0,0,91,95,5,10,0,0,92,94,3,4,2,
  	0,93,92,1,0,0,0,94,97,1,0,0,0,95,93,1,0,0,0,95,96,1,0,0,0,96,98,1,0,0,
  	0,97,95,1,0,0,0,98,99,5,2,0,0,99,13,1,0,0,0,100,101,5,24,0,0,101,102,
  	5,28,0,0,102,103,3,6,3,0,103,104,5,9,0,0,104,15,1,0,0,0,105,106,5,25,
  	0,0,106,107,5,28,0,0,107,110,3,6,3,0,108,109,5,26,0,0,109,111,3,6,3,0,
  	110,108,1,0,0,0,110,111,1,0,0,0,111,17,1,0,0,0,112,114,5,13,0,0,113,115,
  	3,48,24,0,114,113,1,0,0,0,114,115,1,0,0,0,115,119,1,0,0,0,116,118,7,0,
  	0,0,117,116,1,0,0,0,118,121,1,0,0,0,119,117,1,0,0,0,119,120,1,0,0,0,120,
  	123,1,0,0,0,121,119,1,0,0,0,122,124,5,10,0,0,123,122,1,0,0,0,123,124,
  	1,0,0,0,124,19,1,0,0,0,125,127,5,14,0,0,126,128,5,10,0,0,127,126,1,0,
  	0,0,127,128,1,0,0,0,128,21,1,0,0,0,129,131,5,15,0,0,130,132,3,48,24,0,
  	131,130,1,0,0,0,131,132,1,0,0,0,132,136,1,0,0,0,133,135,7,0,0,0,134,133,
  	1,0,0,0,135,138,1,0,0,0,136,134,1,0,0,0,136,137,1,0,0,0,137,140,1,0,0,
  	0,138,136,1,0,0,0,139,141,5,10,0,0,140,139,1,0,0,0,140,141,1,0,0,0,141,
  	23,1,0,0,0,142,144,5,16,0,0,143,145,3,48,24,0,144,143,1,0,0,0,144,145,
  	1,0,0,0,145,149,1,0,0,0,146,148,7,0,0,0,147,146,1,0,0,0,148,151,1,0,0,
  	0,149,147,1,0,0,0,149,150,1,0,0,0,150,153,1,0,0,0,151,149,1,0,0,0,152,
  	154,5,10,0,0,153,152,1,0,0,0,153,154,1,0,0,0,154,25,1,0,0,0,155,157,5,
  	17,0,0,156,158,3,48,24,0,157,156,1,0,0,0,157,158,1,0,0,0,158,162,1,0,
  	0,0,159,161,7,0,0,0,160,159,1,0,0,0,161,164,1,0,0,0,162,160,1,0,0,0,162,
  	163,1,0,0,0,163,166,1,0,0,0,164,162,1,0,0,0,165,167,5,10,0,0,166,165,
  	1,0,0,0,166,167,1,0,0,0,167,27,1,0,0,0,168,170,5,18,0,0,169,171,3,48,
  	24,0,170,169,1,0,0,0,170,171,1,0,0,0,171,175,1,0,0,0,172,174,7,0,0,0,
  	173,172,1,0,0,0,174,177,1,0,0,0,175,173,1,0,0,0,175,176,1,0,0,0,176,179,
  	1,0,0,0,177,175,1,0,0,0,178,180,5,10,0,0,179,178,1,0,0,0,179,180,1,0,
  	0,0,180,29,1,0,0,0,181,183,5,19,0,0,182,184,3,48,24,0,183,182,1,0,0,0,
  	183,184,1,0,0,0,184,188,1,0,0,0,185,187,7,0,0,0,186,185,1,0,0,0,187,190,
  	1,0,0,0,188,186,1,0,0,0,188,189,1,0,0,0,189,192,1,0,0,0,190,188,1,0,0,
  	0,191,193,5,10,0,0,192,191,1,0,0,0,192,193,1,0,0,0,193,31,1,0,0,0,194,
  	196,5,20,0,0,195,197,3,48,24,0,196,195,1,0,0,0,196,197,1,0,0,0,197,201,
  	1,0,0,0,198,200,7,0,0,0,199,198,1,0,0,0,200,203,1,0,0,0,201,199,1,0,0,
  	0,201,202,1,0,0,0,202,205,1,0,0,0,203,201,1,0,0,0,204,206,5,10,0,0,205,
  	204,1,0,0,0,205,206,1,0,0,0,206,33,1,0,0,0,207,209,5,21,0,0,208,210,3,
  	48,24,0,209,208,1,0,0,0,209,210,1,0,0,0,210,214,1,0,0,0,211,213,7,0,0,
  	0,212,211,1,0,0,0,213,216,1,0,0,0,214,212,1,0,0,0,214,215,1,0,0,0,215,
  	218,1,0,0,0,216,214,1,0,0,0,217,219,5,10,0,0,218,217,1,0,0,0,218,219,
  	1,0,0,0,219,35,1,0,0,0,220,222,5,22,0,0,221,223,3,48,24,0,222,221,1,0,
  	0,0,222,223,1,0,0,0,223,227,1,0,0,0,224,226,7,0,0,0,225,224,1,0,0,0,226,
  	229,1,0,0,0,227,225,1,0,0,0,227,228,1,0,0,0,228,231,1,0,0,0,229,227,1,
  	0,0,0,230,232,5,10,0,0,231,230,1,0,0,0,231,232,1,0,0,0,232,37,1,0,0,0,
  	233,234,5,27,0,0,234,235,5,11,0,0,235,236,5,28,0,0,236,39,1,0,0,0,237,
  	238,5,27,0,0,238,239,5,11,0,0,239,240,5,7,0,0,240,41,1,0,0,0,241,242,
  	5,3,0,0,242,243,5,12,0,0,243,244,5,5,0,0,244,245,5,12,0,0,245,246,5,4,
  	0,0,246,43,1,0,0,0,247,248,5,12,0,0,248,45,1,0,0,0,249,250,5,12,0,0,250,
  	47,1,0,0,0,251,253,5,6,0,0,252,254,5,29,0,0,253,252,1,0,0,0,253,254,1,
  	0,0,0,254,256,1,0,0,0,255,251,1,0,0,0,256,257,1,0,0,0,257,255,1,0,0,0,
  	257,258,1,0,0,0,258,49,1,0,0,0,36,53,62,76,81,95,110,114,119,123,127,
  	131,136,140,144,149,153,157,162,166,170,175,179,183,188,192,196,201,205,
  	209,214,218,222,227,231,253,257
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

tree::TerminalNode* ShellXParser::ProgramContext::EOF() {
  return getToken(ShellXParser::EOF, 0);
}

std::vector<ShellXParser::LineContext *> ShellXParser::ProgramContext::line() {
  return getRuleContexts<ShellXParser::LineContext>();
}

ShellXParser::LineContext* ShellXParser::ProgramContext::line(size_t i) {
  return getRuleContext<ShellXParser::LineContext>(i);
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
    setState(53);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 201318400) != 0)) {
      setState(50);
      line();
      setState(55);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(56);
    match(ShellXParser::EOF);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- StatementContext ------------------------------------------------------------------

ShellXParser::StatementContext::StatementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

ShellXParser::CommandContext* ShellXParser::StatementContext::command() {
  return getRuleContext<ShellXParser::CommandContext>(0);
}

ShellXParser::StructureContext* ShellXParser::StatementContext::structure() {
  return getRuleContext<ShellXParser::StructureContext>(0);
}

ShellXParser::AssignmentContext* ShellXParser::StatementContext::assignment() {
  return getRuleContext<ShellXParser::AssignmentContext>(0);
}

ShellXParser::VariableAssignmentContext* ShellXParser::StatementContext::variableAssignment() {
  return getRuleContext<ShellXParser::VariableAssignmentContext>(0);
}


size_t ShellXParser::StatementContext::getRuleIndex() const {
  return ShellXParser::RuleStatement;
}


std::any ShellXParser::StatementContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ShellXVisitor*>(visitor))
    return parserVisitor->visitStatement(this);
  else
    return visitor->visitChildren(this);
}

ShellXParser::StatementContext* ShellXParser::statement() {
  StatementContext *_localctx = _tracker.createInstance<StatementContext>(_ctx, getState());
  enterRule(_localctx, 2, ShellXParser::RuleStatement);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(62);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 1, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(58);
      command();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(59);
      structure();
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(60);
      assignment();
      break;
    }

    case 4: {
      enterOuterAlt(_localctx, 4);
      setState(61);
      variableAssignment();
      break;
    }

    default:
      break;
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- LineContext ------------------------------------------------------------------

ShellXParser::LineContext::LineContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

ShellXParser::StatementContext* ShellXParser::LineContext::statement() {
  return getRuleContext<ShellXParser::StatementContext>(0);
}


size_t ShellXParser::LineContext::getRuleIndex() const {
  return ShellXParser::RuleLine;
}


std::any ShellXParser::LineContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ShellXVisitor*>(visitor))
    return parserVisitor->visitLine(this);
  else
    return visitor->visitChildren(this);
}

ShellXParser::LineContext* ShellXParser::line() {
  LineContext *_localctx = _tracker.createInstance<LineContext>(_ctx, getState());
  enterRule(_localctx, 4, ShellXParser::RuleLine);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(64);
    statement();
   
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
  enterRule(_localctx, 6, ShellXParser::RuleCommand);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(76);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case ShellXParser::LS: {
        enterOuterAlt(_localctx, 1);
        setState(66);
        lsCommand();
        break;
      }

      case ShellXParser::PWD: {
        enterOuterAlt(_localctx, 2);
        setState(67);
        pwdCommand();
        break;
      }

      case ShellXParser::CAT: {
        enterOuterAlt(_localctx, 3);
        setState(68);
        catCommand();
        break;
      }

      case ShellXParser::MV: {
        enterOuterAlt(_localctx, 4);
        setState(69);
        mvCommand();
        break;
      }

      case ShellXParser::TOUCH: {
        enterOuterAlt(_localctx, 5);
        setState(70);
        touchCommand();
        break;
      }

      case ShellXParser::ECHO: {
        enterOuterAlt(_localctx, 6);
        setState(71);
        echoCommand();
        break;
      }

      case ShellXParser::RM: {
        enterOuterAlt(_localctx, 7);
        setState(72);
        rmCommand();
        break;
      }

      case ShellXParser::MKDIR: {
        enterOuterAlt(_localctx, 8);
        setState(73);
        mkdirCommand();
        break;
      }

      case ShellXParser::GREP: {
        enterOuterAlt(_localctx, 9);
        setState(74);
        grepCommand();
        break;
      }

      case ShellXParser::CP: {
        enterOuterAlt(_localctx, 10);
        setState(75);
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

//----------------- StructureContext ------------------------------------------------------------------

ShellXParser::StructureContext::StructureContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

ShellXParser::ForLoopContext* ShellXParser::StructureContext::forLoop() {
  return getRuleContext<ShellXParser::ForLoopContext>(0);
}

ShellXParser::WhileLoopContext* ShellXParser::StructureContext::whileLoop() {
  return getRuleContext<ShellXParser::WhileLoopContext>(0);
}

ShellXParser::IfElseStatementContext* ShellXParser::StructureContext::ifElseStatement() {
  return getRuleContext<ShellXParser::IfElseStatementContext>(0);
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
  enterRule(_localctx, 8, ShellXParser::RuleStructure);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(81);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case ShellXParser::FOR: {
        enterOuterAlt(_localctx, 1);
        setState(78);
        forLoop();
        break;
      }

      case ShellXParser::WHILE: {
        enterOuterAlt(_localctx, 2);
        setState(79);
        whileLoop();
        break;
      }

      case ShellXParser::IF: {
        enterOuterAlt(_localctx, 3);
        setState(80);
        ifElseStatement();
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

//----------------- ForLoopContext ------------------------------------------------------------------

ShellXParser::ForLoopContext::ForLoopContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* ShellXParser::ForLoopContext::FOR() {
  return getToken(ShellXParser::FOR, 0);
}

tree::TerminalNode* ShellXParser::ForLoopContext::VAR() {
  return getToken(ShellXParser::VAR, 0);
}

tree::TerminalNode* ShellXParser::ForLoopContext::IN() {
  return getToken(ShellXParser::IN, 0);
}

ShellXParser::RangeContext* ShellXParser::ForLoopContext::range() {
  return getRuleContext<ShellXParser::RangeContext>(0);
}

tree::TerminalNode* ShellXParser::ForLoopContext::NEWLINE() {
  return getToken(ShellXParser::NEWLINE, 0);
}

ShellXParser::ForInnerContext* ShellXParser::ForLoopContext::forInner() {
  return getRuleContext<ShellXParser::ForInnerContext>(0);
}


size_t ShellXParser::ForLoopContext::getRuleIndex() const {
  return ShellXParser::RuleForLoop;
}


std::any ShellXParser::ForLoopContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ShellXVisitor*>(visitor))
    return parserVisitor->visitForLoop(this);
  else
    return visitor->visitChildren(this);
}

ShellXParser::ForLoopContext* ShellXParser::forLoop() {
  ForLoopContext *_localctx = _tracker.createInstance<ForLoopContext>(_ctx, getState());
  enterRule(_localctx, 10, ShellXParser::RuleForLoop);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(83);
    match(ShellXParser::FOR);
    setState(84);
    match(ShellXParser::VAR);
    setState(85);
    match(ShellXParser::IN);
    setState(86);
    range();
    setState(87);
    match(ShellXParser::NEWLINE);
    setState(88);
    forInner();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ForInnerContext ------------------------------------------------------------------

ShellXParser::ForInnerContext::ForInnerContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* ShellXParser::ForInnerContext::FORSTART() {
  return getToken(ShellXParser::FORSTART, 0);
}

tree::TerminalNode* ShellXParser::ForInnerContext::NEWLINE() {
  return getToken(ShellXParser::NEWLINE, 0);
}

tree::TerminalNode* ShellXParser::ForInnerContext::FOREND() {
  return getToken(ShellXParser::FOREND, 0);
}

std::vector<ShellXParser::LineContext *> ShellXParser::ForInnerContext::line() {
  return getRuleContexts<ShellXParser::LineContext>();
}

ShellXParser::LineContext* ShellXParser::ForInnerContext::line(size_t i) {
  return getRuleContext<ShellXParser::LineContext>(i);
}


size_t ShellXParser::ForInnerContext::getRuleIndex() const {
  return ShellXParser::RuleForInner;
}


std::any ShellXParser::ForInnerContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ShellXVisitor*>(visitor))
    return parserVisitor->visitForInner(this);
  else
    return visitor->visitChildren(this);
}

ShellXParser::ForInnerContext* ShellXParser::forInner() {
  ForInnerContext *_localctx = _tracker.createInstance<ForInnerContext>(_ctx, getState());
  enterRule(_localctx, 12, ShellXParser::RuleForInner);
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
    setState(90);
    match(ShellXParser::FORSTART);
    setState(91);
    match(ShellXParser::NEWLINE);
    setState(95);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 201318400) != 0)) {
      setState(92);
      line();
      setState(97);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(98);
    match(ShellXParser::FOREND);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- WhileLoopContext ------------------------------------------------------------------

ShellXParser::WhileLoopContext::WhileLoopContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* ShellXParser::WhileLoopContext::WHILE() {
  return getToken(ShellXParser::WHILE, 0);
}

tree::TerminalNode* ShellXParser::WhileLoopContext::ARG() {
  return getToken(ShellXParser::ARG, 0);
}

ShellXParser::CommandContext* ShellXParser::WhileLoopContext::command() {
  return getRuleContext<ShellXParser::CommandContext>(0);
}

tree::TerminalNode* ShellXParser::WhileLoopContext::END() {
  return getToken(ShellXParser::END, 0);
}


size_t ShellXParser::WhileLoopContext::getRuleIndex() const {
  return ShellXParser::RuleWhileLoop;
}


std::any ShellXParser::WhileLoopContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ShellXVisitor*>(visitor))
    return parserVisitor->visitWhileLoop(this);
  else
    return visitor->visitChildren(this);
}

ShellXParser::WhileLoopContext* ShellXParser::whileLoop() {
  WhileLoopContext *_localctx = _tracker.createInstance<WhileLoopContext>(_ctx, getState());
  enterRule(_localctx, 14, ShellXParser::RuleWhileLoop);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(100);
    match(ShellXParser::WHILE);
    setState(101);
    match(ShellXParser::ARG);
    setState(102);
    command();
    setState(103);
    match(ShellXParser::END);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- IfElseStatementContext ------------------------------------------------------------------

ShellXParser::IfElseStatementContext::IfElseStatementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* ShellXParser::IfElseStatementContext::IF() {
  return getToken(ShellXParser::IF, 0);
}

tree::TerminalNode* ShellXParser::IfElseStatementContext::ARG() {
  return getToken(ShellXParser::ARG, 0);
}

std::vector<ShellXParser::CommandContext *> ShellXParser::IfElseStatementContext::command() {
  return getRuleContexts<ShellXParser::CommandContext>();
}

ShellXParser::CommandContext* ShellXParser::IfElseStatementContext::command(size_t i) {
  return getRuleContext<ShellXParser::CommandContext>(i);
}

tree::TerminalNode* ShellXParser::IfElseStatementContext::ELSE() {
  return getToken(ShellXParser::ELSE, 0);
}


size_t ShellXParser::IfElseStatementContext::getRuleIndex() const {
  return ShellXParser::RuleIfElseStatement;
}


std::any ShellXParser::IfElseStatementContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ShellXVisitor*>(visitor))
    return parserVisitor->visitIfElseStatement(this);
  else
    return visitor->visitChildren(this);
}

ShellXParser::IfElseStatementContext* ShellXParser::ifElseStatement() {
  IfElseStatementContext *_localctx = _tracker.createInstance<IfElseStatementContext>(_ctx, getState());
  enterRule(_localctx, 16, ShellXParser::RuleIfElseStatement);
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
    setState(105);
    match(ShellXParser::IF);
    setState(106);
    match(ShellXParser::ARG);
    setState(107);
    command();
    setState(110);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == ShellXParser::ELSE) {
      setState(108);
      match(ShellXParser::ELSE);
      setState(109);
      command();
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

ShellXParser::FlagsContext* ShellXParser::LsCommandContext::flags() {
  return getRuleContext<ShellXParser::FlagsContext>(0);
}

tree::TerminalNode* ShellXParser::LsCommandContext::NEWLINE() {
  return getToken(ShellXParser::NEWLINE, 0);
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
  enterRule(_localctx, 18, ShellXParser::RuleLsCommand);
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
    setState(112);
    match(ShellXParser::LS);
    setState(114);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == ShellXParser::FLAG) {
      setState(113);
      flags();
    }
    setState(119);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 7, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        setState(116);
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
      setState(121);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 7, _ctx);
    }
    setState(123);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == ShellXParser::NEWLINE) {
      setState(122);
      match(ShellXParser::NEWLINE);
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

tree::TerminalNode* ShellXParser::PwdCommandContext::NEWLINE() {
  return getToken(ShellXParser::NEWLINE, 0);
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
  enterRule(_localctx, 20, ShellXParser::RulePwdCommand);
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
    setState(125);
    match(ShellXParser::PWD);
    setState(127);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == ShellXParser::NEWLINE) {
      setState(126);
      match(ShellXParser::NEWLINE);
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

ShellXParser::FlagsContext* ShellXParser::CatCommandContext::flags() {
  return getRuleContext<ShellXParser::FlagsContext>(0);
}

tree::TerminalNode* ShellXParser::CatCommandContext::NEWLINE() {
  return getToken(ShellXParser::NEWLINE, 0);
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
  enterRule(_localctx, 22, ShellXParser::RuleCatCommand);
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
    setState(129);
    match(ShellXParser::CAT);
    setState(131);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == ShellXParser::FLAG) {
      setState(130);
      flags();
    }
    setState(136);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 11, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        setState(133);
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
      setState(138);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 11, _ctx);
    }
    setState(140);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == ShellXParser::NEWLINE) {
      setState(139);
      match(ShellXParser::NEWLINE);
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

ShellXParser::FlagsContext* ShellXParser::MvCommandContext::flags() {
  return getRuleContext<ShellXParser::FlagsContext>(0);
}

tree::TerminalNode* ShellXParser::MvCommandContext::NEWLINE() {
  return getToken(ShellXParser::NEWLINE, 0);
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
  enterRule(_localctx, 24, ShellXParser::RuleMvCommand);
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
    setState(142);
    match(ShellXParser::MV);
    setState(144);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == ShellXParser::FLAG) {
      setState(143);
      flags();
    }
    setState(149);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 14, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        setState(146);
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
      setState(151);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 14, _ctx);
    }
    setState(153);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == ShellXParser::NEWLINE) {
      setState(152);
      match(ShellXParser::NEWLINE);
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

ShellXParser::FlagsContext* ShellXParser::TouchCommandContext::flags() {
  return getRuleContext<ShellXParser::FlagsContext>(0);
}

tree::TerminalNode* ShellXParser::TouchCommandContext::NEWLINE() {
  return getToken(ShellXParser::NEWLINE, 0);
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
  enterRule(_localctx, 26, ShellXParser::RuleTouchCommand);
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
    setState(155);
    match(ShellXParser::TOUCH);
    setState(157);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == ShellXParser::FLAG) {
      setState(156);
      flags();
    }
    setState(162);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 17, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        setState(159);
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
      setState(164);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 17, _ctx);
    }
    setState(166);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == ShellXParser::NEWLINE) {
      setState(165);
      match(ShellXParser::NEWLINE);
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

ShellXParser::FlagsContext* ShellXParser::EchoCommandContext::flags() {
  return getRuleContext<ShellXParser::FlagsContext>(0);
}

tree::TerminalNode* ShellXParser::EchoCommandContext::NEWLINE() {
  return getToken(ShellXParser::NEWLINE, 0);
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
  enterRule(_localctx, 28, ShellXParser::RuleEchoCommand);
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
    setState(168);
    match(ShellXParser::ECHO);
    setState(170);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == ShellXParser::FLAG) {
      setState(169);
      flags();
    }
    setState(175);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 20, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        setState(172);
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
      setState(177);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 20, _ctx);
    }
    setState(179);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == ShellXParser::NEWLINE) {
      setState(178);
      match(ShellXParser::NEWLINE);
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

ShellXParser::FlagsContext* ShellXParser::RmCommandContext::flags() {
  return getRuleContext<ShellXParser::FlagsContext>(0);
}

tree::TerminalNode* ShellXParser::RmCommandContext::NEWLINE() {
  return getToken(ShellXParser::NEWLINE, 0);
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
  enterRule(_localctx, 30, ShellXParser::RuleRmCommand);
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
    setState(181);
    match(ShellXParser::RM);
    setState(183);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == ShellXParser::FLAG) {
      setState(182);
      flags();
    }
    setState(188);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 23, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        setState(185);
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
      setState(190);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 23, _ctx);
    }
    setState(192);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == ShellXParser::NEWLINE) {
      setState(191);
      match(ShellXParser::NEWLINE);
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

ShellXParser::FlagsContext* ShellXParser::MkdirCommandContext::flags() {
  return getRuleContext<ShellXParser::FlagsContext>(0);
}

tree::TerminalNode* ShellXParser::MkdirCommandContext::NEWLINE() {
  return getToken(ShellXParser::NEWLINE, 0);
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
  enterRule(_localctx, 32, ShellXParser::RuleMkdirCommand);
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
    setState(194);
    match(ShellXParser::MKDIR);
    setState(196);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == ShellXParser::FLAG) {
      setState(195);
      flags();
    }
    setState(201);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 26, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        setState(198);
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
      setState(203);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 26, _ctx);
    }
    setState(205);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == ShellXParser::NEWLINE) {
      setState(204);
      match(ShellXParser::NEWLINE);
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

ShellXParser::FlagsContext* ShellXParser::GrepCommandContext::flags() {
  return getRuleContext<ShellXParser::FlagsContext>(0);
}

tree::TerminalNode* ShellXParser::GrepCommandContext::NEWLINE() {
  return getToken(ShellXParser::NEWLINE, 0);
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
  enterRule(_localctx, 34, ShellXParser::RuleGrepCommand);
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
    setState(207);
    match(ShellXParser::GREP);
    setState(209);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == ShellXParser::FLAG) {
      setState(208);
      flags();
    }
    setState(214);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 29, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        setState(211);
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
      setState(216);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 29, _ctx);
    }
    setState(218);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == ShellXParser::NEWLINE) {
      setState(217);
      match(ShellXParser::NEWLINE);
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

ShellXParser::FlagsContext* ShellXParser::CpCommandContext::flags() {
  return getRuleContext<ShellXParser::FlagsContext>(0);
}

tree::TerminalNode* ShellXParser::CpCommandContext::NEWLINE() {
  return getToken(ShellXParser::NEWLINE, 0);
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
  enterRule(_localctx, 36, ShellXParser::RuleCpCommand);
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
    setState(220);
    match(ShellXParser::CP);
    setState(222);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == ShellXParser::FLAG) {
      setState(221);
      flags();
    }
    setState(227);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 32, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        setState(224);
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
      setState(229);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 32, _ctx);
    }
    setState(231);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == ShellXParser::NEWLINE) {
      setState(230);
      match(ShellXParser::NEWLINE);
    }
   
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

tree::TerminalNode* ShellXParser::AssignmentContext::EQ() {
  return getToken(ShellXParser::EQ, 0);
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
  enterRule(_localctx, 38, ShellXParser::RuleAssignment);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(233);
    match(ShellXParser::VAR);
    setState(234);
    match(ShellXParser::EQ);
    setState(235);
    match(ShellXParser::ARG);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- VariableAssignmentContext ------------------------------------------------------------------

ShellXParser::VariableAssignmentContext::VariableAssignmentContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* ShellXParser::VariableAssignmentContext::VAR() {
  return getToken(ShellXParser::VAR, 0);
}

tree::TerminalNode* ShellXParser::VariableAssignmentContext::EQ() {
  return getToken(ShellXParser::EQ, 0);
}

tree::TerminalNode* ShellXParser::VariableAssignmentContext::ENV_VAR() {
  return getToken(ShellXParser::ENV_VAR, 0);
}


size_t ShellXParser::VariableAssignmentContext::getRuleIndex() const {
  return ShellXParser::RuleVariableAssignment;
}


std::any ShellXParser::VariableAssignmentContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ShellXVisitor*>(visitor))
    return parserVisitor->visitVariableAssignment(this);
  else
    return visitor->visitChildren(this);
}

ShellXParser::VariableAssignmentContext* ShellXParser::variableAssignment() {
  VariableAssignmentContext *_localctx = _tracker.createInstance<VariableAssignmentContext>(_ctx, getState());
  enterRule(_localctx, 40, ShellXParser::RuleVariableAssignment);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(237);
    match(ShellXParser::VAR);
    setState(238);
    match(ShellXParser::EQ);
    setState(239);
    match(ShellXParser::ENV_VAR);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- RangeContext ------------------------------------------------------------------

ShellXParser::RangeContext::RangeContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* ShellXParser::RangeContext::LBRAC() {
  return getToken(ShellXParser::LBRAC, 0);
}

std::vector<tree::TerminalNode *> ShellXParser::RangeContext::INT() {
  return getTokens(ShellXParser::INT);
}

tree::TerminalNode* ShellXParser::RangeContext::INT(size_t i) {
  return getToken(ShellXParser::INT, i);
}

tree::TerminalNode* ShellXParser::RangeContext::INB() {
  return getToken(ShellXParser::INB, 0);
}

tree::TerminalNode* ShellXParser::RangeContext::RBRAC() {
  return getToken(ShellXParser::RBRAC, 0);
}


size_t ShellXParser::RangeContext::getRuleIndex() const {
  return ShellXParser::RuleRange;
}


std::any ShellXParser::RangeContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ShellXVisitor*>(visitor))
    return parserVisitor->visitRange(this);
  else
    return visitor->visitChildren(this);
}

ShellXParser::RangeContext* ShellXParser::range() {
  RangeContext *_localctx = _tracker.createInstance<RangeContext>(_ctx, getState());
  enterRule(_localctx, 42, ShellXParser::RuleRange);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(241);
    match(ShellXParser::LBRAC);
    setState(242);
    match(ShellXParser::INT);
    setState(243);
    match(ShellXParser::INB);
    setState(244);
    match(ShellXParser::INT);
    setState(245);
    match(ShellXParser::RBRAC);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- First_intContext ------------------------------------------------------------------

ShellXParser::First_intContext::First_intContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* ShellXParser::First_intContext::INT() {
  return getToken(ShellXParser::INT, 0);
}


size_t ShellXParser::First_intContext::getRuleIndex() const {
  return ShellXParser::RuleFirst_int;
}


std::any ShellXParser::First_intContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ShellXVisitor*>(visitor))
    return parserVisitor->visitFirst_int(this);
  else
    return visitor->visitChildren(this);
}

ShellXParser::First_intContext* ShellXParser::first_int() {
  First_intContext *_localctx = _tracker.createInstance<First_intContext>(_ctx, getState());
  enterRule(_localctx, 44, ShellXParser::RuleFirst_int);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(247);
    match(ShellXParser::INT);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Second_intContext ------------------------------------------------------------------

ShellXParser::Second_intContext::Second_intContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* ShellXParser::Second_intContext::INT() {
  return getToken(ShellXParser::INT, 0);
}


size_t ShellXParser::Second_intContext::getRuleIndex() const {
  return ShellXParser::RuleSecond_int;
}


std::any ShellXParser::Second_intContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ShellXVisitor*>(visitor))
    return parserVisitor->visitSecond_int(this);
  else
    return visitor->visitChildren(this);
}

ShellXParser::Second_intContext* ShellXParser::second_int() {
  Second_intContext *_localctx = _tracker.createInstance<Second_intContext>(_ctx, getState());
  enterRule(_localctx, 46, ShellXParser::RuleSecond_int);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(249);
    match(ShellXParser::INT);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- FlagsContext ------------------------------------------------------------------

ShellXParser::FlagsContext::FlagsContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<tree::TerminalNode *> ShellXParser::FlagsContext::FLAG() {
  return getTokens(ShellXParser::FLAG);
}

tree::TerminalNode* ShellXParser::FlagsContext::FLAG(size_t i) {
  return getToken(ShellXParser::FLAG, i);
}

std::vector<tree::TerminalNode *> ShellXParser::FlagsContext::WS() {
  return getTokens(ShellXParser::WS);
}

tree::TerminalNode* ShellXParser::FlagsContext::WS(size_t i) {
  return getToken(ShellXParser::WS, i);
}


size_t ShellXParser::FlagsContext::getRuleIndex() const {
  return ShellXParser::RuleFlags;
}


std::any ShellXParser::FlagsContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ShellXVisitor*>(visitor))
    return parserVisitor->visitFlags(this);
  else
    return visitor->visitChildren(this);
}

ShellXParser::FlagsContext* ShellXParser::flags() {
  FlagsContext *_localctx = _tracker.createInstance<FlagsContext>(_ctx, getState());
  enterRule(_localctx, 48, ShellXParser::RuleFlags);
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
    setState(255); 
    _errHandler->sync(this);
    _la = _input->LA(1);
    do {
      setState(251);
      match(ShellXParser::FLAG);
      setState(253);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == ShellXParser::WS) {
        setState(252);
        match(ShellXParser::WS);
      }
      setState(257); 
      _errHandler->sync(this);
      _la = _input->LA(1);
    } while (_la == ShellXParser::FLAG);
   
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
