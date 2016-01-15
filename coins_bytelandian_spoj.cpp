
#include<iostream>
#include<cmath>
#include<map>

using namespace std;

map<int , long int> cost;

long int exchangeCoin(int n)
{
    if( n == 0)
    {
        return 0;
    }
    if( cost[n] > 0)
    {
        return cost[n];
    }
    long int output = n;
    output = max ( output , exchangeCoin(n/2) + exchangeCoin(n/3) + exchangeCoin(n/4));
    cost[n] = output;
    return output;
}

int main()
{
    int t = 2;
    while(t--)
    {
        int n;
        cin >> n;
        cost.clear();
        cout << exchangeCoin(n) << endl << endl;
    }
}
