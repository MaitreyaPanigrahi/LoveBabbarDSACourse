#include<bits/stdc++.h>
using namespace std;
int main(){

int arr[] = {5,10,15,20,26};
int n = 5;
int x = 10;
int pairCount = 0;
int i = 0;
int j = 1;
while(i<j){
    if(arr[j] - arr[i] == x){
        pairCount ++;
        i++;
        j++;
    }
    else if(arr[j] - arr[i] > x){
        i++;
    }
    else{
        j++;
    }
}
cout<<pairCount<<endl;

return 0;
}
