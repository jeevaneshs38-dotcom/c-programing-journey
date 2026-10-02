#include<stdio.h>
#include<string.h>
#include<stdbool.h>
int maxPalindromes(char*s,int k)
{   int n=strlen(s);
    bool dp[n][n];
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            dp[i][j]=false;
        }
    }
    for(int i=0;i<n;i++)
     { dp[i][i]=true;}
     for(int len=2;len<=n;len++)
     {for(int i=0;i+len-1<n;i++)
     { int j=i+len-1;
     if(s[i]==s[j]){if(len==2)
     dp[i][j]=true;
        else
        dp[i][j]=dp[i+1][j-1];}}}
        int count=0;
        int lastEnd=-1;
        for(int j=0;j<n;j++){
            for(int i=lastEnd+1;i<=j-k+1;i++)
        {  if(dp[i][j]){count++;
             lastEnd=j; 
             break;}}}
             return count;}




