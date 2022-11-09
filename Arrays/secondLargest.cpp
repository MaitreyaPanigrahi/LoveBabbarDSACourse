#include<bits/stdc++.h>
using namespace std;
// int largestElement(int arr[],int n){
//     int max = INT_MIN;
//     int maxIndex = -1;
//     for(int i =0;i<n;i++){
//         if(arr[i] > max){
//             max = arr[i];
//             maxIndex = i;
//         }
//     }
//     return max;
// }

int secondLargest(int arr[],int n){
    int max = INT_MIN;
    int secondMax = INT_MIN;
    for(int i = 0;i<n;i++){
        if(arr[i] > max){
            max = arr[i];
        }
    }

    for(int i = 0;i<n;i++){
        if(arr[i] > secondMax && arr[i] != max){
            secondMax = arr[i];
        }
    }
    return secondMax;
}
int main(){

// int arr[7] = {2,3,5,7,6,7,1};
// int n= 7;
// int indexLargest = largestElementIndex(arr,7);

// int largestelement = arr[indexLargest] ;
// for(int i=0;i<n;i++){
//     if(arr[i] == largestelement){
//         arr[i] = -1;
//     }
// }

// for(int i=0;i<n;i++){
//     cout<<arr[i]<<" ";
// }
// cout<<endl;

// int secondIndexLargest = largestElementIndex(arr,7);


// cout<<"Second largest element is "<<arr[secondIndexLargest]<<endl;

int arr[7] = {2,3,5,7,6,7,1};
int n = 7;
// int largestEle = largestElement(arr,7);

// cout<<largestEle<<endl;

int secondLarge = secondLargest(arr,7);

cout<<secondLarge<<endl;

return 0;
}
