

#include<iostream>

#define SIZE 13

using namespace std;

int * boxStacking(int *h, int *w, int *d)
{
    int height[SIZE];
    int largest = 1;
    for( int i = 0; i < SIZE; i++)
    {
        height[i] = h[i];
    }

    for ( int i = 0; i < SIZE; i++)
    {
        largest = h[i];
        for( int j = 0 ; j < i ; j++)
        {
            if( w[i] < w[j] && d[i] < d[j] )
            {
                largest = max( height[j] + h[i] , largest );
            }
        }
        height[i] = largest;
        cout << h[i] << " is " << height[i] << endl ;
    }

    return height;
}

int main()
{
    int h[SIZE] = { 1, 3, 4, 2, 5, 8, 5, 6, 6, 3, 5, 8, 10};
    int w[SIZE] = { 8, 4, 5, 6, 7, 0, 8, 7, 3, 4, 5, 6, 7};
    int d[SIZE] = { 3, 9, 5, 3, 9, 8, 1, 4, 5, 7, 1, 8, 9};
    int * height = boxStacking(h, w, d);
    int largest = 1;
    for( int i = 0; i < SIZE; i++)
    {
        if( height[i] > largest) 
        {
            largest = height[i];
        }
        //cout << height[i] << endl;
    }
    cout << endl << largest << endl;
}
