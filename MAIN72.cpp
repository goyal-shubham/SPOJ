#include<iostream>

using namespace std;

int main()
{
    int t,n;
    cin >> t;
    while(t--)
    {
        cin >> n;
        int sum = 0;
        int a[n];
        for( int i = 0; i < n; i++)
        {
            cin >> a[i];
            sum += a[i];
        }
       
        int dp[sum+1] ;
        
        for(int i = 0; i <= sum; i++)
        {
            dp[i] = -1;
        }

        for(int i = 0; i < n; i++)
        {
            for( int j = i; j < n; j++)
            {
                if(dp[a[i]] == -1)
                {
                    
                }
            }
        }
}
