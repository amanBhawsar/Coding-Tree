int countComponents (GRAPH* g)
{
    int count=0;
    int arr[100000]={0};
    for(int v=0;v < g->V;v++){
        struct AdjListNode* aman = g->array[v].head;
        int k=0;
        while(aman){
            if(arr[aman->dest]==1 && k==0){
                k=1;
            }
            arr[aman->dest]=1;
            aman=aman->next;
        }
        if(arr[v]==0 && k!=1){
            count++;
            arr[v]=1;
        }
    }
    return count;
}
/*
Write a function int countComponents (GRAPH* g)countComponents (GRAPH* g) that returns
the count of the connected components in the given graph.
A graph with three connected components is given below..
// A structure to represent an adjacency list node
struct AdjListNode
{
int dest;
struct AdjListNode* next;
};
// A structure to represent an adjacency list
struct AdjList
{
struct AdjListNode *head;
};
// A structure to represent a graph. A graph is an array of adjacency lists. Size of array will be
V (number of vertices in graph)
struct Graph
{
int V;
struct AdjList* array;
};
typedef struct Graph GRAPH;
Input : Number of Nodes(V) Number of edges(E)
ordered pair of E edges ( start and end vertex )
*/
