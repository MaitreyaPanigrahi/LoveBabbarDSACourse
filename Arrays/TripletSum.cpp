#include<bits/stdc++.h>
using namespace std;
int main(){
vector<int>arr;
arr.push_back(1);
arr.push_back(2);
arr.push_back(3);
arr.push_back(1);
arr.push_back(2);
arr.push_back(3);
int n = arr.size();

vector<vector<int>>ans;
vector<int>temp;
sort(arr.begin(),arr.end());

int K = 6;

for(int i=0;i<n;i++){
    int j = i + 1;
    int k = n - 1;
    int val = K - arr[i];
    while(j<k){
        int sum = arr[j] + arr[k];
        if(sum > val){
            k--;
        }
        else if(sum < val){
            j++;
        }
        else{
            temp.push_back(arr[i]);
            temp.push_back(arr[j]);
            temp.push_back(arr[k]);

            // ans.push_back(temp);

            while(j<k && arr[j] == temp[1]){
                j++;
            }
            while(j<k && arr[k] == temp[2]){
                k--;
            }
            while(i+1 < n && arr[i] == arr[i+1]){
                i++;
            }
        }
    }
    
}

for(int i=0;i<n;i++){
    cout<<temp[i];
}


return 0;
}
