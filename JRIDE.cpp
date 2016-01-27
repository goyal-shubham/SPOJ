#include<iostream>

int b,n,a[100005], k;

using namespace std;


void findMove()
{
    cout << "k= " << k << endl;
    int x, y, counter, a1 = 0;
    int max = 0;
    for( int i = 0; i < n - 1; i++)
    {
        counter += a[i];
        if(a[i] >= max && counter != 0)
        {
            max = counter;
            x = a1;
            y = i;
        }

        if( counter < 0)
        {
            counter = 0;
            a1 = i + 1;
        }
    }

    if(max > 0)
    {
        cout << "The nicest part of route" << k << "is between stops" << n - b - 1 << " and " << n - a1 ;
    }
    else
    {
        cout << "Route " << k << "has no nice parts" << endl ;
    }
}

int main()
{
    cin >> b;
    for( k = 1 ; k <= b ; k++)
    {
        cin >> n;
        for( int j = 0; j < n - 1 ; j++)
        {
            cin >> a[j];
        }
        findMove();
    }
}
