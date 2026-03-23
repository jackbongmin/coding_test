
//#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <algorithm>
#include <stack>
#include <queue>
#include <deque>
#include <string>
#include <vector>
#include <cstring>
#include <set>
#include <cctype>
#include <unordered_map>


using namespace std;


int main() 
{
    //fastio();
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);


    int N;
    int count = 0;
    cin >> N;


    for (int i = 0; i < N; ++i) 
    {
        int num;
        cin >> num;

        if (num == 1) 
        {
            continue;
        }

        bool isCount = true;

        for (int j = 2; j < num; ++j) 
        {
            if (num % j == 0) 
            {
                isCount = false;
                break;         
            }
        }

        if (isCount == true) 
        {
            count++;
        }
    }

    cout << count << "\n";

    return 0;
    
}

