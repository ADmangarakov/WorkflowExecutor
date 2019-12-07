#pragma once
#include "FileWorker.h"
#include "IWorker.h"

class BlockRead :
	public IWorker, public FileWorker
{
public:
	BlockRead(std::string const& fileName);
	Text& Process(std::vector<std::string>& text);
	~BlockRead();
};

