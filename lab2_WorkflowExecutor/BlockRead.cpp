#include "pch.h"
#include "BlockRead.h"


BlockRead::BlockRead(std::string const& fileName)
	:FileWorker(fileName, std::ios_base::in)
{
}


Text& BlockRead::Process(std::vector<std::string>& text)
{
	return Read(text);
}


BlockRead::~BlockRead()
{
	
}
