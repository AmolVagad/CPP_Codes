/******************************************************************************

Given a Pre-ordered BST, check if its every internal node has just 1 child 

*******************************************************************************/
#include <stdio.h>


bool hasOnlyOneChild(int a[], int size)
{ 
    int min_val, max_val;
    if(a[size-1] > a[size-2])
    {
        max_val = a[size-1];
        min_val = a[size-2];
    }
    
    else
    {
        min_val = a[size-1];
        max_val = a[size-2];
        
    }
    
    
    
    for(int i = 0; i < size-3; i++)
    {
        if(a[i] < min_val)
            min_val = a[i];
        else if(a[i] > max_val)
            max_val = a[i];
            
        else
            return false;
    }
    
    return true;
    
}






int main()
{
    int pre[] = {8, 3, 5, 7, 6};
    int size = sizeof(pre)/sizeof(pre[0]);
    if (hasOnlyOneChild(pre, size) == true )
        printf("Yes");
    else
        printf("No");
   

    return 0;
}
