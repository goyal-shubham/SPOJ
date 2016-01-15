
#include<iostream>
#include<stack>

typedef long long int lli;
using namespace std;

int findMaxRectange(lli *a, int n)
{
    stack<int> s;
    lli max_area = 0;
    lli tp;
    lli area_with_top;
    int i = 0;
    while(i < n)
    {
        if(s.empty() || a[s.top()] <= a[i])
        {
            s.push(i++);
        }
        else
        {
            tp = s.top();
            s.pop();
            
            area_with_top = a[tp] * (s.empty() ? i : i - s.top() - 1 );
            cout << area_with_top;
            if( max_area < area_with_top)
            {
                max_area = area_with_top;
            }
        }
    }

    while(s.empty() == 0)
    {

        tp = s.top();
        s.pop();

        area_with_top = a[tp] * (s.empty() ? i : i - s.top() - 1 );
        
        if( max_area < area_with_top)
        {
            max_area = area_with_top;
        }
    }

    cout <<  max_area << endl;
    return max_area;
}



int main()
{
    int n;
    cin >> n;
    while(n != 0)
    {
        lli a[n];
        for(int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        lli output = findMaxRectange(a,n);
        cin >> n;
    }
}
