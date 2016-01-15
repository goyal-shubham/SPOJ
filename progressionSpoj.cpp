#include<iostream>
#define GP 1
#define AP 0

using namespace std;

int checkProgression( int d1, int d2, int d3)
{
    if( (d2 - d1) == (d3 - d2))
    {   
        return AP;
    }
    else 
    {
        return GP;
    }
}

int main()
{
    int data1;
    int data2;
    int data3;
    while(1)
    {
        cin>>data1>>data2>>data3;
        if( data1 != data3)
        {
            int i = checkProgression(data1 , data2, data3);
            if( i == 1)
            {
                int ratio = data2 / data1;
                cout<<"GP "<<data3 * ratio<<endl;
            }
            else
            {
                int differ = data2 - data1;
                cout<<"AP "<<data3 + differ<<endl;
            }
        }
        else
        {
            break;
        }
    }
}
