#include <bits/stdc++.h>

using namespace std;

void countApplesAndOranges(int s, int t, int a, int b, vector <int> apples, vector <int> oranges) {
    // Complete this function
    
    int dist_a = 0, dist_b = 0, count_a = 0, count_b = 0;
    // Check count of apples 
    for(int i = 0; i < apples.size(); i++)
    {
        dist_a = a + apples[i];
        if(dist_a <= t && dist_a >= s)
            count_a ++;            
    }
    // Check count of oranges 
    for(int j = 0; j < oranges.size(); j++)
    {
        dist_b = b + oranges[j];
        if(dist_b <= t && dist_b >= s)
            count_b ++;            
    }
    // Display the final count 
    cout<<count_a<<endl<<count_b<<endl;
    
}

int main() {
    int s;
    int t;
    cin >> s >> t;
    int a;
    int b;
    cin >> a >> b;
    int m;
    int n;
    cin >> m >> n;
    vector<int> apple(m);
    for(int apple_i = 0; apple_i < m; apple_i++){
       cin >> apple[apple_i];
    }
    vector<int> orange(n);
    for(int orange_i = 0; orange_i < n; orange_i++){
       cin >> orange[orange_i];
    }
    countApplesAndOranges(s, t, a, b, apple, orange);
    return 0;
}

