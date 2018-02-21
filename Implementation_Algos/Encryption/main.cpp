#include <bits/stdc++.h>

using namespace std;

string encryption(string s) {
    // Complete this function
    int L = s.length();
    int row = floor(sqrt(L));
    int col = ceil(sqrt(L));
     string result = "";
    for(int i = 0; i < col; i++)
    {
        for (int j = i; j < L ; j+= col)
        {
            result = result + s[j];
            
        }   
        result = result + " ";
        
    }
    return result;
}

int main() {
    string s;
    cin >> s;
    string result = encryption(s);
    cout << result << endl;
    return 0;
}

