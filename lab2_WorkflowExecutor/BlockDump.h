#pragma once
#include "IWorker.h"
#include "FileWorker.h"
class BlockDump :
	public IWorker, public FileWorker
{
public:
	BlockDump(std::string const& fileName);
	Text& Process(Text & text);
	~BlockDump();
};

