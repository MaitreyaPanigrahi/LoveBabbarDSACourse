#include<bits/stdc++.h>
using namespace std;
void sort01(int arr[],int n){
    int lo = 0;
    int hi = n-1;
    while(lo<=hi){
        if(arr[lo] == 0){
            lo++;
        }
        if(arr[hi] == 1){
            hi--;
        }
        else{
            swap(arr[lo],arr[hi]);
            lo++;
            hi--;
        }
    }
}
void printArray(int arr[],int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
int main(){

int arr[8] = {0,1,0,1,0,1,0,1};
sort01(arr,8);
printArray(arr,8);

return 0;
}
