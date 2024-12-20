#include "Counter.h"


Counter::Counter()
{
}

Counter::Counter(const Counter& _counter)
{
}

Counter::~Counter()
{
}

void Counter::increaseCnt()
{
	cnt++;
}

void Counter::decreaseCnt()
{
	cnt--;
}

void Counter::setCnt(int _cnt)
{
	cnt = _cnt;
}

int Counter::getCnt() const
{
	return cnt;
}

int Counter::cnt = 0;
