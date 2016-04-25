template <typename HashedObj>
class HashTable
{
  public:
    explicit HashTable( int size = 101 );

    bool contains( const HashedObj & x ) const {
      const list<HashedObj> & whichList = theLists[ myhash( x ) ];
      return find( whichList.begin( ), whichList.end( ), x ) != whichList.end( );
    }

    void makeEmpty( ) {
      for( int i = 0; i < theLists.size( ); i++ )
          theLists[ i ].clear( );
    }

    void insert( const HashedObj & x ){
      list<HashedObj> & whichList = theLists[ myhash( x ) ];
      if( find( whichList.begin( ), whichList.end( ), x ) != whichList.end( ) )
          return false;
      whichList.push_back( x );
  
          // Rehash; see Section 5.5
      if( ++currentSize > theLists.size( ) )
          rehash( );
  
      return true;
    }

    void remove( const HashedObj & x ) {
      list<HashedObj> & whichList = theLists[ myhash( x ) ];
      list<HashedObj>::iterator itr = find( whichList.begin( ), whichList.end( ), x );
  
      if( itr == whichList.end( ) )
          return false;
  
      whichList.erase( itr );
      --currentSize;
      return true;
    }

  private:
    vector<list<HashedObj> > theLists;   // The array of Lists
    int  currentSize = size;

    void rehash( );
    int myhash( const HashedObj & x ) const;
};

//int hash( const string & key );
//int hash( int key );

int hash( const string & key, int tableSize )
{
      int hashVal = 0;

      for( int i = 0; i < key.length( ); i++ )
          hashVal += key[ i ];

      return hashVal % tableSize;
}



