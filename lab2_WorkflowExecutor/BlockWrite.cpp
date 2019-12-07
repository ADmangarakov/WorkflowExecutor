#include "pch.h"
#include "BlockWrite.h"


BlockWrite::BlockWrite(std::string const& fileName)
	:FileWorker(fileName, std::ios_base::out)
{
}

void BlockWrite::Process(std::vector<std::string>& text)
{
	Write(text);
}


BlockWrite::~BlockWrite()
{
}
