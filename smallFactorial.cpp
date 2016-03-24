#include<iostream>
int *fact;
using namespace std;


void getFactorial ( int num)
{
    int digits = 0, carry = 0;
    int output[1000] = {1};
    for( int i = 1; i <= num; i++)
    {
        for( int j = 0; j <= digits; j++)
        {
            output[j] = (output[j] * i ) + carry;
            carry = output[j] / 10;
            output[j] = (output[j] % 10);
        }
        while( carry > 0)
        {
            digits++;
            output[digits] = carry % 10 ;
            carry = carry / 10;
        }
    }        
    
    for( int i = digits; i >= 0; i--)
    {
        cout << output[i];
    }
    
    cout << endl;
}

int main()
{
    int t , n;
    cin >> t;


    while( t > 0 && t <= 100)
    {
        cin >> n;
        getFactorial(n);
        t--;
    }
}
