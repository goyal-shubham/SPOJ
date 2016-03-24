#include<iostream>

using namespace std;

string removeSpaces( string input)
{
    int spaceNos = 0;
    for(int i = 0; i < input.size(); i++)
    {
        if( input[i] == ' ')
        {
            spaceNos++;
        }
    }

    int newSize = input.size() + (2 * spaceNos);
    char *output= (char*)malloc(sizeof(char) * newSize);
    int j = 0;
    for(int i = 0; i < input.size() ; i++)
    {
        if( input[i] != ' ')
        {
            output[j++] = input[i];
        }
        else
        {
            output[j++] = '%';
            output[j++] = '2';
            output[j++] = '0';
        }
    }
    
    output[j] = '\0';
    return output;
}

int main()
{
    string input = "shubham goyal , india";
    string output = removeSpaces(input);
    cout<<output<<endl;
}
