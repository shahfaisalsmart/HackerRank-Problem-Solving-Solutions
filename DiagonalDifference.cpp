// Author: Mohammad Faisal
// Diagonal Difference
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int arr[n][n];
    for(int i=0;i<n;i++)
        for(int j=0;j<n;j++)
            cin >> arr[i][j];
    
    int sum1=0;
    int sum2=0;
    
    for(int i=0;i<n;i++)
        sum1+=arr[i][i];
    
    // cout<<"first diagnal: "<<sum1<<endl;
    
    int row = 0, col =n-1;
    
    for(int j=0;j<n;j++)
    {
        sum2+=arr[row][col];
        row++;
        col--;
        // cout<<"ye rahi doosre diagol ki value::"<<endl;
        // cout<<arr[row][col]<<endl;
    }
    cout<<abs(sum1-sum2)<<endl;
    // cout<<"dosri diagonal: "<<sum2<<endl;
    return 0;
    
}
