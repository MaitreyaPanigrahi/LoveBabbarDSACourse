#include<bits/stdc++.h>
using namespace std;
int maxElement(int arr[],int n){
    int maxi = INT_MIN;
    for(int i=0;i<n;i++){
        if(arr[i] > maxi){    // STL maxi = max(maxi,arr[i]);
            maxi = arr[i];
        }
    }
    return maxi;
}

int minElement(int arr[],int n){
    int mini = INT_MAX;
    for(int i=0;i<n;i++){
        if(arr[i] < mini){   // STL mini = min(mini,arr[i]);
            mini = arr[i];
        }
    }
    return mini;
}


int main(){
int arr[4] = {4,12,8,10};

cout<<"Maximum element is the array is "<<maxElement(arr,4)<<endl;
cout<<"Minimum element is the array is "<<minElement(arr,4)<<endl;


return 0;
}
