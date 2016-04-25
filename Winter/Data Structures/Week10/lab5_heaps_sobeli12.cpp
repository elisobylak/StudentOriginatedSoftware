#include <vector>

#include <exception>

using namespace std;


struct HeapException : public exception {
        const char *what() const throw () {
                return "Empty Heap";
        }
};

template <typename Comparable>
class BinaryHeap
{
  public:
    explicit BinaryHeap( int capacity = 100 );
    explicit BinaryHeap( const vector<Comparable> & items );

    bool isEmpty( ) const;
    const Comparable & findMin( ) const;

    void insert( const Comparable & x );
    void deleteMin( );

  private:
    int                currentSize;  // Number of elements in heap
    vector<Comparable> array;        // The heap array


    void deleteMin( )
    {
        if( isEmpty( ) )
            throw HeapException( );
    
        array[ 1 ] = array[ currentSize-- ];
        percolateDown( 1 );
    }

    void insert( const Comparable & x)
    {
    	if( currentSize == array.size()-1)
    		array.resize(array.size()*2);

    	//Percolate up
    	int hole = ++currentSize;
    	Comparable copy = x;

    	array[0] = moce(copy);
    	for( x; x< array[hole / 2]; hole/=2 )
    		array[hole] = move(array{hole/2]);
    	array[hole] = move(array[0]);
    }

};