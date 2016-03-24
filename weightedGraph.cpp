
#include<iostream>

using namespace std;

class neighbor
{
    public:

    int vertex;
    int weight;
    neighbor* next;
    
    neighbor()
    {
        next = NULL;
    }
};

class wgraph
{
    public:

    int vertex;
    neighbor **edge;

    wgraph(int data)
    {
        vertex = data;
        edge = new neighbor*[vertex];
        for(int i = 0 ; i< vertex; i++)
        {
            edge[i] = NULL;
        }
    }

    
    void insertEdgeUndirected(int u, int v, int w)
    {
        insertEdgeDirected(u,v,w);
        insertEdgeDirected(v,u,w);
    }

    void insertEdgeDirected(int u , int v, int w)
    {
        neighbor * temp = edge[u];
        neighbor * temp2 = new neighbor();
        if(edge[u] == NULL)
        {
            edge[u] = temp2;
            temp2->vertex = v;
            temp2->weight = w;
        }
        else
        {
            while(temp->next!=NULL)
            {
                temp = temp->next;
            }
            temp->next = temp2;
            temp2->vertex = v;
            temp2->weight = w;
        }
        
    }

    void getNeighbor()
    {
        neighbor * temp;
        for ( int i = 0; i < vertex; i++)
        {
            temp = edge[i];
            cout << i << " -> ";
            while( temp != NULL)
            {
                cout << temp->vertex << " (" << temp->weight << ") ";
                temp = temp->next;
            }
            cout << endl;
        }
        cout << endl;
    }
};

void MSTprim(wgraph graph1, int s)
{
    int vertex = 9;
    wgraph graph2(vertex);
    bool visited[9] = { false };
    visited[s] = 1;
    for(int i = 0; i < vertex; i++)
    {
        int minV , minW = 999;
        int minV1;
        int counter = 0;
        bool found = false;
        neighbor * temp;
        for( int j = 0; j < vertex; j++)
        {
            if( visited[j] == true)
            {
                temp = graph1.edge[j];
                while(temp != NULL)
                {
                    if( visited[temp->vertex] == false)
                    {
                        counter = (temp->weight <= minW) ? 1 : 0;
                        if( counter == 1)
                        {
                            found = true;
                            minW = temp->weight;
                            minV = temp->vertex;
                            minV1 = j;
                        }
                    }
                    temp = temp->next;
                }       
            }
        }

        if(found)
        {
            visited[minV] = true;
            graph2.insertEdgeDirected(minV1,minV,minW);
        }
    }

    graph2.getNeighbor();
}


int main()
{
    wgraph graph1(9);
    graph1.insertEdgeDirected(0,1,4);
    graph1.insertEdgeDirected(0,7,8);
    graph1.insertEdgeDirected(1,7,11);
    graph1.insertEdgeDirected(1,2,8);
    graph1.insertEdgeDirected(2,3,7);

    graph1.insertEdgeDirected(2,5,4);
    graph1.insertEdgeDirected(2,8,2);
    graph1.insertEdgeDirected(3,4,9);
    graph1.insertEdgeDirected(3,5,14);
    graph1.insertEdgeDirected(4,5,10);
    graph1.insertEdgeDirected(5,6,2);
    graph1.insertEdgeDirected(6,7,1);
    graph1.insertEdgeDirected(7,8,7);
    graph1.insertEdgeDirected(6,8,6);
    graph1.getNeighbor();
    MSTprim(graph1, 0);
    graph1.getNeighbor();
}
