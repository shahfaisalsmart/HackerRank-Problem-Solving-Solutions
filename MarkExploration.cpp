// Author: Mohammad Faisal
// Email: mohammad.faisal78612@gmail.com
// Problem: Mars Exploration 
#include <bits/stdc++.h>

using namespace std;

// Complete the marsExploration function below.
int marsExploration(string s) {
    int len =(int)s.size();
    int ans =0;
    for(int i=0;i<len;i+=3)
    {
        if(s[i]=='S' && s[i+1]=='O' && s[i+2]=='S')
            continue;
        else{
            if(s[i]!='S') ans++;
            if(s[i+1]!='O') ans++;
            if(s[i+2]!='S') ans++;
            }
    }
    return ans;
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string s;
    getline(cin, s);

    int result = marsExploration(s);

    fout << result << "\n";

    fout.close();

    return 0;
}
