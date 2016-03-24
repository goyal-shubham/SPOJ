#include<iostream>

using namespace std;


//complexity : O(n)
void redixSort( int * a, int length )
{
    int i;
    int divider = 1; // for checking current decimal divider
    int maxVal = 0;
    for( i = 0; i < length ; i++)
    {
        if(a[i] > maxVal)
        {
            maxVal = a[i];
        }
    }
    
    while( (maxVal/divider) > 0 )
    {
        int output[length];
        int temp[10] = {0};

        //for checking how may no. in the divider divider is equal to index
        for( i = 0 ; i < length ; i++)
        {
            temp[(a[i]/divider)%10]++;
        }

        for( i = 1; i < 10; i++)
        {
            temp[i] += temp[i - 1];
        }

        for( i = length - 1; i >= 0; i--)
        {
            output[temp[(a[i]/divider)%10]-1] = a[i];
            temp[(a[i]/divider)%10]--;
        }

        for( i = 0; i < length; i++)
        {
            a[i] = output[i];
        }

        divider *= 10;
    }
}

int main()
{
    int data[8] = { 329 , 457, 657, 839, 436, 720, 355 , 20};
    redixSort(data , 8);
    for( int i = 0 ; i < 8 ; i++)
    {
        cout<<data[i]<<endl;
    }
}
