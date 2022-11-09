#include<bits/stdc++.h>
using namespace std;
void mergeArray(int arr1[],int arr2[],int arr[],int k,int m,int n){
int i = m-1;
int j = n-1;
while(i>=0 && j>=0){
    if(arr1[i] > arr2[j]){
        arr[k] = arr1[i];
        k--;
        i--;
    }
    else{
        arr[k] = arr2[j];
        k--;
        j--;
    }
}
while(i>=0){
    arr[k] = arr1[i];
    k--;
    i--;
}
while(j>=0){
    arr[k] = arr2[j];
    k--;
    j--;
}

for(int l=0;l<6;l++){
    cout<<arr[l]<<" ";
}
cout<<endl;
}
int main(){

int arr1[3] = {1,7,9};
int arr2[3] = {2,6,8};
int m = 3;
int n = 3;
int  k = m + n ;
int arr[k];

mergeArray(arr1,arr2,arr,k,m,n);



return 0;
}

