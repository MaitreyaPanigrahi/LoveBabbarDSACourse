#include<bits/stdc++.h>
using namespace std;
int main(){
int arr[5] = {1,3,4,6,7};
int n = 5;
int target = 7;
int noOfPairs = 0;
int lo = 0;
int hi = n-1;
while(lo<hi){
    if(arr[lo] + arr[hi] == target ){
        noOfPairs++;
        lo++;
        hi--;
    }
    else if(arr[lo] + arr[hi] < target){
        lo++;
    }
    else {
        hi--;
    }
}
cout<<"No of pairs are "<<noOfPairs<<endl;


return 0;
}
