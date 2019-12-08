#include "pch.h"
#include "Calculator.h"


Calculator::Calculator(std::string const & instrFile)
{
	std::string source;
	std::string dest;
	for (size_t i = 0; i < __argc; i++) {
		if (__argv[i] == "-i") {
			source = __argv[i + 1];
		}
		else if(__argv[i] == "-o") {
			dest = __argv[i + 1];
		}
	}
	parser_ = new Parser(instrFile, source, dest);
	try {
		instr_ = parser_->Parse();
	}
	catch (const std::logic_error& e) {
		std::cerr << e.what() << std::endl;
	}
}

void Calculator::Calculate()
{
	IWorker* currBlock;
	for (auto it = instr_.begin(); it != instr_.end(); ++it) {
		currBlock = *it;
		text_ = currBlock->Process(text_);
	}
}



Calculator::~Calculator()
{
	delete parser_;
}
