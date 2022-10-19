#include <bits/stdc++.h>
#define pb push_back
#define in insert
#define fastread() (ios_base::sync_with_stdio(false), cin.tie(NULL));
#define vi vector<int>
#define vs vector<string>
#define vc vector<char>
#define vvi vector<vector<int>>
#define vvs vector<vector<string>>
#define vvc vector<vector<char>>
#define si set<int>
#define ss set<string>
#define sc set<char>
#define f(a, b, c) for (auto i = a; i < b; i = i + c)
using namespace std;
bool binarysearch(vi input,int data,int start,int end){
    if(start>=end){
        return false;
    }
    int mid=start + (end - start) / 2;
    if(input[mid]==data){
        return true;
    }
    else if(input[mid]>data){
        binarysearch(input,data,start,mid-1);
    }
    else if(input[mid]<data){
        binarysearch(input,data,mid+1,end);
    }
    return false;
}
int main()
{
    vi input={1,2,3,4,5,6,7};
    cout<<binarysearch(input,10,0,input.size()-1);
    return 0;
}