#pragma once
#include "TaskFlow.h"
class TCPU
{
public:

	unsigned int cpu_power_critical;
	bool state;

	void ProcessTask(TaskFlow& myflow);
	bool IsOccupied();
};
