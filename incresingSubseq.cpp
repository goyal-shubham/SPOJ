
#include<iostream>

#define SIZE 13

using namespace std;

int * LIS(int *a)
{
    int maxi[SIZE];
    int maximum = 1;
    for( int i = 0; i < SIZE; i++)
    {
        maxi[i] = maximum;
    }

    for ( int i = 0; i < SIZE; i++)
    {
        maximum = 1;
        for( int j = 0 ; j < i ; j++)
        {
            if( a[i] > a[j] )
            {
                maximum = max( maxi[j] + 1 , maximum );
            }
        }
        maxi[i] = maximum;
        cout << a[i] << " is " << maxi[i] << endl ;
    }

    return maxi;
}

int main()
{
    int a[SIZE] = { -8, 4, 5, 6, 7, 0,8,-7, 3, 4, 5, 6, 7};
    int * maxi = LIS(a);
    int maximum = 1;
    for( int i = 0; i < SIZE; i++)
    {
        if( maxi[i] > maximum) 
        {
            maximum = maxi[i];
        }
        //cout << maxi[i] << endl;
    }
    cout << endl << maximum << endl;
}
