#include<iostream>
#include<limits.h>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n, in, out;
        int maxIn = 0;
        int index;
        cin >> n;
        int a[n][2], flag = 0;
        for( int i = 0; i < n; i++)
        {
            cin >> a[i][0] >> a[i][1] ; 
            if(maxIn < a[i][0])
            {
                maxIn = a[i][0];
                index = i;
            }
        }
        for(int i = 0; i < n; i++)
        {
            if( i != index && a[i][1] >= maxIn)
            {
                flag = -1;
                cout << "-1" << endl;
                break;
            }
        }
        if( flag != -1)
        {
            cout << index + 1 << endl;
        }
    }
}
