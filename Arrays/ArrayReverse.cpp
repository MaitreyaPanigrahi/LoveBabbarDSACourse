#include<bits/stdc++.h>
using namespace std;
void reverseArray(int arr[],int n){
    int i=0;
    int j = n-1;
    int temp;
    while(i<=j){
        int temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
        i++;
        j--;
    }
}

void printArray(int arr[],int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
int main(){
int arr[5] = {1,2,3,4,5};
reverseArray(arr,5);
printArray(arr,5);


return 0;
}
