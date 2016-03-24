#include<iostream>
#include<cmath>
using namespace std;
int primeDP[3500], length;

bool isPrime( int num)
{
        int counter = 3;
        int last = sqrt(num);
        while(counter < last)
        {
            if( num % counter == 0)
            {
                return 0;
            }
               
            counter = counter + 2;
        }

        return 1;
           
}

bool checkNum( unsigned int num)
{
    int last = sqrt(num);    
    for( int i = 0; i < length && last >= primeDP[i]; i++)
        {
            if(num % primeDP[i] == 0)
            {
                return 0;
            }
        }
        return 1;
}

void primeGenerator ( unsigned int m , unsigned int n)
{
    while( m <= n )
    {
        if( m < 2)
        {
            m++;
        }
        if(checkNum(m))
        {
            cout << m << endl;
        }
        m++;
    }
}

void findAllPrime()
{
    for ( int i = 3; i < 32000; i+=2)
    {
        if(isPrime(i))
        {
            primeDP[length++] = i;
        }
    }
}

int main()
{
    int t;
    cin>>t;
    length = 0;
    primeDP[length++] = 2;
    findAllPrime();
    while ( t <= 10 && t > 0 )
    {
        unsigned int m , n ;
        cin>>m>>n;
        if(n - m <= 100000)
        {
            primeGenerator ( m , n );
        }
        t--;
    }

}
