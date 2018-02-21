#include <bits/stdc++.h>

using namespace std;

string gridSearch(vector <string> grid, vector <string> pattern, int rows, int cols, int patternRows , int patternCols) {
    // Complete this function
    
    /* GRID INSPECTION */
        bool found = false; // To know when to leave the loop and what answer to return
        // Iterate through each row until the pattern would extend off the grid
        for (int j = 0; j <= (rows - patternRows); j++) {
            // Iterate through each column until the pattern would extend off the grid
            for (int k = 0; k <= (cols - patternCols); k++) {
                // Check if there is a number in the grid equal to the first number in the pattern
                if (grid[j][k] == pattern[0][0]) {
                    bool wrong = false; // To break out if wrong is false at the end of checking the lines
                    // Begin cross checking each row with the pattern, until you hit the amount of pattern rows
                    for (int l = 0; l < patternRows; l++) {
                        // Set wrong to true and break out if the pattern row is not the same as the grid row --
                        // stripped at the correct spot to be the same length as the pattern row.
                        // E.g. if the pattern row was '9729' and the grid row was '209729142' get the substring --
                        // that is the same length as the pattern row (4) and starting at the correct place found --
                        // out by the checking of the first number in the pattern to this number in the row -- 
                        // then go downwards.
                        if (pattern[l] != grid[l + j].substr(k, patternCols)) { 
                            wrong = true;
                            break;
                        }
                    }
                    // If the whole test passed without any inconsistencies set found to true and begin the break chain 
                    if (!wrong) {
                        found = true;
                        break;
                    }
                }
            }
            // If found is false continue breaking
            if (found) 
                break;
            
        }

        /* ANSWER RETURN */
        if (found == true) 
            return "YES";
        else 
            return "NO";
        
    
    
    
}

int main() {
    int t;
    cin >> t;
    for(int a0 = 0; a0 < t; a0++){
        int R;
        int C;
        cin >> R >> C;
        vector<string> G(R);
        for(int G_i = 0; G_i < R; G_i++){
           cin >> G[G_i];
        }
        int r;
        int c;
        cin >> r >> c;
        vector<string> P(r);
        for(int P_i = 0; P_i < r; P_i++){
           cin >> P[P_i];
        }
        string result = gridSearch(G, P, R,C,r,c);
        cout << result << endl;
    }
    return 0;
}

