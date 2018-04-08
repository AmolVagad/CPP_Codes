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
/*SPrint a given matrix in spiral form

Given a 2D array, print it in spiral form.
*/
int main()
{
    int a[3][6] = { {1,  2,  3,  4,  5,  6},
        {7,  8,  9,  10, 11, 12},
        {13, 14, 15, 16, 17, 18}};
    
    int i,k=0,l=0;
    int m = 3, n = 6;
    while(k < m && l < n)
    {
        for(i = l; i < n; i++)
        {
            printf("%d ",a[k][i]);
        }
        k++;
        
        for(int i = k; i < m; i++)
        {
            printf("%d ", a[i][n-1]);
        }
        n--;
        if ( k < m)
        {
            for (i = n-1; i >= l; --i)
            {
                printf("%d ", a[m-1][i]);
            }
            m--;
        }
 
        /* Print the first column from the remaining columns */
        if (l < n)
        {
            for (i = m-1; i >= k; --i)
            {
                printf("%d ", a[i][l]);
            }
            l++;    
        }
        
    }
    
    
    
}


