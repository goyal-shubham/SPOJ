
#include<iostream>

using namespace std;



int main()
{
    int n , k;
    cin >> n >> k;
    int a[k][k];
    for(int i = 0; i < k; i++)
    {
        for(int j = 0; j < k; j++)
        {
            a[i][j] = 0;
        }
    }
    for(int i = 0; i < n; i++)
    {
        int s,j,l;
        cin >> s >> j >> l;
        a[s-1][j-1] = l;
        a[j-1][s-1] = l;
    }
    int g[k], r[k], sum[k];
    for(int i = 0; i < k; i++)
    {
        cin >> g[i] >> r[i];
        sum[i] = g[i] + r[i];
    }
    
    for(int i = 0; i < k; i++)
    {
        for(int j = 0; j < k; j++)
        {
            cout << a[i][j] << " ";
        }
        cout << endl;

    }cout << "input is done " << endl;
    int output[k][k];
    output[0][0] = 0;
    int currentTime = 0;
    for(int i = 0; i < k; i++)
    {
        currentTime = a[0][i];
        for(int j = 0; j < k; j++)
        {
            cout << i << " " << j << "- " << a[i][j] << endl;
            cout << " current time" << currentTime << endl;;
            output[i][j] = 0;
            if(a[i][j] > 0)
            {
                int wait = 0;
                int temp = (currentTime + a[i][j]);
                if( (temp % sum[j]) < g[j])
                {
                    currentTime = temp;
                }
                else
                {
                    wait = sum[j] - temp;
                    currentTime = temp + wait;
                }     
                output[i][j] = currentTime;
            }
            else
            {
                output[i][j] = 0;
            }
        }
    }
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < n; j++)
        {
            cout << output[i][j] << " ";
        }
        cout << endl;

    }
}
