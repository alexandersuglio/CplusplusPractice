/*
 prime.cpp
 Alexander Suglio
 2/28/2018
 version 1.0
 */

#include <iostream>
#include <cmath>
#include "prime.h"

using namespace fsu;

/*
 The class should be a proper type, to include one 1-argument constructor and, in cases where the defaults are inadequate, the copy constructor, assignment operator, and destructor.
 
 Prime(n): the constructor should initialize the private bitvector object in the init list and invoke Sieve() in the body, ensuring that all primes ≤ n are coded. (Note this requires at least n+1 bits.)
 
 Largest(n): returns the largest prime that is bounded above by n. (If n excedes the number of bits, it is replaced by the number of bits.)
 
 All(n os): sends all primes less than or equal to n to the stream os (again replacing n with the max number of bits if it excedes that number).
 
 All(os): sends all primes less than or equal to p.UpperBound() to the stream os.
 
 UpperBound(): returns the largest bit index value stored.
 
 ResetUpperBound(n): sets the upper bound to n if necessary. Calls BitVector::Expand.
 
 Sieve(): performs the Sieve of Eratosthenes on bv_.
 
 Dump(os): is intended for use by the development and testing teams. It should display the current state of the underlying BitVector object. For example, for the object Prime p(25) the display from p.Dump() would be
 
 */


Prime::Prime(size_t a) : bv_(a + 1)
{
  Sieve();
};



/*
Prime::Prime(const Prime& p) : bv_(p)
{
  //implementation for copy constructor
    
    
    //
}
*/


Prime::~Prime()
{
    //ensures that memory allocated for the object is properly de-allocated
    //destructor
}



size_t Prime::Largest( size_t ub ) const
{
    //deincrementing for loop
    //starting from ub and work your way down
    for (size_t j = ub -1; j > 0; j--)
    {
        bv_.Test(j);

        //return when you come across the first prime
        if (bv_.Test(j) == 1)
        {
            return j;
        }
    }
    
}
 

void Prime::All( size_t ub , std::ostream& os  ) const
{
    //for loop
    for (int i =0; i < ub; i++)
    {
        //if the value is a prime aka it's a 1
        if (bv_.Test(i) == 1)
        {
            //print it out
            os << i << " ";
        }
        
    }
    //if the size argument is bigger than the size of our vector
    if (ub > bv_.Size()){
        //call the Largest();
        Largest(ub);
    }
    
}


void Prime::All( std::ostream& os  ) const
{
    //get UpperBound() + 1;
    size_t all = UpperBound();
    
    //call All again
    All(all + 1);
    
}


size_t Prime::UpperBound() const
{
    //deincrementing for loop
    //starting from .Size() of vector and work your way down
    for (size_t j = bv_.Size()-1; j > 0; j--)
    {
        
        bv_.Test(j);
        
        //return when you come across the first prime
        if (bv_.Test(j) == 1)
        {
            return j;
        }
     
    }
}

void Prime::ResetUpperBound( size_t ub )
{
    //calls to expand
    bv_.Expand(ub);
    //then 'sieve' it
    Sieve();
    
}


void Prime::Dump( std::ostream& os  ) const
{
    
    os << "** Underlying BitVector object:" << '\n';
    
    os << '\t';
    
    //for loop
    for (size_t i = 0; i < bv_.Size(); ++i)
    //write out the value
        os << bv_.Test(i);
    os << "\n\t";
    //return the indices
    for (size_t i = 0; i < bv_.Size(); ++i)
        os << (i % 10);
    os << '\n';
}


void Prime::Sieve()
{
    //set all bits to 1 initially
    bv_.Set();
    
    //set 0 and 1 to 0
    bv_.Unset(0);
    bv_.Unset(1);
    
    //establish the length of our vector
    int Size = bv_.Size();
    //int sqroot = sqrt(Size);
    
    //for loop
    for (size_t k = 2; k < Size; k++)
    {
        //if our numbers are multiples of 2, 3, or 5
        if (k % 2 == 0 || k % 3 == 0 || k % 5 == 0)
        {
           //unset those values
          bv_.Unset(k);
            
            //but if the numbers are 2, 3, 5, or 7
            if (k == 2 || k == 3 || k==5 || k == 7)
            {
                //make them 1
                bv_.Set(k);
            }
        }
        
        else {
            
        }
    }
    
}


