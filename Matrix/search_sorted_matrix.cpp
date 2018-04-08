/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
/*Search in a row wise and column wise sorted matrix
2.6
Given an n x n matrix and a number x,
find position of x in the matrix if it is present in it.
Else print “Not Found”. In the given matrix, every row and column is sorted 
in increasing order.
The designed algorithm should have linear time complexity.

*/
int main()
{
    int mat[4][4] = { {10, 20, 30, 40},
                      {15, 25, 35, 45},
                      {27, 29, 37, 48},
                      {32, 33, 39, 50}};
    int x = 29; 
    
    // With O(n^2) time complexity 
    
    for(int i = 0; i < 4; i++)
    {
        for(int j = 0; j < 4; j++)
        {
            if(mat[i][j] == 29)
                cout<<"Found at ("<<i<<","<<j<<")"<<endl;
        }
    }
    
    
    // With order O(n^1.58) time complexity 
   int i = 0,j = 3;
   while(i < 4 && j >= 0)
   {
       if(mat[i][j] == x)
       {
            printf("Found at %d,%d", i,j);
            break;
       }
       if(mat[i][j] > x)
            j--;
        else 
            i++;
   }
    
    
    
}


