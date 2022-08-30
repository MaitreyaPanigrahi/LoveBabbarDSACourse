#include<bits/stdc++.h>
using namespace std;
int findDuplicate(vector<int> arr,int n){
    int ans;
    map<int,int>a;
    for(auto &i:arr){
        a[i] ++;
    }
    for(auto &i:a){
        if(i.second > 1){
            ans = i.first;
        }
    }
    return ans;
}
int main(){

vector<int>v1 = {1,3,4,2,2};
vector<int>v2 = {1,1,2};

cout<<findDuplicate(v1,5)<<endl;
cout<<findDuplicate(v2,3)<<endl;

return 0;
}
