#include<iostream>

using namespace std;

int rotatingIndex( int * a , int length )
{
    int first = 0;
    int last = length - 1;
    while(first <= last)
    {
        int mid = ( first + last) / 2;
        cout<<mid<<endl;
        if(a[mid] > a[mid+1] )
        {   
            return mid;
        }
        else if( a[mid] < a[last])
        {
            last = mid - 1; // last = mid;
        }
        else
        {
            first = mid + 1;
        }
    }
    
    return 0;
}

int rotatedSearch(int * a , int length , int index , int value)
{
    int first = 0;
    int last = length - 1;
    int mid;
    while(first <= last)
    {
        mid = index;
        if(value == a[mid])
        {
            return mid;
        }
        else if( value >= a[mid + 1] && value <= a[last])
        {
            first = mid + 1;
            index = (first + last) / 2;
        }
        else if( value < a[mid] && value >= a[first])
        {
            last = mid;
            index = ((first + last)/2);
        }
    }
   
    cout<<" not found";
    return -1;
}

int main()
{
    int value;
    int a[9] = {8 , 9 , 0 , 1 , 2, 3, 4, 5, 6};
    int index = rotatingIndex( a , 9);
    cout<<index<<endl;
    cout<<"enter the value to be found : ";
    cin>>value;
    index = rotatedSearch ( a, 9 , index , value);
    cout<<"number found at : "<<index;
}
