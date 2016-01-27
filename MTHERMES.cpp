#include<iostream>

using namespace std;

class xy
{
    int x;
    int y;

    public:
    void setData(int a, int b)
    {
        this->x = a;
        this->y = b;
    }

    int getX()
    {
        return this->x;
    }

    int getY()
    {
        return this->y;
    }
};

class xyplane
{
    int n;
    xy* point;
    
    public:
    xyplane(int data)
    {
        n = data;
        point = new xy[n];
    }
    
    void setPoints(int x, int y, int i)
    {
        this->point[i].setData(x,y);
    }

    int findMinTime(xy p1, xyplane p2, int i)
    {
        int min1 = INT_MAX;
        cout << "I = " << i << "start "<<p1.getX() << " " << p1.getY() << " " << p2.point[i].getX() << " " << p2.point[i].getY() << endl;
        if( i >= n)
        {
            return min1;
        }
        if( p1.getX() == p2.point[i].getX() || p1.getY() == p2.point[i].getY())
        {
            min1 = findMinTime(p1, p2, i+1);
        }
        else
        { 
            int temp1 = p2.point[i].getX();
            int temp2 = p2.point[i].getY();
            xy p3;
            
            //cout << "I=" << i << "end " << temp1 << " " <<p1.getY() << " " << p1.getX() << " " << temp2 << endl;
            p3.setData(temp1, p1.getY());
            p1.setData(p1.getX(),temp2);
            min1 =  min( (temp1 - p1.getX() + findMinTime(p3,p2,i+1)) , (temp2 - p1.getY() + findMinTime(p1,p2,i+1)));
        }
        cout <<" minimum  = " << min1;
        return min1;
    }   


};


int main()
{
    int n, a, b;
    cin >> n;
    xyplane newPoint(n);
    for(int i =0; i < n; i++)
    {
        cin >> a >> b ;
        newPoint.setPoints(a, b , i);
    }
    xy p1;
    p1.setData(0,0);
    cout << newPoint.findMinTime(p1, newPoint, 0);    
}
