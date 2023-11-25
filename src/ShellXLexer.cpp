
// Generated from ShellX.g4 by ANTLR 4.13.1


#include "ShellXLexer.h"


using namespace antlr4;



using namespace antlr4;

namespace {

struct ShellXLexerStaticData final {
  ShellXLexerStaticData(std::vector<std::string> ruleNames,
                          std::vector<std::string> channelNames,
                          std::vector<std::string> modeNames,
                          std::vector<std::string> literalNames,
                          std::vector<std::string> symbolicNames)
      : ruleNames(std::move(ruleNames)), channelNames(std::move(channelNames)),
        modeNames(std::move(modeNames)), literalNames(std::move(literalNames)),
        symbolicNames(std::move(symbolicNames)),
        vocabulary(this->literalNames, this->symbolicNames) {}

  ShellXLexerStaticData(const ShellXLexerStaticData&) = delete;
  ShellXLexerStaticData(ShellXLexerStaticData&&) = delete;
  ShellXLexerStaticData& operator=(const ShellXLexerStaticData&) = delete;
  ShellXLexerStaticData& operator=(ShellXLexerStaticData&&) = delete;

  std::vector<antlr4::dfa::DFA> decisionToDFA;
  antlr4::atn::PredictionContextCache sharedContextCache;
  const std::vector<std::string> ruleNames;
  const std::vector<std::string> channelNames;
  const std::vector<std::string> modeNames;
  const std::vector<std::string> literalNames;
  const std::vector<std::string> symbolicNames;
  const antlr4::dfa::Vocabulary vocabulary;
  antlr4::atn::SerializedATNView serializedATN;
  std::unique_ptr<antlr4::atn::ATN> atn;
};

::antlr4::internal::OnceFlag shellxlexerLexerOnceFlag;
#if ANTLR4_USE_THREAD_LOCAL_CACHE
static thread_local
#endif
ShellXLexerStaticData *shellxlexerLexerStaticData = nullptr;

void shellxlexerLexerInitialize() {
#if ANTLR4_USE_THREAD_LOCAL_CACHE
  if (shellxlexerLexerStaticData != nullptr) {
    return;
  }
#else
  assert(shellxlexerLexerStaticData == nullptr);
#endif
  auto staticData = std::make_unique<ShellXLexerStaticData>(
    std::vector<std::string>{
      "FORSTART", "FOREND", "LBRAC", "RBRAC", "INB", "FLAG", "ENV_VAR", 
      "IN", "END", "NEWLINE", "EQ", "INT", "LS", "PWD", "CAT", "MV", "TOUCH", 
      "ECHO", "RM", "MKDIR", "GREP", "CP", "FOR", "WHILE", "IF", "ELSE", 
      "VAR", "ARG", "WS"
    },
    std::vector<std::string>{
      "DEFAULT_TOKEN_CHANNEL", "HIDDEN"
    },
    std::vector<std::string>{
      "DEFAULT_MODE"
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
  	4,0,29,184,6,-1,2,0,7,0,2,1,7,1,2,2,7,2,2,3,7,3,2,4,7,4,2,5,7,5,2,6,7,
  	6,2,7,7,7,2,8,7,8,2,9,7,9,2,10,7,10,2,11,7,11,2,12,7,12,2,13,7,13,2,14,
  	7,14,2,15,7,15,2,16,7,16,2,17,7,17,2,18,7,18,2,19,7,19,2,20,7,20,2,21,
  	7,21,2,22,7,22,2,23,7,23,2,24,7,24,2,25,7,25,2,26,7,26,2,27,7,27,2,28,
  	7,28,1,0,1,0,1,0,1,0,1,1,1,1,1,1,1,1,1,1,1,1,1,2,1,2,1,3,1,3,1,4,1,4,
  	1,4,1,5,1,5,4,5,79,8,5,11,5,12,5,80,1,6,1,6,4,6,85,8,6,11,6,12,6,86,1,
  	7,1,7,1,7,1,8,1,8,1,8,1,8,1,9,3,9,97,8,9,1,9,1,9,1,10,1,10,1,11,4,11,
  	104,8,11,11,11,12,11,105,1,12,1,12,1,12,1,13,1,13,1,13,1,13,1,14,1,14,
  	1,14,1,14,1,15,1,15,1,15,1,16,1,16,1,16,1,16,1,16,1,16,1,17,1,17,1,17,
  	1,17,1,17,1,18,1,18,1,18,1,19,1,19,1,19,1,19,1,19,1,19,1,20,1,20,1,20,
  	1,20,1,20,1,21,1,21,1,21,1,22,1,22,1,22,1,22,1,23,1,23,1,23,1,23,1,23,
  	1,23,1,24,1,24,1,24,1,25,1,25,1,25,1,25,1,25,1,26,4,26,169,8,26,11,26,
  	12,26,170,1,27,4,27,174,8,27,11,27,12,27,175,1,28,4,28,179,8,28,11,28,
  	12,28,180,1,28,1,28,0,0,29,1,1,3,2,5,3,7,4,9,5,11,6,13,7,15,8,17,9,19,
  	10,21,11,23,12,25,13,27,14,29,15,31,16,33,17,35,18,37,19,39,20,41,21,
  	43,22,45,23,47,24,49,25,51,26,53,27,55,28,57,29,1,0,4,2,0,65,90,97,122,
  	1,0,48,57,3,0,48,57,65,90,97,122,3,0,9,10,13,13,32,32,190,0,1,1,0,0,0,
  	0,3,1,0,0,0,0,5,1,0,0,0,0,7,1,0,0,0,0,9,1,0,0,0,0,11,1,0,0,0,0,13,1,0,
  	0,0,0,15,1,0,0,0,0,17,1,0,0,0,0,19,1,0,0,0,0,21,1,0,0,0,0,23,1,0,0,0,
  	0,25,1,0,0,0,0,27,1,0,0,0,0,29,1,0,0,0,0,31,1,0,0,0,0,33,1,0,0,0,0,35,
  	1,0,0,0,0,37,1,0,0,0,0,39,1,0,0,0,0,41,1,0,0,0,0,43,1,0,0,0,0,45,1,0,
  	0,0,0,47,1,0,0,0,0,49,1,0,0,0,0,51,1,0,0,0,0,53,1,0,0,0,0,55,1,0,0,0,
  	0,57,1,0,0,0,1,59,1,0,0,0,3,63,1,0,0,0,5,69,1,0,0,0,7,71,1,0,0,0,9,73,
  	1,0,0,0,11,76,1,0,0,0,13,82,1,0,0,0,15,88,1,0,0,0,17,91,1,0,0,0,19,96,
  	1,0,0,0,21,100,1,0,0,0,23,103,1,0,0,0,25,107,1,0,0,0,27,110,1,0,0,0,29,
  	114,1,0,0,0,31,118,1,0,0,0,33,121,1,0,0,0,35,127,1,0,0,0,37,132,1,0,0,
  	0,39,135,1,0,0,0,41,141,1,0,0,0,43,146,1,0,0,0,45,149,1,0,0,0,47,153,
  	1,0,0,0,49,159,1,0,0,0,51,162,1,0,0,0,53,168,1,0,0,0,55,173,1,0,0,0,57,
  	178,1,0,0,0,59,60,5,100,0,0,60,61,5,111,0,0,61,62,5,58,0,0,62,2,1,0,0,
  	0,63,64,5,58,0,0,64,65,5,100,0,0,65,66,5,111,0,0,66,67,5,110,0,0,67,68,
  	5,101,0,0,68,4,1,0,0,0,69,70,5,123,0,0,70,6,1,0,0,0,71,72,5,125,0,0,72,
  	8,1,0,0,0,73,74,5,46,0,0,74,75,5,46,0,0,75,10,1,0,0,0,76,78,5,45,0,0,
  	77,79,7,0,0,0,78,77,1,0,0,0,79,80,1,0,0,0,80,78,1,0,0,0,80,81,1,0,0,0,
  	81,12,1,0,0,0,82,84,5,36,0,0,83,85,7,0,0,0,84,83,1,0,0,0,85,86,1,0,0,
  	0,86,84,1,0,0,0,86,87,1,0,0,0,87,14,1,0,0,0,88,89,5,105,0,0,89,90,5,110,
  	0,0,90,16,1,0,0,0,91,92,5,101,0,0,92,93,5,110,0,0,93,94,5,100,0,0,94,
  	18,1,0,0,0,95,97,5,13,0,0,96,95,1,0,0,0,96,97,1,0,0,0,97,98,1,0,0,0,98,
  	99,5,10,0,0,99,20,1,0,0,0,100,101,5,61,0,0,101,22,1,0,0,0,102,104,7,1,
  	0,0,103,102,1,0,0,0,104,105,1,0,0,0,105,103,1,0,0,0,105,106,1,0,0,0,106,
  	24,1,0,0,0,107,108,5,108,0,0,108,109,5,115,0,0,109,26,1,0,0,0,110,111,
  	5,112,0,0,111,112,5,119,0,0,112,113,5,100,0,0,113,28,1,0,0,0,114,115,
  	5,99,0,0,115,116,5,97,0,0,116,117,5,116,0,0,117,30,1,0,0,0,118,119,5,
  	109,0,0,119,120,5,118,0,0,120,32,1,0,0,0,121,122,5,116,0,0,122,123,5,
  	111,0,0,123,124,5,117,0,0,124,125,5,99,0,0,125,126,5,104,0,0,126,34,1,
  	0,0,0,127,128,5,101,0,0,128,129,5,99,0,0,129,130,5,104,0,0,130,131,5,
  	111,0,0,131,36,1,0,0,0,132,133,5,114,0,0,133,134,5,109,0,0,134,38,1,0,
  	0,0,135,136,5,109,0,0,136,137,5,107,0,0,137,138,5,100,0,0,138,139,5,105,
  	0,0,139,140,5,114,0,0,140,40,1,0,0,0,141,142,5,103,0,0,142,143,5,114,
  	0,0,143,144,5,101,0,0,144,145,5,112,0,0,145,42,1,0,0,0,146,147,5,99,0,
  	0,147,148,5,112,0,0,148,44,1,0,0,0,149,150,5,102,0,0,150,151,5,111,0,
  	0,151,152,5,114,0,0,152,46,1,0,0,0,153,154,5,119,0,0,154,155,5,104,0,
  	0,155,156,5,105,0,0,156,157,5,108,0,0,157,158,5,101,0,0,158,48,1,0,0,
  	0,159,160,5,105,0,0,160,161,5,102,0,0,161,50,1,0,0,0,162,163,5,101,0,
  	0,163,164,5,108,0,0,164,165,5,115,0,0,165,166,5,101,0,0,166,52,1,0,0,
  	0,167,169,7,0,0,0,168,167,1,0,0,0,169,170,1,0,0,0,170,168,1,0,0,0,170,
  	171,1,0,0,0,171,54,1,0,0,0,172,174,7,2,0,0,173,172,1,0,0,0,174,175,1,
  	0,0,0,175,173,1,0,0,0,175,176,1,0,0,0,176,56,1,0,0,0,177,179,7,3,0,0,
  	178,177,1,0,0,0,179,180,1,0,0,0,180,178,1,0,0,0,180,181,1,0,0,0,181,182,
  	1,0,0,0,182,183,6,28,0,0,183,58,1,0,0,0,8,0,80,86,96,105,170,175,180,
  	1,6,0,0
  };
  staticData->serializedATN = antlr4::atn::SerializedATNView(serializedATNSegment, sizeof(serializedATNSegment) / sizeof(serializedATNSegment[0]));

  antlr4::atn::ATNDeserializer deserializer;
  staticData->atn = deserializer.deserialize(staticData->serializedATN);

  const size_t count = staticData->atn->getNumberOfDecisions();
  staticData->decisionToDFA.reserve(count);
  for (size_t i = 0; i < count; i++) { 
    staticData->decisionToDFA.emplace_back(staticData->atn->getDecisionState(i), i);
  }
  shellxlexerLexerStaticData = staticData.release();
}

}

ShellXLexer::ShellXLexer(CharStream *input) : Lexer(input) {
  ShellXLexer::initialize();
  _interpreter = new atn::LexerATNSimulator(this, *shellxlexerLexerStaticData->atn, shellxlexerLexerStaticData->decisionToDFA, shellxlexerLexerStaticData->sharedContextCache);
}

ShellXLexer::~ShellXLexer() {
  delete _interpreter;
}

std::string ShellXLexer::getGrammarFileName() const {
  return "ShellX.g4";
}

const std::vector<std::string>& ShellXLexer::getRuleNames() const {
  return shellxlexerLexerStaticData->ruleNames;
}

const std::vector<std::string>& ShellXLexer::getChannelNames() const {
  return shellxlexerLexerStaticData->channelNames;
}

const std::vector<std::string>& ShellXLexer::getModeNames() const {
  return shellxlexerLexerStaticData->modeNames;
}

const dfa::Vocabulary& ShellXLexer::getVocabulary() const {
  return shellxlexerLexerStaticData->vocabulary;
}

antlr4::atn::SerializedATNView ShellXLexer::getSerializedATN() const {
  return shellxlexerLexerStaticData->serializedATN;
}

const atn::ATN& ShellXLexer::getATN() const {
  return *shellxlexerLexerStaticData->atn;
}




void ShellXLexer::initialize() {
#if ANTLR4_USE_THREAD_LOCAL_CACHE
  shellxlexerLexerInitialize();
#else
  ::antlr4::internal::call_once(shellxlexerLexerOnceFlag, shellxlexerLexerInitialize);
#endif
}
