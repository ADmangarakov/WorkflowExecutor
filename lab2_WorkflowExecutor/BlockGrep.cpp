#include "pch.h"
#include "BlockGrep.h"


BlockGrep::BlockGrep(std::string const& word):
	word_(word)
{
}

Text & BlockGrep::Process(Text & text)
{
	for (auto it = text.begin(); it != text.end(); ++it) {
		size_t pos = it->find(word_);
		if (pos == std::string::npos) {
			text.erase(it);
		}
	}
	return text;
}


BlockGrep::~BlockGrep()
{
}
