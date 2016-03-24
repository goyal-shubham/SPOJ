
#include<iostream>

#define SIZE 10

using namespace std;

int findMid(int * a, int first, int last)
{
    int pivot = a[last];
    int i = first - 1;
    for( int j = first; j < last; j++)
    {
        if(a[j] <= pivot)
        {
            i++;
            swap(a[i] , a[j]);
        }
    }
    swap( a[i+1] , a[last]);
    return i+1;
}

int Ith_largest(int *a, int first , int last, int i)
{
    if( first <= last)
    {
        int mid = findMid( a , first , last);
        if( mid < i)
        {
            return Ith_largest(a , mid + 1, last, i);
        }
        else if( mid > i)
        {
            return Ith_largest( a , first , mid -1 , i);
        }
        else
        {
            return a[mid];
        }
    }
    else
    {
        return 0;
    }
}

int main()
{
    int a[SIZE];
    for( int i = 0; i < SIZE; i++)
    {
        a[i] = rand() % 34;
        cout << a[i] << endl;
    }
    int i;
    cout << "Enter the value of i : " ;
    cin >> i;
    if( i <= SIZE)
    {
        cout << Ith_largest(a , 0, SIZE - 1, i - 1);

    }
}

