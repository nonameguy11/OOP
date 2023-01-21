#pragma once
#include <ostream>

class List final 
{
public:
	List(int length);

	void print(std::ostream& os);

	void add(int x);
};

