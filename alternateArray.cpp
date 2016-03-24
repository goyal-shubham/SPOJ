#include<iostream>

using namespace std;

int binarySearch( int * a , int v , int first , int last)
{
    int mid;
    if (first <= last)
    {
        mid = (first  + last) / 2;
        if(mid % 2 != first % 2)
        {
            mid -= 1;
        }

        if( v == a[mid])
        {
            return mid;
        }
        else if(v < a[mid])
        {
           return binarySearch( a , v , first , mid-2);
        }
        else
        {
           return binarySearch ( a , v , mid+2 , last);
        }
    }
    else
    {
        return -1;
    }
}

int search ( int * a , int value , int first1 , int first2 , int last1 , int last2)
{
    int mid1 = (first1 + last1) / 2;
    int mid2 = (first2 + last2) / 2;
    cout<<"mid1 is : " <<mid1<<endl;
    cout<<"mid2 is : "<<mid2<<endl;
    if( first1 <= last1 || first2 <= last2)
    {
        if ( mid1 % 2 != 0)
        {
            mid1 = mid1 + 1;
        }
        if( mid2 % 2 == 0)
        {
            mid2 = mid2 + 1;
        }
       
        if ( a[mid1] == value)
        {
            return mid1;
        }
        else if( a[mid2] == value)
        {
            return mid2;
        }
        
        if( a[mid1] < value)
        {
            first1 = mid1 + 2;
        }
        else if( a[mid1] > value`)
        {
            last1 = mid1 - 2;
        }
        
        if( a[mid2] < value)
        {
            first2 = mid2 + 2;
        }
        else if(a[mid2] > value )
        {
            last2 = mid2 - 2;
        }
    
        return search(a, value , first1, first2, last1, last2);
    }
    else
    {
        cout<<"not found";
        return -1;
    }
}

int main()
{
    int value;
    int a[13] = {0,-12,8,-11,12,-10,18,-9,21,-8,25,0,29};    
    cout<<"enter value to find : ";
    cin>>value;
    int index = binarySearch ( a , value , 0, 12);
    cout<<index<<endl;
    index = binarySearch ( a , value , 1, 11);
    cout<<index<<endl;
}
