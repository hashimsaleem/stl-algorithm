// Count.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <vector>

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
	Hashim Saleem

    return 0;
}

