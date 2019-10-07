// Author:: Mohammad Faisal
// Email: mohammad.faisal78612@gmail.com
// HackerRank:; Greedy--> Maximum Perimeter Triangle
// BEGINNING WITH THE NAME OF ALMIGHTY GOD ALLAH.
#include <bits/stdc++.h>

using namespace std;

vector<string> split_string(string);

// Complete the maximumPerimeterTriangle function below.
vector<int> maximumPerimeterTriangle(vector<int> sticks) {

        int len = sticks.size();
        sort(sticks.begin(),sticks.end());

        int ind = len-3;
        while(ind>=0 && (sticks[ind]+sticks[ind+1]<=sticks[ind+2])) // condition for checking the triangle which is NON degerating.
        {
            ind-=1;
        }
        vector<int> ans;
        if(ind>=0)
        {
            ans.push_back(sticks[ind]);
            ans.push_back(sticks[ind+1]);
            ans.push_back(sticks[ind+2]);
        }
        else
        {
            ans.push_back(-1);  // CONDITION WHEN WE FOUND ANY DEGENERATING.
        }
        return ans;

}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    int n;
    cin >> n;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    string sticks_temp_temp;
    getline(cin, sticks_temp_temp);

    vector<string> sticks_temp = split_string(sticks_temp_temp);

    vector<int> sticks(n);

    for (int i = 0; i < n; i++) {
        int sticks_item = stoi(sticks_temp[i]);

        sticks[i] = sticks_item;
    }

    vector<int> result = maximumPerimeterTriangle(sticks);

    for (int i = 0; i < result.size(); i++) {
        fout << result[i];

        if (i != result.size() - 1) {
            fout << " ";
        }
    }

    fout << "\n";

    fout.close();

    return 0;
}

vector<string> split_string(string input_string) {
    string::iterator new_end = unique(input_string.begin(), input_string.end(), [] (const char &x, const char &y) {
        return x == y and x == ' ';
    });

    input_string.erase(new_end, input_string.end());

    while (input_string[input_string.length() - 1] == ' ') {
        input_string.pop_back();
    }

    vector<string> splits;
    char delimiter = ' ';

    size_t i = 0;
    size_t pos = input_string.find(delimiter);

    while (pos != string::npos) {
        splits.push_back(input_string.substr(i, pos - i));

        i = pos + 1;
        pos = input_string.find(delimiter, i);
    }

    splits.push_back(input_string.substr(i, min(pos, input_string.length()) - i + 1));

    return splits;
}
