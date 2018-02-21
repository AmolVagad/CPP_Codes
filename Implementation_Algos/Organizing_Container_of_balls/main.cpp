#include <bits/stdc++.h>

using namespace std;

string organizingContainers(vector < vector<int> > container) {
    // Complete this function
    vector<int> box;
    vector<int> ball;
    for(int i = 0; i < container.size(); i++)
    {
        int box_count = 0;
        int ball_count = 0;
        for( int j = 0 ; j < container.size(); j++)
        {
            box_count += container[j][i];
            ball_count += container[i][j];
        }
        box.push_back(box_count);
        ball.push_back(ball_count);
        
    }
    
    sort(box.begin(), box.end());
    sort(ball.begin(), ball.end());
    
    if(box == ball)
        return "Possible";
    else
        return "Impossible";
}

int main() {
    int q;
    cin >> q;
    for(int a0 = 0; a0 < q; a0++){
        int n;
        cin >> n;
        vector< vector<int> > container(n,vector<int>(n));
        for(int container_i = 0;container_i < n;container_i++){
           for(int container_j = 0;container_j < n;container_j++){
              cin >> container[container_i][container_j];
           }
        }
        string result = organizingContainers(container);
        cout << result << endl;
    }
    return 0;
}

