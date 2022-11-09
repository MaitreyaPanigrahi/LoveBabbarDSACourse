#include<bits/stdc++.h>
using namespace std;
int main(){

int arr[] = {-1,0,1,2,3};
int n = 5;
int pairCount = 0;
int i = 0;
int j = n-1;
int x =2;
while(i<j){
    if(arr[i] + arr[j] == x){
        pairCount ++;
        i++;
        j--;
    }
    else if(arr[i] + arr[j] > x){
        j--;
    }
    else{
        i++;
    }


}
    cout<<pairCount<<endl;
return 0;

}