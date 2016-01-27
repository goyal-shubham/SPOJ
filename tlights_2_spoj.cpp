#include<iostream>
#include<limits>

using namespace std;

class node
{
    public : 
        int key;
        int edge;
        node* neighbor;
        node(int e, int l)
        {
            this->edge = e;
            this->key = l;
            neighbor = NULL;
        }
};


class vertex
{
    public :
        int red;
        int green;
        int sum;
        node* next;
        vertex()
        {
            red = 0;
            green = 0;
            sum = 0;
            next = NULL;
        }
};

class graph
{
    public :
        int no_vertex;
        vertex* ver;
        graph(int data)
        {
            no_vertex = data;
            ver = new vertex[no_vertex];
        }

        void addEdge(int start, int end, int length)
        {
            node * temp = ver[start].next;
            node * n = new node(end , length);
            if(temp == NULL)
            {
                ver[start].next = n;
            }
            else
            {
                while(temp->neighbor != NULL)
                {
                    temp = temp->neighbor;
                }
                temp->neighbor = n;
            }
        }

        void addTiming(int v, int g , int r)
        {
            ver[v].red = r;
            ver[v].green = g;
            ver[v].sum = r + g;
        }

        int timeToNeighbor(int start, int end, int length)
        {   
            if(ver[end].sum == 0)
            {
                return length;
            }
            int temp = length % ver[end].sum ;
            if( temp < ver[end].green)
            {
                return length;
            }
            else
            {
                int l = temp - ver[end].sum;
                if( l < 0)
                {
                    l *= -1;
                }
                return l + length; 
            }
        }

        int findMin(int start, int end, int time)
        {
            if(start == end)
            {
                return time;
            }
            
            int min = INT_MAX;
            int a , b;
            node * temp = ver[start].next;
            
            while(temp != NULL)
            {
                int new1 = temp->edge;
                if( new1 > start)
                {
                    a = timeToNeighbor(start, new1, time + temp->key);
                    b = findMin(new1, end, a);
                    if( b < min )
                    {
                        min = b;
                    }

                }
                else
                {
                
                }
                temp = temp->neighbor;
            }
            return min;
        }

        void printGraph()
        {
            node * temp;
            for(int i = 0; i < no_vertex; i++)
            {
                node * temp = ver[i].next;
                while(temp != NULL)
                {
                    cout << "(" << temp->edge << "," << temp->key << ") ";
                    temp = temp->neighbor;
                }
                cout << endl;
            }

        }
};

int main()
{
    int n , k;
    cin >> n >> k;
    graph g(k);
    int a, b,c;
    for( int i = 0; i < n; i++)
    {
        cin >> a >> b >> c;
        g.addEdge(a-1,b-1,c);
        g.addEdge(b-1,a-1,c);
    }

    for( int i = 0; i < k; i++)
    {
        cin >> a >> b;
        g.addTiming(i, a, b);
    }

    cout << g.findMin(0,k-1,0) << endl;
}
