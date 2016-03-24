
#include<iostream>

using namespace std;

bool isSubstring( string s3 , string s1)
{
    int count = 0;
    int size3 = s3.size();
    int size1 = s1.size();
    for( int i = 0; i <= size1 - size3; i++)
    {
        for( int j = 0; j < size3; j++)
        {
            if( s1[i + j] != s3[j])
            {
                break;
            }
            
            count++;
        }

        if( count == size3)
        {

            return true;
        }
    }

    return false;

}

bool checkRotation(string s1 , string s2 )
{
    string s3 = s2 + s2;
    if(isSubstring( s1 , s3))
    {
        return true;
    }
    else
    {
        return false;
    }
}

int main()
{
    string s1 = "waterbottle";
    string s2 = "erbottlewat";
    if( checkRotation(s1 , s2))
    {
        cout << "S2 is rotaion of S1" << endl;
    }
    else
    {
        cout << "not a rotation " <<endl;
    }
}
