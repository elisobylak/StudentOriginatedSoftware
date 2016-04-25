#include "IntCell.h"

/* So, this is my generalized summary of what I was able to accomplish for this exerise. 
As you'll notice my code will not be runable in this state and this would be due to the fact
that while doing hw1_question1.5 I accidentally dumped a bunch of hex into my original Intcell.cpp
file and overwrote it without realizing. Here's what I was able to reproduce. */

/**
 * Construct the IntCell with initialValue
 */
IntCell::IntCell( int initialValue ) : storedValue( initialValue )
{
}

/**
 * Return the stored value.
 */
int IntCell::read( ) const
{
    return storedValue;
}

/**
 * Store x.
 */
void IntCell::write( int x )
{
    storedValue = x;
}

int Intcell::add (/*parameter was a pointer to an Intcell*/) {
	/*Here I had the add function read the stored value from the Intcell
	calling the function and add it to the read value of the incoming
	Intcell*/
}

int Intcell::sub (/*paramater was a pointer to an Intcell*/) {
	/*This was the same code as th addition function but had the minus operator instead of
	addition*/
}

int Intcell::addAndReturnIntcell(/*paramater here was an int, say y*/) {
	/*Since I passed it a value for the int y, I was able to add it to an existing Intcell
	and although I never got it to be able to return an Intcell, I was able to output
	the result of the constant y and the Intcell*/
}