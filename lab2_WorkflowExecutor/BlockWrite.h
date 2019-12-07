#pragma once
#include "FileWorker.h"
#include "IWorker.h"
class BlockWrite :
	public IWorker, public FileWorker
{
public:
	BlockWrite(std::string const& fileName);
	void Process(std::vector<std::string>& text);
	~BlockWrite();
};

