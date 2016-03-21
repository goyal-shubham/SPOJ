#include<iostream>
#include<vector>
#include<list>
#include<algorithm>
using namespace std;

vector<list <int > > :: iterator v_it;
list <int> :: iterator l_it;
vector < list<int> > sets;
vector<list < int > > :: iterator p_it;
int n , t , a , b;
unsigned long max1 = 1, min1;
int found = 0;
int sum = 0;

int findNext(int a)
{
    vector<list< int > >:: iterator it = p_it;
    //cout << " while started a " << endl;
    while(++it != sets.end() )
    {
        //cout << " while started b " << endl;
        l_it = find(it->begin() , it->end() , a);
        if( l_it != it->end())
        {
            
            //cout << a << "found " << endl;
            while(!it->empty())
            {
                p_it->push_back(it->back());
                it->pop_back();
            }
            return 0;
        }
    }
    //cout << "while endedd " << endl;
    return 1;
}


int findAB( int a, int b)
{
    for(v_it = sets.begin(); v_it != sets.end(); v_it++)
    {
        l_it = find(v_it->begin() , v_it->end() , a);
        if( l_it == v_it->end())
        {
            l_it = find(v_it->begin() , v_it->end() , b);
            if(l_it != v_it->end())
            {
                
      //          cout << b << "found " << endl;
                p_it = v_it;
                if(findNext(a))
                {
                    v_it->push_back(a);
                }
                return 1;
            }
        }
        else
        {
            
        //    cout << a << "found " << endl;
            l_it = find(v_it->begin() , v_it->end() , b);
            if(l_it == v_it->end())
            {
                
                p_it = v_it;
          //      cout << b << "not found" << endl;
                if( findNext(b))
                {
                    v_it->push_back(b);
                }
            }
           // cout << "done " << endl;
            return 1;
        }
    }
    return 0;
}

void getMin()
{
    sum = 0; min1 = n, max1 = 1;
    for( v_it = sets.begin() ; v_it != sets.end(); v_it++)
    {
        for(l_it = v_it->begin(); l_it != v_it->end(); l_it++)
        {
          //  cout << *l_it ;
        }
        sum += v_it->size();
        if( v_it->size() > 0)
        {
            min1 = min( min1 , v_it->size());
        }
        
        max1 = max( max1, v_it->size());
        //cout << endl;
        
    }
    
    cout << "size" << v_it->size() << "sum" << sum << " max " << max1 << " min1 " << min1 << endl;
    if( max1 == sum)
    {
        cout << 0 << endl;
    }
    else if(sum < n)
    {
        cout << max1-1 << endl;
    }
    else
    {
        cout << max1 - min1 << endl;
    }
 
}


int main()
{
    cin >> n >> t;
    min1 = n;
    if( t > 0)
    {
        cin >> a >> b;
        list < int> a1;
        a1.push_back(a);
        a1.push_back(b);
        sets.push_back(a1);
        t--;
        if(a==b || n <= 2)
        {
            cout << 0 << endl;
        }
        else
        {
            cout << 1 << endl;
    
        }
    }
    for( int i = 0; i < t; i++)
    {
        cin >> a >> b;
        found = findAB(a,b);
        //cout << a << " " << b << " " << found << endl;
        if( found != 1)
        {
            list<int> ab1;
            ab1.push_back(a);
            ab1.push_back(b);
            sets.push_back(ab1);
        }
        getMin();
    }
   
}
