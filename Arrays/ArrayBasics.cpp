#include<bits/stdc++.h>
using namespace std;

void printArray(int arr[],int size){
    for(int i =0;i<size;i++){
    cout<<arr[i]<<" ";
}

}
int main(){
// Declaring
cout<<endl;
int number[15];



//Initialising 

int second[3] ={2,5,7};

//Accessing
// cout<<"Value at 2 index "<<second[2]<<endl;

int third[15] = {2,5};

// Print the Array

 
// printArray(third,15);
cout<<endl;


//Initialising all location with 0
int fourth[10] = {0};
// printArray(fourth,10);
cout<<endl;

int fifth[10] = {1};
// printArray(fifth,10);
cout<<endl;

int fifthSize = sizeof(fifth) / sizeof(int);
// cout<<fifthSize<<endl;

char ch[5] = {'a','b','c','p','q'};
cout<<ch[4]<<endl;

   for(int i =0;i<5;i++){
    cout<<ch[i]<<" ";
}
cout<<endl;

double firstDouble[6];
float firstFloat[7];
bool firstBool[9];
cout<<"Everything is fine :))"<<endl;
cout<<endl;



return 0;
}
