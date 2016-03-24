
#include<iostream>

#define n 10

using namespace std;

void printMatrix(int v[n][n])
{
    for( int i = 0; i < n; i++)
    {
        for( int j = 0; j < n; j++)
        {
            cout << v[i][j] << " ";
        }
        cout << endl;
    }
}

int maximizeWin(int *a)
{
    int v[n][n] = { 0 };
    int value;
    for( int diff = 0; diff < n; diff++)
    {
        for( int i = 0, j = diff; j < n; i++, j++)
        {
            if( i == j)
            {
                v[i][j] = a[i];
            }
            else if( j == i + 1)
            {
                v[i][j] = max(a[i] , a[j]);
            }
            else
            {
                v[i][j] = max( a[i] + min(v[i+1][ j-1] , v[i+2][j] ) , a[j] + min( v[i][j-2] , v[i+1][j-1] )) ;
            }
        }
    }

    
    printMatrix(v);
    return v[0][n-1];
}

int main()
{
    int a[n];
    for( int i = 0; i < n; i++)
    {
        a[i] = rand() % 100;
        cout << a[i] << " ";
    }
    cout << endl << endl;
    int v =  maximizeWin(a);

    cout << endl << v ;
}
