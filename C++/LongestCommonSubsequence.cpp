// Longest common subsequence
// Subsequence - Relative ordering remains same

#include<iostream>
#include<vector>
using namespace std;


int solve(string &a , string&b , int i , int j,vector<vector<int>>&dp){
    // base case 
    if(i == a.length()){
        return 0;
    }
    if(j == b.length()){
        return 0;
    }

    if(dp[i][j]!=-1){
        return dp[i][j];
    }
    int ans = 0;

    if(a[i] == b[j]){
        ans = 1 + solve(a,b,i+1,j+1,dp);
    }

    else{
        int ans = max(solve(a,b,i+1,j,dp),solve(a,b,i,j+1,dp));
    }


return dp[i][j] = ans;

}

int solveTab(string a , string b ){
    vector<vector<int>> dp(a.length()+1,vector<int>(b.length()+1,-1));

    vector<int> curr(b.length()+1,0);
    vector<int>next(b.length()+1,0);





   for(int i = a.length()-1; i>=0 ;i--){
    for(int j = b.length()-1;j>=0;j--){
    int ans = 0;

    if(a[i] == b[j]){
        ans = 1 + next[j+1];
    }

    else{
        ans = max(next[j],curr[j+1]);
    }
curr[j] = ans;

    }
    next = curr;
   } 

   return next[0];
}

int main(){
    
    string a;
    string b;

    cin>>a>>b;
    vector<vector<int>> dp(a.length(),vector<int>(b.length(),-1));

cout<<solveTab(a,b);








    return 0;
}
