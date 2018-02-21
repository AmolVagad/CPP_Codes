#include <bits/stdc++.h>

using namespace std;

int solve(int n, vector < int > s, int d, int m){
    // Complete this function
    int count_final = 0;
    for(int i = 0; i < s.size(); i++)
    {
        int c = 0,sum=0;
        while(c<m)
        {
            sum += s[i+c];
            c++;
        }
        if(sum == d)
            count_final++;
    }
    
    return count_final;
    
}

int main() {
    int n;
    cin >> n;
    vector<int> s(n);
    for(int s_i = 0; s_i < n; s_i++){
       cin >> s[s_i];
    }
    int d;
    int m;
    cin >> d >> m;
    int result = solve(n, s, d, m);
    cout << result << endl;
    return 0;
}

