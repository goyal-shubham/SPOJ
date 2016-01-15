
#include<iostream>

using namespace std;

int findSolution( int * a, int n, int total)
{
    int output = 0;
    int average = total / n;
    for( int i = 0; i < n; i++)
    {
        if( a[i] > average)
        {
            output = output + a[i] - average;
        }
    }
    return output;
}

int main()
{
    int n;
    cin>>n;
    while( n > 0)
    {
        int a[n];
        int total = 0;
        for(int i = 0; i < n; i++)
        {
            cin >> a[i];
            total = total + a[i];
        }
        if( total % n != 0)
        {
            cout << "-1" << endl;
        }
        else
        {
            cout << findSolution(a , n , total) << endl;
        }
        cin >> n;
    }
}
