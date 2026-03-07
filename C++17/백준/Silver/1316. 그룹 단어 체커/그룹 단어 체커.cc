
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
string name_arr[100005];

int main() {
    //fastio();
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);


    int N;
    cin >> N;

    int a = 0;

    for (int i = 0; i < N; ++i) 
    {
        string word;
        cin >> word;

        bool visited[26] = { false };
        bool group = true;

        for (int j = 0; j < word.length(); ++j) 
        {
            if (j == 0 || word[j] != word[j - 1]) 
            {
                int index = word[j] - 'a';

                if (visited[index] == true) 
                {
                    group = false;
                    break;
                }
                else 
                {
                    visited[index] = true;
                }
            }
        }
        if (group) 
        {
            a++;
        }
    }

    cout << a << "\n";

    return 0;
    
}

