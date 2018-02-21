#include <bits/stdc++.h>

using namespace std;

int nonDivisibleSubset(int k, vector <int> arr) {
    // Complete this function
    int f[k]= {};
   
    for(int i =0; i < arr.size(); i++)
        f[arr[i]%k]++;
    
    if(k%2 == 0)
        f[k/2] = min(f[k/2],1);
    int result = min(f[0],1);
    
    for (int i = 1; i <= k/2; i++)
        result += max(f[i], f[k-i]);
    return result;    
}

int main() {
    int n;
    int k;
    cin >> n >> k;
    vector<int> arr(n);
    for(int arr_i = 0; arr_i < n; arr_i++){
       cin >> arr[arr_i];
    }
    int result = nonDivisibleSubset(k, arr);
    cout << result << endl;
    return 0;
}

