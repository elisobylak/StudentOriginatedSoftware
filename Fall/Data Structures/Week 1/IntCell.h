#ifndef IntCell_H
#define IntCell_H

/**
 * A class for simulating an integer memory cell.
 */
class IntCell
{
  public:
    explicit IntCell( int initialValue = 0 );
    int read( ) const;
    void write( int x );
    int add(IntCell* x);
    int sub(IntCell* x);
    int addAndReturnIntCell(int y);
    
  private:
    int storedValue;
};

#endif