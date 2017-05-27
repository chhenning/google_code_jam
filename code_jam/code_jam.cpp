
#include <iostream>
#include <fstream>
#include <sstream>
#include <string>

using namespace std;

int counting_sheep(const string& in)
{
	int a[10];
	memset(a, 0, 10 * sizeof(int));

	return 0;
}

int main()
{
	// 1 * 1692 = 1692 -- 1 2 6 9
	// 2 * 1692 = 3384 -- 1 2 3 4 8 9
	// 3 * 1692 = 5076 -- 1 2 3 4 5 6 7 8 9 0
	// --> 5076
	
	// 1 * 0 = 0 -- 0
	// 2 * 0 = 0 -- 0
	// 1 * 0 = 2 * 0 
	// --> INSOMNIA

	// 1  * 1 = 1  -- 1
	// 2  * 1 = 2  -- 1 2
	// 3  * 1 = 3  -- 1 2 3
	// 4  * 1 = 4  -- 1 2 3 4 
	// 5  * 1 = 5  -- 1 2 3 4 5 
	// 6  * 1 = 6  -- 1 2 3 4 5	6  
	// 7  * 1 = 7  -- 1 2 3 4 5	6 7 
	// 8  * 1 = 8  -- 1 2 3 4 5	6 7 8
	// 9  * 1 = 9  -- 1 2 3 4 5	6 7 8 9
	// 10 * 1 = 10 -- 1 2 3 4 5	6 7 8 9 0
	// --> 10

	auto out = counting_sheep("1692");

	return 0;
}
