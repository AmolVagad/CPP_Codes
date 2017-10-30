#include<stdio.h>
#include<iostream>
using namespace std;
int main()
{

	int matrix[3][3] = {1,2,3,4,5,6,7,8,9};
	//Printing out the elements of the matrix
	for(int i =0 ; i <= matrix.height(); i++)
	{
		for(int j = 0 ; j<= matrix.width(); j++)
		{
			cout<<"The input is ="<<matrix[i][j]<<endl;
		}
	}
	return 0;
}
