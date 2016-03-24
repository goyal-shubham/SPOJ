#include<iostream>
#include<algorithm>
#include<map>
#include<string>
using namespace std;

//O(n)
bool checkStringUnique ( string input )
{
    sort( input.begin() , input.end());
    cout<< input << endl;
    for( int i = 0; i < (input.size()-1); i++)
    {
        if(input[i] == input[i+1])
        {
            cout << "string is not unique";
            return 0;
        }
    }
  
    return 1;
   
}

void checkUniqueness ( string input )
{
    map<char , int> myMap;
    int size = input.size();
    for( int i = 0; i < size; i++)
    {
        if(myMap.has(input[i]))
        {
            return false;
        }
        else
        {
            myMap[input[i]] = 1;
        }
    }
    
    return true;
}


int main()
{
    string input;
    cout << "enter string" << endl;
    cin >> input;
   /* while( checkStringUnique(input))
    {   
        cout << "enter new string" << endl;
        cin >> input;
   } */
        checkUniqueness(input);
   
}
