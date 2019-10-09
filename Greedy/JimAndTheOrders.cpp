// Author:: Mohammad Faisal
// Email: mohammad.faisal78612@gmail.com
// HackerRank: (greedy) JIM AND THE ORDERS
// BEGINNING WITH THE NAME OF ALMIGHTY GOD ALLAH.
#include <bits/stdc++.h>
#include<unordered_map>
#include<utility>
using namespace std;

// Complete the jimOrders function below.
vector<int> jimOrders(vector<vector<int>> orders) {

    int len = orders.size();
    vector<pair<long long,int> > res;
    for(int i=0;i<len;i++)
    {
        long long total = orders[i][0]+orders[i][1];
        // res[total] = i+1; 
        res.push_back(make_pair(total,i+1));
    }
    vector<int>ans;
    // int i=0;
    sort(res.begin(),res.end());
    for(vector<pair<long long,int> >:: iterator it= res.begin();it!=res.end();it++)
    {
        ans.push_back(it->second);
    }
    return ans;
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    int n;
    cin >> n;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    vector<vector<int>> orders(n);
    for (int i = 0; i < n; i++) {
        orders[i].resize(2);

        for (int j = 0; j < 2; j++) {
            cin >> orders[i][j];
        }

        cin.ignore(numeric_limits<streamsize>::max(), '\n');
    }

    vector<int> result = jimOrders(orders);

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

