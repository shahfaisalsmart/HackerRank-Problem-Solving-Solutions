/*
Manasa is out on a hike with friends. She finds a trail of stones with numbers on them. She starts following the trail and notices that any two consecutive stones' numbers differ by one of two values. Legend has it that there is a treasure trove at the end of the trail. If Manasa can guess the value of the last stone, the treasure will be hers.

For example, assume she finds  stones and their differences are  or . We know she starts with a  stone not included in her count. The permutations of differences for the two stones would be  or . Looking at each scenario, stones might have  or  on them. The last stone might have any of , or  on its face.

Compute all possible numbers that might occur on the last stone given a starting stone with a  on it, a number of additional stones found, and the possible differences between consecutive stones. Order the list ascending.

Function Description

Complete the stones function in the editor below. It should return an array of integers representing all possible values of the last stone, sorted ascending.

stones has the following parameter(s):

n: an integer, the number of non-zero stones
a: one possible integer difference
b: another possible integer difference
Input Format

The first line contains an integer , the number of test cases.

Each test case contains  lines:
- The first line contains , the number of non-zero stones found.
- The second line contains , one possible difference
- The third line contains , the other possible difference.

Constraints

Output Format

Space-separated list of numbers which are the possible values of the last stone in increasing order.

Sample Input

2
3 
1
2
4
10
100
Sample Output

2 3 4 
30 120 210 300 
Explanation

With differences 1 and 2, all possible series for the first test case are given below:

0,1,2
0,1,3
0,2,3
0,2,4
Hence the answer 2 3 4.

With differences 10 and 100, all possible series for the second test case are the following:

0, 10, 20, 30
0, 10, 20, 120
0, 10, 110, 120
0, 10, 110, 210
0, 100, 110, 120
0, 100, 110, 210
0, 100, 200, 210
0, 100, 200, 300
Hence the answer 30 120 210 300.

*/
// Author: Mohammad Faisal
// Email: mohammad.faisal78612@gmail.com
// Beginning with the name of Almighty GOD ALLAH-SUBHANA-WATA-A-ALLAH.
#include <bits/stdc++.h>

using namespace std;

// Complete the stones function below.
vector<int> stones(int n, int a, int b) {

    set<int> st;
    int ca = min(a,b);
    int cb = max(a,b);

    n--;
    for(int i=0;i<=n;i++)
        st.insert(cb*i + ca*(n-i));

    vector<int> ans;
    for(set<int>::iterator it=st.begin();it!=st.end();it++)
        ans.push_back(*it);
    return ans;
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    int T;
    cin >> T;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    for (int T_itr = 0; T_itr < T; T_itr++) {
        int n;
        cin >> n;
        cin.ignore(numeric_limits<streamsize>::max(), '\n');

        int a;
        cin >> a;
        cin.ignore(numeric_limits<streamsize>::max(), '\n');

        int b;
        cin >> b;
        cin.ignore(numeric_limits<streamsize>::max(), '\n');

        vector<int> result = stones(n, a, b);

        for (int i = 0; i < result.size(); i++) {
            fout << result[i];

            if (i != result.size() - 1) {
                fout << " ";
            }
        }

        fout << "\n";
    }

    fout.close();

    return 0;
}
