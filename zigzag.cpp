
#include<iostream>

#define SIZE 10

using namespace std;

int zigzag(int * a)
{
    int m[SIZE];
    
    m[0] = 1;
    int best = 1;
    if(SIZE == 1)
    {
        return 1;
    }
    else if( SIZE == 2)
    {
        return 2;
    }
    
    else
    {
        m[1] = 2;
        best = 2;
        for(int i = 2; i < SIZE - i; i++)
        {
            if( a[i] > a[i-1] && a[i] > a[i+1])
            {
                best = max(best , m[i-1] + 1);
            }
        }

        return best;
    }
}

int main()
{
    int a[SIZE];
    for(int i = 0; i < SIZE; i++)
    {
        a[i] = rand() % 100;
        cout << a[i] << " ";
    }
    
    cout << endl << "Answer is : " << zigzag(a);
}
