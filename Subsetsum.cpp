#include<bits/stdc++.h>
using namespace std;
int main() {
    int t=1; 
    cin>>t;
 while(t--)
 {
     int n; cin>>n;
     int arr[n]; 
      for(int i=0;i<n;i++)
     cin>>arr[i];
     int wt=0;  // basically representing the total sum
        for(int i=0;i<n;i++) wt+=arr[i];
        if(wt%2==0)
        {
            wt=wt/2;
               // items - capacity.
            bool dp[n+1][wt+1];
             for(int j=0;j<=wt;j++)
        dp[0][j]=false;
        for(int i=0;i<=n;i++)
        dp[i][0]=true;
            for(int i=1;i<=n;i++)
            {
                for(int j=1;j<=wt;j++)
                {
                   
                     if(arr[i-1]<=j)  //have 2 options, either choose or not
                        dp[i][j]=(dp[i-1][j-arr[i-1]] || dp[i-1][j]);
                    else
                        dp[i][j]=dp[i-1][j];
                        
                }
            }
            
            if(dp[n][wt])
            cout<<"YES"<<"\n";
            else
            cout<<"NO"<<"\n";
            
        }
        else
        cout<<"NO"<<"\n";
 }
 return 0;
    
    }