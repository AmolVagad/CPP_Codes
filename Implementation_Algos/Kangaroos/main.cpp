#include <bits/stdc++.h>

using namespace std;

string kangaroo(int x1, int v1, int x2, int v2) {
    // Complete this function
    
    if(v2 > v1)
        return "NO";
    float res = (float)((x1-x2)%(v2-v1));
    if( floor(res) == 0 && v1>v2)
        return "YES";
    else 
        return "NO";
}

int main() {
    int x1;
    int v1;
    int x2;
    int v2;
    cin >> x1 >> v1 >> x2 >> v2;
    string result = kangaroo(x1, v1, x2, v2);
    cout << result << endl;
    return 0;
}

