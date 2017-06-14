
#include <algorithm>
#include <iterator>
#include <string>
#include <fstream>
#include <iostream>
#include <sstream>
#include <vector>
#include <cassert>

using namespace std;

string counting_sheep(const string& in)
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
    if (in == "0")
    {
        return "INSOMNIA";
    }
    
    int a[10];
	memset(a, 0, 10 * sizeof(int));

    char buffer[100];

    // next time multiply with 2
    int i = 2;
    int in_int = atoi(in.c_str());
    
    int v = in_int;

    while (true)
    {
        string v_string = string(itoa(v, buffer, 10));

        for(int s = 0; s < v_string.length(); ++s)
        {
            int j = v_string[s] - '0';
            a[j] = 1;
        }
        
        bool b = true;
        for(int a_i = 0; a_i < 10; ++a_i)
        {
            if(a[a_i] == 0) { b = false; break; }
        }
        
        if(b)
        {
            return v_string;
        }
        else
        {
            v = in_int * i;
            ++i;
        }
    }


	return 0;
}

int main()
{
    assert("INSOMNIA" == counting_sheep("0"));
	assert("5076" == counting_sheep("1692"));
    assert("10" == counting_sheep("1"));
    assert("90" == counting_sheep("2"));
    assert("110" == counting_sheep("11"));

	ifstream in(L"G:\2016\qualification\couting sheep\A-small-practice.in");

	if(!in)
	{
		return 1;
	}

	string line;
	
	// read first line, number of inputs
	getline(in, line);



	return 0;
}
