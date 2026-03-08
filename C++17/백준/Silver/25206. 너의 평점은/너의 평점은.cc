
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

double GetGradePoint(string InGrade) {
    if (InGrade == "A+") return 4.5;
    if (InGrade == "A0") return 4.0;
    if (InGrade == "B+") return 3.5;
    if (InGrade == "B0") return 3.0;
    if (InGrade == "C+") return 2.5;
    if (InGrade == "C0") return 2.0;
    if (InGrade == "D+") return 1.5;
    if (InGrade == "D0") return 1.0;
    return 0.0;
}

int main() {
    //fastio();
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);


    string Name, Grade;
    double Credit;
    double Score = 0.0;
    double Credits = 0.0;

    for (int i = 0; i < 20; i++) 
    {
        cin >> Name >> Credit >> Grade;

        if (Grade == "P") 
        {
            continue;
        }

        Score += (Credit * GetGradePoint(Grade));
        Credits += Credit;
    }

    cout.precision(6);
    cout << fixed;

    if (Credits == 0) 
    {
        cout << 0.000000 << "\n";
    }
    else 
    {
        cout << Score / Credits << "\n";
    }

    return 0;
    
}

