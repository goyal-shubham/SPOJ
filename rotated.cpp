#include<iostream>

using namespace std;

void searchValue( int * a, int length , int index, int value)
{
    if( value > a[index] || value < a[index+1])
    {
        cout<<"no. not found";
    }
    else if( value < a[0])
    {
        for( int i = index + 1; i < length ; i++)
        {
            if( a[i] == value)
            {
                cout<<"value found at index : "<< i <<endl;
                return;
            }
        }

        cout<<"no. not found"<<endl;
    }

    else
    {
        for( int i = 0; i <= index; i++)
        {
            if(a[i] == value)
            {
                cout<<"value found at : " << i <<endl;
                return;
            }
        }

        cout<<"No. not found"<<endl;
    }

}

void findRotate ( int * a, int length)
{
    int i;
    int v;
    for (i = 0 ; i < length ; i++)
    {
        if(a[i] > a[i+1])
        {
            break;
        }
    }
    cout<<"rotating index is : "<<i<<endl
        <<"enter the no. to find : " ;
    cin>>v;
    searchValue( a, length , i , v );
}

int rotatedArray ( int * a, int length , int value)
{
    int lowest = 0;
    int highest = length - 1;
    int mid = ((length-1)/2) ;
    
    while(lowest<=highest)
    {
        if( value == a[mid])
        {
            cout<< " value found at index : " <<mid<<endl;
            return found;
        }
        else
        {
            if( a[mid] < a[mid+1])
            {
                lowest = mid + 1;
                highest = mid;
                if( value > a[lowest] && value < a[length -1])
            }
        }
    }
}

int main()
{
    int a[6] = { 4, 5, 6, 7, 8, 1 };
    findRotate(a,6);
    int b[6] = { 8, 1, 2, 3, 4, 5 };
    findRotate(b,6);
    int c[7] = { 4, 5, 6, 7, 1, 2, 3};
    findRotate(c,7);
    if(rotatedArray( a , 0 , 5 , 5))
    {
        cout<<"value found";
    }
    if(rotatedArray( b , 0 , 5 , 6))
    {
        cout<<"value found";
    }if(rotatedArray( c , 0 , 6 , 5))
    {
        cout<<"value found";
    }
}
