nclude <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    int N = 0;
    cin>>N;
    int Q = 0;
    cin>>Q;
    int number =0;
   vector <vector <int> > seqList(N,vector <int> ());
    int seq= 0;
    int x = 0;
    int y = 0;
    int lastAnswer = 0;
    for(int i = 0; i < Q; i++)
    {
        cin>> number >> x >> y ;
        if (number == 1)
        {
            seq = ((x ^ lastAnswer)%N);
            seqList[seq].push_back(y);
        }
        else
        {
             seq = ((x ^ lastAnswer)%N);
             lastAnswer = seqList[seq][y%seqList[seq].size()];
            
            
             cout<<lastAnswer<<endl;
              
        }
    }
   
    
    return 0;
}

