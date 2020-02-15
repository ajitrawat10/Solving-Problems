/*****
This is a Recursion Approach
Its time complexity is O(2^n)

*****/


#include<bits/stdc++.h>
using namespace std;
int LongestCommonSubsequence( string X, string Y, int m, int n )
{
    if (m == 0 || n == 0)
        return 0;
    if (X[m-1] == Y[n-1])
        return 1 + LongestCommonSubsequence(X, Y, m-1, n-1);
    else
        return max(LongestCommonSubsequence(X, Y, m, n-1), LongestCommonSubsequence(X, Y, m-1, n));
}
int main() {
  string s1="abcdef";
  string s2="xyczef";
  int a=s1.length();
  int b=s2.length();
  cout<<"Longest common subsequence is:"<<" ";
  cout<<LongestCommonSubsequence(s1,s2,a,b);
  return 0;
}


/****
This is a Dynamic Programming method .
Its time complexity is O(m*n)
where m and n are the length of the strings.
****/

#include<bits/stdc++.h>
using namespace std;
int lcs( string X,string Y, int m, int n )
{
    int L[m + 1][n + 1];
    int i, j;


    for (i = 0; i <= m; i++)
    {
        for (j = 0; j <= n; j++)
        {
        if (i == 0 || j == 0)
            L[i][j] = 0;

        else if (X[i - 1] == Y[j - 1])
            L[i][j] = L[i - 1][j - 1] + 1;

        else
            L[i][j] = max(L[i - 1][j], L[i][j - 1]);
        }
    }


    return L[m][n];
}



int main()
{
   string X="bd";
   string Y="abcd";

    int m=X.length();
    int n=Y.length();

    cout << "Length of LCS is "
         << lcs( X, Y, m, n );

    return 0;
}
