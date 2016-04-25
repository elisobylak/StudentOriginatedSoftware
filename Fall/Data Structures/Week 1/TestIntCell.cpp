#include <iostream>
#include "IntCell.h"
using namespace std;

int main( )
{
    IntCell m;   // Or, IntCell m( 0 ); but not IntCell m( );
    IntCell n;

    int y = 12;

    m.write( 5 );
    n.write( 7 ) ;
    cout << "Cell M contains: " << m.read( ) << endl;
    cout << "Cell N contains: " << n.read( ) << endl;
    cout << "N + M added: " << n.add(&m) << endl;
    cout << "N - M subtracted: " << n.sub(&m) << endl;
    cout << "N + int y, which is 12: " << n.addAndReturnIntCell(y) << endl;
    return 0;
}