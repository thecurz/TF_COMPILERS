
// Generated from ShellX.g4 by ANTLR 4.13.1


#include "../headers/ShellXLexer.h"


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
      "T__0", "T__1", "T__2", "SHELLX", "LS", "PWD", "CAT", "MV", "TOUCH", 
      "ECHO", "RM", "MKDIR", "GREP", "CP", "FOR", "WHILE", "IF", "ELIF", 
      "VAR", "ARG", "WS"
    },
    std::vector<std::string>{
      "DEFAULT_TOKEN_CHANNEL", "HIDDEN"
    },
    std::vector<std::string>{
      "DEFAULT_MODE"
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
  	4,0,21,135,6,-1,2,0,7,0,2,1,7,1,2,2,7,2,2,3,7,3,2,4,7,4,2,5,7,5,2,6,7,
  	6,2,7,7,7,2,8,7,8,2,9,7,9,2,10,7,10,2,11,7,11,2,12,7,12,2,13,7,13,2,14,
  	7,14,2,15,7,15,2,16,7,16,2,17,7,17,2,18,7,18,2,19,7,19,2,20,7,20,1,0,
  	1,0,1,1,1,1,1,2,1,2,1,3,1,3,1,3,1,3,1,3,1,3,1,3,1,3,1,4,1,4,1,4,1,5,1,
  	5,1,5,1,5,1,6,1,6,1,6,1,6,1,7,1,7,1,7,1,8,1,8,1,8,1,8,1,8,1,8,1,9,1,9,
  	1,9,1,9,1,9,1,10,1,10,1,10,1,11,1,11,1,11,1,11,1,11,1,11,1,12,1,12,1,
  	12,1,12,1,12,1,13,1,13,1,13,1,14,1,14,1,14,1,14,1,15,1,15,1,15,1,15,1,
  	15,1,15,1,16,1,16,1,16,1,17,1,17,1,17,1,17,1,17,1,18,1,18,4,18,120,8,
  	18,11,18,12,18,121,1,19,4,19,125,8,19,11,19,12,19,126,1,20,4,20,130,8,
  	20,11,20,12,20,131,1,20,1,20,0,0,21,1,1,3,2,5,3,7,4,9,5,11,6,13,7,15,
  	8,17,9,19,10,21,11,23,12,25,13,27,14,29,15,31,16,33,17,35,18,37,19,39,
  	20,41,21,1,0,2,3,0,48,57,65,90,97,122,3,0,9,10,13,13,32,32,137,0,1,1,
  	0,0,0,0,3,1,0,0,0,0,5,1,0,0,0,0,7,1,0,0,0,0,9,1,0,0,0,0,11,1,0,0,0,0,
  	13,1,0,0,0,0,15,1,0,0,0,0,17,1,0,0,0,0,19,1,0,0,0,0,21,1,0,0,0,0,23,1,
  	0,0,0,0,25,1,0,0,0,0,27,1,0,0,0,0,29,1,0,0,0,0,31,1,0,0,0,0,33,1,0,0,
  	0,0,35,1,0,0,0,0,37,1,0,0,0,0,39,1,0,0,0,0,41,1,0,0,0,1,43,1,0,0,0,3,
  	45,1,0,0,0,5,47,1,0,0,0,7,49,1,0,0,0,9,57,1,0,0,0,11,60,1,0,0,0,13,64,
  	1,0,0,0,15,68,1,0,0,0,17,71,1,0,0,0,19,77,1,0,0,0,21,82,1,0,0,0,23,85,
  	1,0,0,0,25,91,1,0,0,0,27,96,1,0,0,0,29,99,1,0,0,0,31,103,1,0,0,0,33,109,
  	1,0,0,0,35,112,1,0,0,0,37,117,1,0,0,0,39,124,1,0,0,0,41,129,1,0,0,0,43,
  	44,5,40,0,0,44,2,1,0,0,0,45,46,5,41,0,0,46,4,1,0,0,0,47,48,5,61,0,0,48,
  	6,1,0,0,0,49,50,5,35,0,0,50,51,5,115,0,0,51,52,5,104,0,0,52,53,5,101,
  	0,0,53,54,5,108,0,0,54,55,5,108,0,0,55,56,5,120,0,0,56,8,1,0,0,0,57,58,
  	5,108,0,0,58,59,5,115,0,0,59,10,1,0,0,0,60,61,5,112,0,0,61,62,5,119,0,
  	0,62,63,5,100,0,0,63,12,1,0,0,0,64,65,5,99,0,0,65,66,5,97,0,0,66,67,5,
  	116,0,0,67,14,1,0,0,0,68,69,5,109,0,0,69,70,5,118,0,0,70,16,1,0,0,0,71,
  	72,5,116,0,0,72,73,5,111,0,0,73,74,5,117,0,0,74,75,5,99,0,0,75,76,5,104,
  	0,0,76,18,1,0,0,0,77,78,5,101,0,0,78,79,5,99,0,0,79,80,5,104,0,0,80,81,
  	5,111,0,0,81,20,1,0,0,0,82,83,5,114,0,0,83,84,5,109,0,0,84,22,1,0,0,0,
  	85,86,5,109,0,0,86,87,5,107,0,0,87,88,5,100,0,0,88,89,5,105,0,0,89,90,
  	5,114,0,0,90,24,1,0,0,0,91,92,5,103,0,0,92,93,5,114,0,0,93,94,5,101,0,
  	0,94,95,5,112,0,0,95,26,1,0,0,0,96,97,5,99,0,0,97,98,5,112,0,0,98,28,
  	1,0,0,0,99,100,5,102,0,0,100,101,5,111,0,0,101,102,5,114,0,0,102,30,1,
  	0,0,0,103,104,5,119,0,0,104,105,5,104,0,0,105,106,5,105,0,0,106,107,5,
  	108,0,0,107,108,5,101,0,0,108,32,1,0,0,0,109,110,5,105,0,0,110,111,5,
  	102,0,0,111,34,1,0,0,0,112,113,5,101,0,0,113,114,5,108,0,0,114,115,5,
  	105,0,0,115,116,5,102,0,0,116,36,1,0,0,0,117,119,5,36,0,0,118,120,7,0,
  	0,0,119,118,1,0,0,0,120,121,1,0,0,0,121,119,1,0,0,0,121,122,1,0,0,0,122,
  	38,1,0,0,0,123,125,7,0,0,0,124,123,1,0,0,0,125,126,1,0,0,0,126,124,1,
  	0,0,0,126,127,1,0,0,0,127,40,1,0,0,0,128,130,7,1,0,0,129,128,1,0,0,0,
  	130,131,1,0,0,0,131,129,1,0,0,0,131,132,1,0,0,0,132,133,1,0,0,0,133,134,
  	6,20,0,0,134,42,1,0,0,0,4,0,121,126,131,1,6,0,0
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
