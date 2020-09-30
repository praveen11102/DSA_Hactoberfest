#include <bits/stdc++.h>
using namespace std;  
int knapsack(int w[],int val[],int cap,int n){
    int dp[100][100];
     memset(dp,-1,sizeof(dp));
    //Base case
    if(n==0 || cap==0)
    return 0;
    if(dp[n][cap] != -1)
    return dp[n][cap];
    //Recursive case
    if(w[n-1]<=cap){
         dp[n][cap] =max((val[n-1]+(knapsack(w,val,cap-w[n-1],n-1))),(knapsack(w,val,cap,n-1)));
         
    }else
         dp[n][cap] = knapsack(w,val,cap,n-1);
        
    return dp[n][cap];
}
int main() {

    int val[] = { 60, 100, 120 }; 
    int w[] = { 10, 20, 30 }; 
    int cap = 50; 
    int n = sizeof(val) / sizeof(val[0]); 
    cout << knapsack(w, val, cap, n); 
    return 0; 
}
