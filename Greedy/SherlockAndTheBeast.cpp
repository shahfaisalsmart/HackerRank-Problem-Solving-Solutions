// Author: Mohammad Faisal
// Email: mohammad.faisal78612@gmail.com
// HackerRank(greedy) Sherlock and the beast
// Beginning with the name of Almighty God Allah.
#include <bits/stdc++.h>

using namespace std;

string ltrim(const string &);
string rtrim(const string &);

// Complete the decentNumber function below.
void decentNumber(int n) {

    int n3 = ((2*n)%3)*5;
    if(n3>n)
        cout<<"-1"<<endl;
    else
    {
        for(int i=0;i<n-n3;i++)
            cout<<"5";
        for(int i=0;i<n3;i++)
            cout<<"3";
        cout<<endl;
    }

}

int main()
{
    string t_temp;
    getline(cin, t_temp);

    int t = stoi(ltrim(rtrim(t_temp)));

    for (int t_itr = 0; t_itr < t; t_itr++) {
        string n_temp;
        getline(cin, n_temp);

        int n = stoi(ltrim(rtrim(n_temp)));

        decentNumber(n);
    }

    return 0;
}

string ltrim(const string &str) {
    string s(str);

    s.erase(
        s.begin(),
        find_if(s.begin(), s.end(), not1(ptr_fun<int, int>(isspace)))
    );

    return s;
}

string rtrim(const string &str) {
    string s(str);

    s.erase(
        find_if(s.rbegin(), s.rend(), not1(ptr_fun<int, int>(isspace))).base(),
        s.end()
    );

    return s;
}
