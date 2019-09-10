// Author: Mohammad Faisal
// Email: mohammad.faisal78612@gmail.com
#include <bits/stdc++.h>

using namespace std;

// Complete the utopianTree function below.
int utopianTree(int n) {

    long long tree =1;
    for(int i=1;i<=n;i++)
        (i&1) ? tree*=2 : tree++;

    return (int)tree;   

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

        int result = utopianTree(n);

        fout << result << "\n";
    }

    fout.close();

    return 0;
}
