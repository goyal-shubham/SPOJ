
#include<iostream>

using namespace std;

int feynmanFunc( int size )
{
    int temp = 0;
    for( int i = size; i > 0; i--)
    {
        temp = (i * i) + temp;
    }
    return temp;
}

int main()
{
    int input;
    while(1)
    {
        cin>>input;
        if( input != 0)
        {
            int result = feynmanFunc(input);
            cout<<result<<endl;
        }
        else
        {
            break;
        }
    }

}
