#pragma once
#include "IWorker.h"
#include "definitions.h"
class BlockGrep :
	public IWorker
{
	std::string word_;
public:
	BlockGrep(std::string const & word);
	Text& Process(Text& text);
	~BlockGrep();
};

