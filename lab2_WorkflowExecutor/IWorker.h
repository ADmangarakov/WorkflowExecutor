#pragma once
struct IWorker
{
	IWorker();
	virtual void Process() = 0;
	virtual ~IWorker();
};

