
#include<iostream>

using namespace std;

#define SIZE 9 

void printMatrix(int **a)
{
    for( int i = 0; i < SIZE; i++)
    {
        for( int j = 0; j < SIZE; j++)
        {
            cout<<a[i][j]<< " ";
        }
        cout<<endl;
    }
}


void rotateMatrix( int **a )
{
    int *temp;
    temp = (int *) malloc( sizeof(int) * SIZE);
        
    for( int i = 0; i < (SIZE / 2); i++)
    {
        int last = SIZE - i - 1;
        for(int j = i; j < last; j++)
        {
            int temp = a[i][j];
            int diff = j - i;
            a[i][j] = a[last - diff][i];
            
            a[last - diff][i] = a[last][last - diff];

            a[last][last - diff] = a[j][last];

            a[j][last] = temp;

        }
    }
}


int main()
{
    int **a;
    a = (int**)malloc(sizeof(sizeof(int*))*SIZE);
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
    printMatrix(a);
    rotateMatrix (a);
    cout << endl << endl;
    cout << endl << endl;
    printMatrix(a);
}
