#ifndef COUNTER_H
#define COUNTER_H

class Counter
{
public:
	explicit Counter();
	explicit Counter(const Counter& _counter);
	~Counter();
	void increaseCnt();
	void decreaseCnt();
	void setCnt(int _cnt);
	int getCnt() const;

private:
	static int cnt;
};


#endif