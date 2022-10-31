#include<bits/stdc++.h>
using namespace std;

void subsequence(vector<int>arr , vector<int>output, int index, vector<vector<int>>&ans){
// base case 
if(index >= arr.size()){
    ans.push_back(output);
    return;
}
// exclude 

subsequence(arr,output,index+1,ans);

// include
int element = arr[index];
output.push_back(element);
subsequence(arr,output,index+1,ans);


}




int main(){

int n;
cin>>n;

vector<int> arr(n);

for(int i = 0 ; i < n  ; i++){
    cin>>arr[i];
}

vector<vector<int>>ans;
vector<int> output;

int index = 0;

subsequence(arr,output,index,ans);


for(int i = 0 ; i < ans.size();i++){
    cout<< ans[i];
    
}



    return 0;
}
