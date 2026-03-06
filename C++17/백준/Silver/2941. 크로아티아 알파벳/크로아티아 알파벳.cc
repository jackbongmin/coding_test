#include <iostream>
#include <string>
#include <vector>

using namespace std;

int CountCroatianAlphabets(string InInput) {
    vector<string> croatianAlphabets = {"c=", "c-", "dz=", "d-", "lj", "nj", "s=", "z="};
    
    for (const string& croatian : croatianAlphabets) {
        size_t pos = 0;
        while (true) {
            pos = InInput.find(croatian, pos);
            if (pos == string::npos) {
                break;
            }
           
            InInput.replace(pos, croatian.length(), "#");
            pos += 1; 
        }
    }
    return InInput.length();
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    string input;
    cin >> input;
    
    cout << CountCroatianAlphabets(input) << "\n";
    
    return 0;
}
