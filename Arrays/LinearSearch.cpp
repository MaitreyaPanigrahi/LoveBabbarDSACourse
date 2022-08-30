#include<bits/stdc++.h>
using namespace std;
bool linearSearch(int arr[],int n,int key){
    for(int i=0;i<n;i++){
        if(arr[i] == key){
            return 1;
        }
        else{
            return 0;
        }
    }
}
int main(){

int arr[7] = {3,6,2,8,7,9,10};
int key = 11;

if(linearSearch(arr,7,key)){
    cout<<"Key is Present"<<endl;
}
else{
    cout<<"Key is Absent"<<endl;
}


return 0;
}
