#pragma once
template <class T>
class TQueue
{
	unsigned int size;
	unsigned int head, tail;
	unsigned int element_counter;

	unsigned int NextIntex(unsigned int index_1);

public:

	T Get();
	void Put(const T obj);
};

