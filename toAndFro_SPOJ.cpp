#include<iostream>

using namespace std;

class toAndFro
{
    int column;
    int size;
    char * a;

    public:

    toAndFro( int column , string input)
    {
        this->column = column;
        size = input.size();
        a = (char *) malloc ( sizeof(char) * input.size());
        for( int i = 0; i < input.size(); i++)
        {
            a[i] = input[i];
        }
        a[input.size()] = '\0';
    }

    void solveMessage ()
    {
        int row = size / column;
        for( int i = 0; i < column; i++)
        {
            for( int j = 0; j < row; j++)
            {
                if( j % 2 )
                {
                    
                    cout << a[(j+1) * column -  ( i + 1 )];
                }
                else
                {
                    cout << a[(j * column) + i];
                }
            }

        }

        cout << endl;
    }
};

int main()
{
    int column;
    cin >> column;
    while( column > 0)
    {
        string input;
        cin >> input;
        toAndFro myObject ( column, input);
        myObject.solveMessage();
        cin >> column;
    }
}
