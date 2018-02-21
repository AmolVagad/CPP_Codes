#include <bits/stdc++.h>

using namespace std;

string timeInWords(int h, int m) {
    // Complete this function
    
   vector<string> num_to_words = {"zero", "one", "two","three", "four","five", "six", "seven", "eight", "nine",
        "ten", "eleven", "twelve", "thirteen", "fourteen", "fifteen", "sixteen", "seventeen",
        "eighteen", "nineteen", "twenty", "twenty one", "twenty two", "twenty three", 
        "twenty four", "twenty five", "twenty six", "twenty seven", "twenty eight", 
        "twenty nine", "thirty"};
    string result;
    if(m == 0)
        result =  (num_to_words[h]) + " o' clock";
    else if(m == 1)
        result = (num_to_words[m]) + " minute past " + (num_to_words[h]);
    else if(m == 15)
        result ="quarter past " + (num_to_words[h]);
    else if(m == 30)
        result ="half past " + (num_to_words[h]);
    else if(m == 45)
       result = "quarter to " + (num_to_words[h + 1]);
    else if(m == 59)
        result = (num_to_words[60 -m]) + " minute to " + (num_to_words[h+1]);
    else if ( m > 1 && m < 30)
        result =(num_to_words[m]) + " minutes past " + (num_to_words[h]);
    else
        result = (num_to_words[60 -m]) + " minutes to " + (num_to_words[h+1]);
    
    return result;
        
}

int main() {
    int h;
    cin >> h;
    int m;
    cin >> m;
    string result = timeInWords(h, m);
    cout << result << endl;
    return 0;
}

