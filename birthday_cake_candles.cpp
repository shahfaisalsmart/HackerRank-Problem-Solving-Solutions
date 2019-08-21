// Author: Mohammad Faisal
/*
    Problem: Birthday Cake Candles
    Section: Warmup 
    date: 21/08/2019
*/
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    map<int,int> mp;
    for(int i=0;i<n;i++)
    {
        int a;
        cin >> a;
        mp[a]++;
    }
    // map<int,int>:: iterator it;
    if(!mp.empty())
        cout<<(--mp.end())->second;
    return 0;
}
