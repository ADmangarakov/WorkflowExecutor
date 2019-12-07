#pragma once
#include "IWorker.h"
#include "definitions.h"
#include <algorithm>
class BlockSort :
	public IWorker
{
public:
	BlockSort();
	Text& Process(Text& text);
	~BlockSort();
};

