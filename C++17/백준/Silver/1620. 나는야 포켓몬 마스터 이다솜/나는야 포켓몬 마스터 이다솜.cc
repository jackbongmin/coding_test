
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


    int N, M;
    cin >> N >> M;

    unordered_map<string, int> name_map;

    for (int i = 1; i <= N; ++i) 
    {
        string pokemon;
        cin >> pokemon;

        name_arr[i] = pokemon;
        name_map[pokemon] = i;
    }

    for (int i = 0; i < M; ++i) 
    {
        string query;
        cin >> query;

        if (isdigit(query[0])) 
        {
            int num = stoi(query);
            cout << name_arr[num] << "\n";
        }
        else 
        {
            cout << name_map[query] << "\n";
        }
    }

    return 0;
    
}

