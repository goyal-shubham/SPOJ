
#include<iostream>
#include<vector>
#define range 10
#define n 14

using namespace std;

void bPartition( int * a)
{
    vector<int> sub1;
    vector<int> sub2;
    int s1 = 0;
    int s2 = 0;
    for( int i = 0; i < n; i++)
    {
        if(s1 <= s2)
        {
            sub1.push_back(a[i]);
            s1 = s1 + a[i];
        }
        else
        {
            sub2.push_back(a[i]);
            s2 = s2 + a[i];
        }
    }

    for( vector<int>::iterator it= sub1.begin() ; it != sub1.end() ; it++)
    {
        cout << *it << '\t';
    }

    cout << endl;
    for( vector<int>::iterator it = sub2.begin() ; it != sub2.end() ; it++)
    {
        cout << *it << '\t';
    }

    cout << "sum s1 is " << s1 << "\tSum s2 is " << s2 << endl ;

}

int DPartition( int * a)
{
    int *sum = new int[n];
    int total = 0;
    for( int i = 0; i < n; i++)
    {
        total = total + a[i];
        sum[i] = total;
    }
    
    int leastSum = total;
    int index;
    total = total / 2;
    for( int i = 0 ; i < n ; i++)
    {
        int temp = abs(total - sum[i]);
        if( temp < leastSum)
        {
            leastSum = temp;
            index = i;
        }
    }
    
    return index;
    
}

int main()
{
    int *a = new int[n];
    for ( int i = 0; i < n ; i++)
    {
        a[i] = rand() % range + 1;
        cout << a[i] << '\t';
    }
    cout << endl;
    //bPartition( a );
    cout << " index for partition will be " << DPartition( a ) << endl;
}

