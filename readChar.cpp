#include<iostream>
#include<fstream>

using namespace std;

int main()
{
    string fileName;
    cout<<"enter file name : ";
    cin>>fileName;
    fstream dataFile (fileName);

    if(dataFile.is_open())
    {
        cout<<"file is open";
        cout<<"Enter character to count";
        char ch;
        cin>>ch;

    }

}
