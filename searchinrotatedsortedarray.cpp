#include <iostream>
using namespace std;
int searchin(int a[], int s , int e , int key){
    //Base case
    if(s>e){
        return -1;
    }
    
    //Recursive case
    int mid = (s+e)/2;
    if(a[mid]==key)
    return mid;
    //1st line
    if(a[mid]>=a[s]){
        if(key<=a[mid] && key>=a[s]){
            return searchin(a,s,mid-1,key);
        }else{
            return searchin(a,mid+1,e,key);
        }
    }
    //2nd line
    if(key>=a[mid] && key<=a[e]){
        return searchin(a,mid+1,e,key);
    }else
        return searchin(a,s,mid-1,key); 
}
int main() {
    int a[]={4,5,1,2,3};
   cout<<searchin(a,0,4,4);
}
