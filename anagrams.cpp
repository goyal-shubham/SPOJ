
#include<iostream>

using namespace std;

#define ASCIIRANGE 128

bool anagrams(string input1 , string input2)
{
    char bucket1[ASCIIRANGE];
    char bucket2[ASCIIRANGE];
    if( input1.size() != input2.size())
    {
        return false;
    }

    else
    {
        for( int i = 0; i < ASCIIRANGE; i++)
        {
            bucket1[i] = 0;
            bucket2[i] = 0;
        }

        int size = input1.size();
        for( int i = 0 ; i < size; i++)
        {
            bucket1[input1[i]]++;
            bucket2[input2[i]]++;
        }
        
        for( int i = 0; i < ASCIIRANGE; i++)
        {
            if(bucket1[i] != bucket2[i])
            {
                return false;
            }
        }
        return true;
    }
}

int main()
{
    string input1 , input2;
    cout << "enter first string" << endl;
    cin >> input1;
    cout << "enter second string " << endl;
    cin >> input2;
    if( anagrams (input1 , input2))
    {
        cout << "strings are anagrams" << endl;
    }

    else
    {
        cout << "strings are not anagrams" << endl;
    }
}
