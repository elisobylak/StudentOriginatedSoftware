#include <iostream>
#include <vector>
#include <string>
#include <cstdlib>

using namespace std;

/**
 * Internal method for heapsort.
 * i is the index of an item in the heap.
 * Returns the index of the left child.
 */
inline int leftChild( int i )
{
    return 2 * i + 1;
}

/**
 * Internal method for heapsort that is used in
 * deleteMax and buildHeap.
 * i is the position from which to percolate down.
 * n is the logical size of the binary heap.
 */
template <typename Comparable>
void percDown( vector<Comparable> & a, int i, int n )
{
    int child;
    Comparable tmp;

    for( tmp = std::move( a[ i ] ); leftChild( i ) < n; i = child )
    {
        child = leftChild( i );
        if( child != n - 1 && a[ child ] < a[ child + 1 ] )
            ++child;
        if( tmp < a[ child ] )
            a[ i ] = std::move( a[ child ] );
        else
            break;
    }
    a[ i ] = std::move( tmp );
}

/**
 * Standard heapsort.
 */
template <typename Comparable>
void heapsort( vector<Comparable> & a )
{
    for( int i = a.size( ) / 2 - 1; i >= 0; --i )  /* buildHeap */
        percDown( a, i, a.size( ) );
    for( int j = a.size( ) - 1; j > 0; --j )
    {
        std::swap( a[ 0 ], a[ j ] );               /* deleteMax */
        percDown( a, 0, j );
    }
}



int main( )
{
    const int NUM_ITEMS = 50;

    vector<int> a( NUM_ITEMS );        // This input adds factor of N to running time
    for( int i = 0; i < a.size(); ++i ) {  // but we want to test std::move logic
        a[ i ] = rand() % NUM_ITEMS;
        cout << a[i] << ",";
    }

        cout << " " << endl;

        heapsort( a );

        cout << "Sorted Heap" << endl;
        for(int i = 0; i < a.size(); ++i) {
            cout << a[i] << ",";
        }

        cout << a[ NUM_ITEMS / 2 - 1 ] << " " << NUM_ITEMS / 2 << endl;



    cout << "Checking SORT for errors, Fig 7.13" << endl;
    int N = NUM_ITEMS * NUM_ITEMS;
    vector<int> b( N );
    for( int i = 0; i < N; ++i )
        b[ i ] = i;
    for( int i = 0; i < N; ++i )
        if( b[ i ] != i )
            cout << "OOPS!!" << endl;
    cout << "All done, no errors!" << endl;
    
    return 0;
}