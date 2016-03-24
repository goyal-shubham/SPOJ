#include<iostream>

using namespace std;

int main()

{
    int a;
    int b;
    int c;
    int d;
    int e;
    int f;
    cout<< " Enter value of a, b and c in equation ax+by+c=0 ";
    cin>>a>>b>>c;
    cout<<" Enter values of d,e and f in equation dx+ey+f=0 ";
    cin>>d>>e>>f;

    //make coeffiecient of x common
    
    int A,B,C;
    A=a*d;
    B=b*d;
    C=c*d;

    int D,E,F;
    D=a*d;
    E=e*a;
    F=f*a;
    double r1,r2;
    r1= -(C-F)/ double(B-E);
    r2= (-(b*r1)-c)/ double(a);
    cout<<"X is "<<r2<<endl;
    cout<<" Y is  "<<r1<<endl;
}

