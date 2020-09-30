#include <bits/stdc++.h>
using namespace std;
void input(int a[],int n){
    for(int i=0;i<n;i++)
    cin>>a[i];
}
int searchin(int a[],int s,int e){
   int mid=(s+e)/2;
    if(a[mid]>a[mid+1] && a[mid]<a[mid-1])
    return mid;
    //mid lies upper line
    if(a[s]<=a[mid]){
        if(a[mid]<a[mid+1])
       return searchin(a,mid+1,e);
        else
       return searchin(a,0,mid-1);
    }else{
        if(a[mid]<a[mid+1])
        return searchin(a,0,mid-1);   
        else
        return searchin(a,mid+1,e);
            
    }
}
int main() {
    int n,s,e;
    cin>>n;
    s=0;e=n-1;
    int a[n];
    input(a,n);
    cout <<searchin(a,s,e);
}