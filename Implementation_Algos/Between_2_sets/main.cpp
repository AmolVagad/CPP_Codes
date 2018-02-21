#include <bits/stdc++.h>

using namespace std;

int getTotalX(vector <int> a, vector <int> b) {
    // Complete this function
    int x = 0, count = 0, freqa= 0, freqb = 0;
    
   int maxa = *max_element(a.begin(),a.end());
   int minb = *min_element(b.begin(),b.end());
    /*
    for(x = maxa; x <=minb; x++ )
    {
        for(int i =0; i < a.size(); i++)
        {
            if(x%a[i] == 0)
                freqa++;
            else 
                break;
        }
        if(freqa == a.size())
        {
            cout<<x<<endl;
            for(int j =0; j < b.size(); j++)
            {
                if(b[j]%x == 0)
                    freqb++;
                else 
                    break;
            }
            
            if(freqb == b.size())
            {
                count++;
               // cout<<x<<endl;
            }

        }
    }
    
    return count;
}
*/
    int total = 0;
        if(maxa<minb){
            for(int i=maxa; i<=minb; i++){
                int c=0;
                for(int j=0; j<b.size(); j++){
                    if(b[j]%i==0)
                        c++;
                }
                if(c==b.size()){
                    int c1=0;
                    for(int k=0; k<a.size(); k++){
                        if(i%a[k]==0)
                            c1++;
                    }
                    if(c1==a.size()){
                    total++;
                    }
                }
            }
        }
        else{
            for(int i=minb; i<=maxa; i++){
                int c=0;
                for(int j=0; j<b.size(); j++){
                    if(b[j]%i==0)
                        c++;
                }
                if(c==b.size()){
                    int c1=0;
                    for(int k=0; k<a.size(); k++){
                        if(i%a[k]==0)
                            c1++;
                    }
                    if(c1==a.size()){
                        total++;
                    }
                }
            }
            
        }
        return total;
}
int main() {
    int n;
    int m;
    cin >> n >> m;
    vector<int> a(n);
    for(int a_i = 0; a_i < n; a_i++){
       cin >> a[a_i];
    }
    vector<int> b(m);
    for(int b_i = 0; b_i < m; b_i++){
       cin >> b[b_i];
    }
    int total = getTotalX(a, b);
    cout << total << endl;
    return 0;
}

