// Author: Mohammad Faisal
// Email: mohammd.faisal78612@gmail.com
// Beginning with the name of Almighty God ALLAH
//  
#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    //system("clear");
    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;
        long long int * arr = new long long int[n];
        for(int i=0;i<n;i++)
        {
            string s;
            cin >> s;
            cin >> arr[i];
        }
        sort(arr,arr+n);
        long long int sum=0;
        for(int i=0;i<n;i++)
        {
            sum+=abs(i+1-arr[i]);
        }
        cout<<sum<<endl;
    }
    return 0;
} 
