#include <bits/stdc++.h>

using namespace std;

vector <int> breakingRecords(vector <int> score) {
    // Complete this function
    int min_score = score[0];
    int max_score = score[0];
    int max_count =0, min_count = 0;
    for(int i = 1; i < score.size(); i ++)
    {
        if(score[i] > max_score)
        {
            max_score = score[i];
            max_count++;
        }
        else if (score[i] < min_score)
        {
            min_score = score[i];
            min_count++;
        }
    }
    
    vector<int> result;
    result.push_back(max_count);
    result.push_back(min_count);
    
    return result;
    
    
}

int main() {
    int n;
    cin >> n;
    vector<int> score(n);
    for(int score_i = 0; score_i < n; score_i++){
       cin >> score[score_i];
    }
    vector <int> result = breakingRecords(score);
    for (ssize_t i = 0; i < result.size(); i++) {
        cout << result[i] << (i != result.size() - 1 ? " " : "");
    }
    cout << endl;


    return 0;
}

