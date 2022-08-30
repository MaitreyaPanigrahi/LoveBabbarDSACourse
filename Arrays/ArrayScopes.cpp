#include<bits/stdc++.h>
using namespace std;
void update(int arr[],int n){
    cout<<"Printing"<<endl;
    for(int i=0;i<n;i++){
        arr[i] = 1;
        cout<<arr[i]<<" ";
    }
    cout<<endl;

    cout<<"Printing Done"<<endl;
}
int main(){

int arr[3] = {1,2,3};

update(arr,3);
cout<<"Print in Main function"<<endl;
for(int i=0;i<3;i++){
    cout<<arr[i]<<" ";
}
cout<<endl;

return 0;
}
