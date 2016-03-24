#include<iostream>

using namespace std;

//complexity O(n)
void stringReverse(string input)
{
    cout << "reversed string is "; 
    for( int i = input.size() - 1 ; i >= 0 ; i--)
    {
        cout<<input[i];
    }
    cout << endl;
}

// O(n/2);
// not for line
string stringReverseNew ( string input)
{
    int size = input.size();
    string output = input;
    for( int i = 0; i < size/2 ; i++)
    {
        swap(output[i] , output[size - 1 - i]);
    }

    return output;
}

// recursion
int main()
{
    string input;
    cout << "enter string to be reveresed" << endl;
    cin >> input;
    string output = stringReverseNew(input);
    cout<<" reversed string is : " << output << endl;

}
