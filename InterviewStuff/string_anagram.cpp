nclude <map>
#include <set>
#include <list>
#include <cmath>
#include <ctime>
#include <deque>
#include <queue>
#include <stack>
#include <string>
#include <bitset>
#include <cstdio>
#include <limits>
#include <vector>
#include <climits>
#include <cstring>
#include <cstdlib>
#include <fstream>
#include <numeric>
#include <sstream>
#include <iostream>
#include <algorithm>
#include <unordered_map>

using namespace std;

int number_needed(string a, string b) {
    
    int count=0;
    int ans=0;
    
    
    if(a.length() > b.length())
    {
        for(int i = 0 ; i< a.length(); i++)
        {
            for(int j = 0 ; j < b.length(); j++)
            {
                if(a[i] == b[j] )
                {
                    b[j] = 0;
                    count ++;
                    break;
           
                } 
            }       
                
        }
    }
    ans = a.length() - count;
    
     if (a.length() < b.length())
    {
        for(int i = 0 ; i< b.length(); i++)
        {
            for(int j = 0 ; j < a.length(); j++)
            {
                if(b[i] == a[j] )
                {
                    a[j] = 0;
                    count ++;
                    break;
           
                } 
            }       
                
        }
    }
    int Total_length = a.length() + b.length();
    ans = Total_length - 2*count;
    
    if(a.length() == b.length())
    {
        for(int i = 0 ; i< b.length(); i++)
        {
            for(int j = 0 ; j < a.length(); j++)
            {
 
                if(b[i] == a[j] )
                {
                    a[j] = 0;
                    count ++;
                    break;
           
                } 
            }       
                
        }
    }
    ans = Total_length - 2*count;
    //cout<<"Count = "<<count<<endl;
    //cout<<"result="<<result<<endl;
   return ans;
}

int main(){
    
    string a;
    cin >> a;
    string b;
    cin >> b;
    cout << number_needed(a, b) << endl;
    return 0;
}

