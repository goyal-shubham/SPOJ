#include<iostream>
#include<cmath>
#include <stdlib.h>
using namespace std;
int n;

int findMinTime(int cx, int cy, int *x, int *y, int i)
{
    if( i >= n)
    {
        return 0;
    }
    else if( cx == x[i] || cy == y[i])
    {
        return findMinTime(cx, cy,  x, y, i + 1);
    }
    else
    {
        return min( abs(x[i] - cx) + findMinTime(x[i] , cy , x,y,i+1) , abs(y[i] - cy) + findMinTime(cx, y[i] , x, y , i+1));   
    }
}

int main()
{
    cin >> n;
    int x[n], y[n];
    n = 0<<n;
    cout << n;
    for( int i =0; i < n; i++)
    {
        cin >> x[i] >> y[i];
    }
    int cx = 0, cy = 0;
    cout << findMinTime(cx,cy,x,y,0) << endl;
}
