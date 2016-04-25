#include <iostream>

using namespace std;


const int MAX_SIZE = 100;

class QueueOverFlowException
{
public:
   QueueOverFlowException()
   {
       cout << "Queue overflow" << endl;
   }
};

class QueueEmptyException
{
public:
   QueueEmptyException()
   {
       cout << "Queue empty" << endl;
   }
};

class Graph
{  
private:
   int data[MAX_SIZE];
   int front;
   int rear;
public:
   Graph()
   {
       front = -1;
       rear = -1;
   }      
 
   void Enqueue(int element)
   {
       // Don't allow the queue to grow more
       // than MAX_SIZE - 1
       if ( Size() == MAX_SIZE - 1 )                 
           throw new QueueOverFlowException();

       data[rear] = element;

       // MOD is used so that rear indicator
       // can wrap around
       rear = ++rear % MAX_SIZE;
   }      

   int Dequeue()
   {          
       if ( isEmpty() )
           throw new QueueEmptyException();

       int ret = data[front];

       // MOD is used so that front indicator
       // can wrap around
       front = ++front % MAX_SIZE;

       return ret;   
   }      
 
   int Front()
   {          
       if ( isEmpty() )
           throw new QueueEmptyException();

       return data[front];
   }
 
   int Size()
   {
       return abs(rear - front);
   }
 
   bool isEmpty()
   {
       return ( front == rear ) ? true : false;
   }

   void topsort( )
    {
    Queue<Vertex> q;
    int counter = 0;
    q.makeEmpty( );
    for each Vertex v
        if( v.indegree == 0 )
            q.enqueue( v );
    while( !q.isEmpty( ) )
    {
        Vertex v = q.dequeue( );
        v.topNum = ++counter;  // Assign next number
        for each Vertex w adjacent to v
            if( --w.indegree == 0 )
                q.enqueue( w );
    }
    if( counter != NUM_VERTICES )
        throw CycleFoundException{ };
    }
};

