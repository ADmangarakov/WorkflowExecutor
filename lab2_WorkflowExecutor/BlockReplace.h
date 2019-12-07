#pragma once
#include "IWorker.h"
#include "definitions.h"
class BlockReplace :
	public IWorker
{
	std::string wordf_;
	std::string wordr_;
public:
	BlockReplace(std::string const& wordFind, std::string const& wordReplace);
	Text& Process(Text& text);
	~BlockReplace();
};

