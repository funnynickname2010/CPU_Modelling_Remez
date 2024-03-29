#pragma once
#include "TQueue.h"
#include "TaskFlow.h"
#include "TCPU.h"

class ComputationSystem
{
public:

	TCPU cpu;
	TaskFlow flow;

	unsigned int tasks_generated_in_total;
	unsigned int ignored_tasks;
	unsigned int cpu_idle;
	unsigned int average_execution_time;

	unsigned int model_time;

	void NextTic();
	void AllTheTics();
};

