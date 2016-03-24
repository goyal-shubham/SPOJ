#include<iostream>

using namespace std;

int nPower( int num, int n)
{
    int temp = 1 ;
    for( int i = 1; i <= n; i++ )
    {
        temp = num * temp;
    }

    return temp;
}

int nPowerR ( int num , int n)
{
    if( n == 0)
        return 1;
    else
        return nPowerR(num , n-1) * num;
}

int main()
{
    int n;
    int num;
    int result;
    cout << "enter the number : "<<endl;
    cin>>num;
    cout << "enter value of n to find nth power : "<<endl;
    cin>>n;
    result = nPower( num , n);
    cout<<result<<endl;
    result = nPowerR ( num ,n);
    cout<<result<<endl;
}
