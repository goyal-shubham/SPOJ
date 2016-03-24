
#include<iostream>

using namespace std;

int countPara( char *symbols , char *logic, int n)
{
    int t[n][n] , f[n][n];
    for( int i = 0; i < n; i++)
    {
        f[i][i] = (symbols[i] == 'F') ? 1:0;
        t[i][i] = (symbols[i] == 'T') ? 1:0;
    }

    for( int diff = 1; diff < n; diff++)
    {
        for( int i = 0, j = diff; j < n; i++ , j++)
        {
            t[i][j] = 0;
            f[i][j] = 0;
            for( int a = 0; a < diff; a++)
            {
                int k = i + a;
                int totalik = t[i][k] + f[i][k];
                int totalkj = t[k+1][j] + f[k+1][j];

                if( logic[k] == '&')
                {
                    t[i][j] += t[i][k]*t[k+1][j];
                    f[i][j] += (totalkj * totalik) - t[i][k]*t[k+1][j];
                }

                else if(logic[k] == '|')
                {
                    f[i][j] += f[i][k] * f[k+1][j];
                    t[i][j] += (totalik * totalkj) - f[i][k] * f[k+1][j];
                }

                else
                {
                    t[i][j] += f[i][k]*t[k+1][j] + t[i][k]*f[k+1][j];
                    f[i][j] += t[i][k]*t[k+1][j] + f[i][k]*f[k+1][j];
                }
            }
        }
    }

    return t[0][n-1];

}

int main()
{
    char symbols[] = "TTFT";
    char logic[] = "|&^";
    int length = strlen(symbols);
    cout << countPara(symbols , logic , length)
        << endl;
}
