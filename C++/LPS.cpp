string longestPalindrome(string s) {
        int x= s.size();
        bool dp[x][x];
        for(int i=0;i<x;i++)
            dp[i][i]=true;
        for(int i=0;i<x-1;i++)
            if(s[i]==s[i+1])
                dp[i][i+1]=true;
        else dp[i][i+1]=false;
        for(int i=0;i<x-2;i++)
            for(int j=0;j<x-i-2;j++)
                if(s[j]==s[i+j+2])
                    dp[j][i+j+2]=dp[j+1][i+j+1];
        else dp[j][i+j+2]=false;
        int maxi=0;
        int l=0;
        int k=-1;
        for(int i=0;i<x;i++)
            for(int j=i;j<x;j++)
                if(dp[i][j])
                {
                    if(j-i+1>maxi)
                    {
                        maxi=j-i+1;
                        l=i;
                        k=j;
                    }
                }
        return s.substr(l,k-l+1);
    }





