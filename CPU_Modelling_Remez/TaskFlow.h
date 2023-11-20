#pragma once
#include "TQueue.h"
class TaskFlow
{
public:

	TQueue<int> queue;
	unsigned int flow_intensity_critical;
	
	bool HasTask();
	bool NewTask();
};

