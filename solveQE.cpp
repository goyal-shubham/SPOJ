#include<iostream>
#include <cmath> 
using namespace std;

void roots( int n)
{
    double diff;
    double i;
    int r;
    for(i = 1; ;i++)
    {
        r = n - (i*i);
        if(r<0)
        {   
            i--;
            break;
        }
        else if(r==0)
        {
            cout<<"square root of "<<n<<" is "<<i;
            break;
        }
     /*   else (r>0)
        {
            continue;
        }
        */
    }
   
    cout<<" i = " << i << endl; 
    while( abs(i*i - n) > 0.001 )
    {
        diff = n/i;
        cout<<"difference = "<<diff<<endl;
        i = (i + diff) /2;
        cout<<"value of i^2 " << i*i <<endl<<n<<endl;
    }

}

int main()
{
    int a;
    //int b;
    //int c;
    cout<<"Enter the coeffients of X ";
    cin>>a;
    /*cout<<"enter coeffiecient of Y";
    cin>>b;
    cout<<"enter constant number";
    cin>>c;
    */
    roots(a);
}

