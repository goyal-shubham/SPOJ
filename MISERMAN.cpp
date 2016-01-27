#include<iostream>

using namespace std;


int main()
{
    int n , m;
    cin >> n >> m;
    int a[n][m], dp[n][m];
    for(int i =0; i < n; i++)
    {
        for( int j = 0; j < m; j++)
        {
            cin >> a[i][j];
        }
    }

    for( int i = 0; i < m; i++)
    {
        dp[0][i] = a[0][i];
    }
    
    for( int i = 1; i < n; i++)
    {
        for( int  j = 0; j < m; j++)
        {
            if( j == 0)
            {
                dp[i][j] = min( dp[i-1][j] + a[i][j] , dp[i-1][j+1] + a[i][j]);
            }
            else if ( j > 0 && j < m-1)
            {
                dp[i][j] = min( dp[i-1][j] + a[i][j] , min(dp[i-1][j+1] + a[i][j], dp[i-1][j-1] + a[i][j]));
            }
            else
            {
                dp[i][j] = min( dp[i-1][j] + a[i][j] , dp[i-1][j-1] + a[i][j]);
            }
        }
    }

    int min1 = INT_MAX;
    for( int i = 0; i < m; i++)
    {
        min1 = min( min1 , dp[n-1][i]);
    }
    cout << min1 << endl;
}
