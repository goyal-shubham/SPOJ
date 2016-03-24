
#include<iostream>
#include<algorithm>

using namespace std;

int * cost;

int maxPrice( int * p , int length)
{
    int output;
    if ( cost[length] != -1)
    {
        return cost[length];
    }
    if ( length == 0)
    {
        output = 0;
    }
    else
    {
        output = -1;
        for( int i = 1; i <= length; i++)
        {
            output = max ( output , p[i] + maxPrice( p , length - i));
        }
    }

    cost[length] = output;
    return output;
}

int main()
{
    int p[] = {0, 1, 5, 8, 9, 10, 17, 17, 20, 24, 30};
    int length;
    do
    {
        cout << "enter the length of the rod between 1- 10: " << endl;
        cin >> length;
        if( length <= 10 && length >= 0)
        {
            cost = (int *)malloc( sizeof(int) * (length + 1));
            for(int i = 0; i <= length; i++)
            {
                cost[i] = -1;
            }   
            cout << "Max price is " << maxPrice( p , length) << endl;
        }   
        
        else
        {
            cout << "Length should be less than 10" << endl;  
        }
    } while ( length > 0 );
}

