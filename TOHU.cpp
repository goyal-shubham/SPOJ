#include<iostream>
#include<iomanip>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--)
    {      
        double n;
        cin >> n;
        double sum = (3.0/4.0) - (1.0/(2.0 *(n+1))) + (1.0/(2.0 *(n+2))) ;
        cout << fixed << setprecision(11);
        cout << sum << endl;
    }
}
