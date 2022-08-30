#include<bits/stdc++.h>
using namespace std;

void swapAlternate(int arr[],int n){
    for(int i=0;i<(n-1);i+=2){
        swap(arr[i],arr[i+1]);

    }
}
void printArray(int arr[],int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
int main(){

int arr[5] = {1,2,7,8,5};
int brr[6] = {1,2,3,4,5,6};

swapAlternate(arr,5);
printArray(arr,5);

swapAlternate(brr,6);    
printArray(brr,6);
return 0;
}
