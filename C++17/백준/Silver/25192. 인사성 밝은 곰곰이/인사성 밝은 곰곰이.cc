
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

using namespace std;


int main() {
    //fastio();
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);


    int N;
    cin >> N;
    set<string> s;
    int gom = 0;

    string chat;
    for (int i = 0; i < N; ++i)
    {
        cin >> chat;

        if (chat == "ENTER")
        {
            s.clear();
        }
        else
        {
            // set의 find함수는 chat를 찾지 못하면 무조건 end()로 반환하기 때문에 
            if (s.find(chat) == s.end())
            {
                s.insert(chat);
                gom++;
            }
        }
    }

    cout << gom;
    return 0;
    
}

