#include <stdio.h>
#include <string.h>
#include <stdbool.h>
 
#define ROW 5
#define COL 5
 
 
int isSafe(int M[][COL], int row, int col,bool visited[][COL])
{
	//check if row & cols are in range , val is 1 and not visited
	return((row >= 0) && (row < ROW) && 
		(col >= 0) && (col < COL) && 
		(M[row][col] && !visited[row][col]));
		
} 


// DFS function


void DFS(int M[][COL], int row, int col, bool visited[][COL])
{
	// These arrays are used to get row and column numbers of 8 neighbours 
	// of a given cell
	static int rowNbr[] = {-1, -1, -1,  0, 0,  1, 1, 1};
	static int colNbr[] = {-1,  0,  1, -1, 1, -1, 0, 1};

	// Mark this cell as visited
	visited[row][col] = true;

	// Recur for all connected neighbours
	for (int k = 0; k < 8; ++k)
		if (isSafe(M, row + rowNbr[k], col + colNbr[k], visited) )
	   		DFS(M, row + rowNbr[k], col + colNbr[k], visited);
	
}



// Main function to return the count of islands 

int countIslands(int M[][COL])
{
	bool visited[ROW][COL];
	memset(visited,0, sizeof(visited));
	
	// Set counter to 0 initially 
	int count = 0;
	for(int i =0; i < ROW; i++)
	{
		for(int j = 0; j < COL; j++)
		{
			if(M[i][j] && !visited[i][j])
			{
				DFS(M, i ,j, visited);
				++count;
			}
		}
	}
	return count;	

}


// Driver program to test above function
int main()
{
    int M[][COL]= {  {1, 1, 0, 0, 0},
        {0, 1, 0, 0, 1},
        {1, 0, 0, 1, 1},
        {0, 0, 0, 0, 0},
        {1, 0, 1, 1, 1}
    };
 
    printf("Number of islands is: %d\n", countIslands(M));
 
    return 0;
}







