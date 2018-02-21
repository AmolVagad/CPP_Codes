#include <bits/stdc++.h>

using namespace std;

string biggerIsGreater(string w) {
    // Complete this function
  
   bool val = next_permutation(w.begin(), w.end());
   if(val == false)
       return"no answer";
    else
        return w;
    
    /*
    int max;
    for(int i = 0; i < w.length(); i++)
    {
        if(w[i] < w[i+1])
        {
            max = i;
            for(int j = 1; j < w.length(); j++)
            {
                if(j > i && w[j] > w[max])
                    swap(w[max],w[j]);
            }
        }
    }
    for (int i=max; i<(w.length() - max)/2; i++)
       swap(w[i], w[w.length()-i-1]);
    
    return w;*/
}

int main() {
    int T;
    cin >> T;
    for(int a0 = 0; a0 < T; a0++){
        string w;
        cin >> w;
        string result = biggerIsGreater(w);
        cout << result << endl;
    }
    return 0;
}

