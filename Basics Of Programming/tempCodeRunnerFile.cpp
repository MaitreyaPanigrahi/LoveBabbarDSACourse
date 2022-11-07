#include<bits/stdc++.h>
using namespace std;
void printArray(int arr[],int n){
    for(int i = 0;i<n;i++){
    cout<<arr[i]<<" ";
}
cout<<endl;
}

int getMax(int arr[],int n){
    int max = INT_MIN;
    for(int i = 0;i<n;i++){
        if(arr[i] > max)
        max = arr[i];
    }
    return max;
}

int getMin(int arr[],int n){
    int min = INT_MAX;
    for(int i = 0;i<n;i++){
        if(arr[i] < min)
        min = arr[i];
    }
    return min;
}

int getSum(int arr[],int n){
    int sum = 0;
    for(int i=0;i<n;i++){
        sum = sum + arr[i];
    }
    return sum;
}

bool linearSearch(int arr[],int n,int key){
    for(int i=0;i<n;i++){
        if(arr[i] == key){
            return 1;
        }
    }
    return 0;
}

void reverse(int arr[],int n){
    int s = 0;
    int e = n-1;
    while(s<=e){
        swap(arr[s],arr[e]);
        s++;
        e--;
    }
}

void swapAlternate(int arr[],int n){
    for(int i=0;i<n-1;i+=2){
            swap(arr[i] , arr[i+1]);
        
    }
}

int binarySearch(int arr[],int n,int key){
    int start = 0;
    int end = n-1;
    while(start<=end){
        int mid = start+(end-start)/2;
        if(arr[mid] == key){
            return mid;
        }
        else if(key > arr[mid]){
            start = mid + 1;
        }
        else{
            end = mid - 1;
        }
    }
    return -1;
}
int main(){

    // int arr[10] = {3,1,5,7,9,10,11,56,12,17};

    // reverse(arr,10);
    // printArray(arr,10);

    int even[6] = {1,2,3,4,5,6};
    int odd[5] = {1,2,3,4,5};

    cout<<binarySearch(even,6,9)<<endl;
    cout<<binarySearch(odd,5,6)<<endl;

    // swapAlternate(even,6);
    // printArray(even,6);

    // swapAlternate(odd,5);
    // printArray(odd,5);


    // int key = 18;

    // bool found = linearSearch(arr,10,key);
    // if(found){
    //     cout<<"Key is Present"<<endl;
    // }
    // else{
    //     cout<<"Key is Absent"<<endl;
    // }

// int arr[5];


// // cout<<arr[6]<<endl;

// int second[3] = {3,5,7};

// cout<<second[2]<<endl;


// int third[15] = {2,4};
// printArray(third,15);

// int fourth[14] = {0};
// printArray(fourth,14);


// int fifth[14];
// printArray(fifth,14);

// int fifthSize = sizeof(fifth) / sizeof(int);
// cout<<fifthSize<<endl;

// char ch[5] = {'a','b','c','d','e'};
// for(int i = 0;i<5;i++){
//     cout<<ch[i]<<" ";
// }
// cout<<endl;

// double d[5];
// float f [6];
// bool b[7];


// cout<<endl<<"Everything is fine"<<endl<<endl;


// int arr[100];
// int size;
// cin>>size;
// for(int i=0;i<size;i++){
//     cin>>arr[i];
// }

// cout<<getMax(arr,size)<<endl;
// cout<<getMin(arr,size)<<endl;

// cout<<getSum(arr,size);





return 0;
}

