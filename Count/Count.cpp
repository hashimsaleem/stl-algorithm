// Count.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <vector>
#include <algorithm>
#include <map>

using namespace std;

int main()
{
	vector<int> v{ 2, 7, 1, 6, 2, -2, 4, 0 };

	// count how many entries have the target value (2)
	int twos = 0;
	int const target = 2;
	for (size_t i = 0; i < v.size(); i++)
	{
		if (v[i] == target)
		{
			twos++;
		}
	}

	twos = count(v.begin(), v.end(), target);
	twos = count(begin(v), end(v), target);

	// count how many entries are odd
	int odds = 0;
	for (auto elem : v)
	{
		if (elem % 2 != 0)
		{
			odds++;
		}
	}

	auto isOdd = [](auto elem)
	{
		return elem % 2 != 0;
	};
	odds = count_if(begin(v), end(v), isOdd);

	map<int, int> monthLengths{ 
		{1,31}, {2,28}, {3,31}, {4,30}, {5,31}, {6,30},
		{7,31}, {8,31}, {9,30}, {10,31}, {11,30}, {12,31}
	};
	int longmonths = count_if(begin(monthLengths), end(monthLengths), [](auto pair)
	{
		return pair.second % 2 != 0;
	});

	// are all, any, or none of the values odd?
	bool allof = false, noneof = false, anyof = false;
	allof = odds == v.size();
	noneof = odds == 0;
	anyof = odds > 0;

	allof = all_of(begin(v), end(v), isOdd);
	noneof = none_of(begin(v), end(v), isOdd);
	anyof = any_of(begin(v), end(v), isOdd);

    return 0;
}

