
#include<iostream>

using namespace std;

#define SIZE 4

void printMatrix(int **a, int m, int n)
{
    for( int i = 0; i < m; i++)
    {
        for( int j = 0; j < n; j++)
        {
                cout<<a[i][j]<< " ";
        }
        cout<<endl;
    }
}

void setZeroes (int **a)
{
    int * row;
    row = (int *) malloc( sizeof(int) * SIZE);

    int * column;
    column = (int *) malloc (sizeof(int) * SIZE);

    for( int i = 0; i < SIZE; i++)
    {
        row[i] = 0;
        column[i] = 0;
    }

    for( int i = 0; i < SIZE; i++)
    {
        for( int j = 0; j < SIZE; j++)
        {
            if( a[i][j] == 0)
            {
                row[i] = 1;
                column[j] = 1;
            }
        }
    }

    for( int i = 0; i < SIZE; i++)
    {
        if( row[i] == 1 )
        {
            for( int j = 0 ; j < SIZE; j++)
            {
                a[i][j] = 0;
            }
        }
        
        if ( column[i] == 1 )
        {
            for( int j = 0 ; j < SIZE; j++)
            {
                a[j][i] = 0;
            }
        }
    }
    cout<<endl<<endl;
}

int main()
{
    int **a;
    a= (int**)malloc(sizeof(sizeof(int*))*SIZE);
    for(int i=0 ;i <SIZE; i++)
    {
        a[i] = (int*) malloc(sizeof(int) * SIZE);
    }

    for( int i =0 ; i < SIZE ; i++)
    {
        for( int j=0 ; j< SIZE ; j++)
        {
            a[i][j] = rand()%(SIZE + 1);
        }
    }

    printMatrix(a, SIZE, SIZE);
    setZeroes( a );
    printMatrix( a , SIZE , SIZE);
}
