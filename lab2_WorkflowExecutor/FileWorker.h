#pragma once
#include <fstream>
#include "definitions.h"
#include <iostream>

class FileWorker 
{
protected:
	std::fstream file_;
	FileWorker(std::string const& fileName, std::ios_base::openmode const& mode);
	void Write(Text const& text);
	Text& Read(Text& text);
public:
	virtual ~FileWorker();
};

