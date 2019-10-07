// Author:: Mohammad Faisal
// Email: mohammad.faisal78612@gmail.com
// HackerRank: Greedy---> Grid Challenge
// Beginning with the name of Almighty GOD.
#include <bits/stdc++.h>

using namespace std;

// Complete the gridChallenge function below.
string gridChallenge(vector<string> grid) {
    int len = grid.size();
    string yes="YES";
    string no= "NO";
    // string t = "";
    bool ok = true;
    for(int i=0;i<len;i++)
    {
        sort(grid[i].begin(),grid[i].end());
        if(i>0)
        {
        for(int j=0; j<grid[i].size();j++)
        {
            ok &= (grid[i][j]>=grid[i-1][j]);
        }
        }
    }
    if(ok)
        return yes;
    else
        return no;
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    int t;
    cin >> t;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    for (int t_itr = 0; t_itr < t; t_itr++) {
        int n;
        cin >> n;
        cin.ignore(numeric_limits<streamsize>::max(), '\n');

        vector<string> grid(n);

        for (int i = 0; i < n; i++) {
            string grid_item;
            getline(cin, grid_item);

            grid[i] = grid_item;
        }

        string result = gridChallenge(grid);

        fout << result << "\n";
    }

    fout.close();

    return 0;
}
