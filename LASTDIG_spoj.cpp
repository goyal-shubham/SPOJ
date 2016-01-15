
#include<iostream>

using namespace std;

int findPow( int a, int b)
{
    int lastDig = 1;
    if( b == 0)
    {
        return 1;
    }
    if( b % 2)
    {
        lastDig = (lastDig * a) % 10;
    }
   
    
    int temp = findPow(a , b/2);
        temp *= temp;
        lastDig *= temp;
        return lastDig % 10;    
}

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int a,b;
        cin >> a >> b;
        if( a >= 0 && b >= 0)
        {
            cout << findPow( a%10 , b) << endl;
        }
    }   

}
