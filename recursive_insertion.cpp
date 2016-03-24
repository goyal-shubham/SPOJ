#include<iostream>

using namespace std;

void insertion (int * a , int n)
{
    int key = a[n];
    if(n < 1)
    {
        return;
    }
   
    insertion ( a , n-1);
    while ( a[n] < a[n-1] && n > 0)
    {
        a[n] = a[n-1];
        a[n-1] = key;
        n--;
    }
    
}

int main()
{
    int a[8] = {8,7,6,5,4,3,2,1} ;
    insertion( a , 7);
    for(int i = 0; i < 8; i++)
    {
        cout<<a[i]<< " ";
    }
}
