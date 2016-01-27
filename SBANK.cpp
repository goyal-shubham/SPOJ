#include<iostream>
#include<map>
#include<string>
#include<cstdio>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        map<string , int> output; 
        map<string , int>::iterator it;
        int n;
        string data;
        for( cin >> n ; n+1; n--)
        {
            getline( cin, data);
            output[data]++; 
        }

        for(it = output.begin(); it != output.end(); it)
        {
            if( ++it != output.end())
            {
                cout << it->first <<" " << it->second << endl; 
        
            }
        }
    }

    
    
}
