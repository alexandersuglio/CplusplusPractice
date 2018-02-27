/*
 prime.h
 Alexander Suglio
 2/20/2018
 version 1.0
 */

#include <iostream>
#include "bitvect.h"


class Prime
{
public:
    
   Prime(size_t ub);
   //Prime(const Prime& p);
  ~Prime();
    
    
    // used in development & testing; displays underlying bitvector state
   // Prime &operator=(const Prime& p);
    size_t     Largest           ( size_t ub ) const;
    void       All               ( size_t ub , std::ostream& os = std::cout ) const;
    void       All               ( std::ostream& os = std::cout ) const;
    size_t     UpperBound        () const;
    void       ResetUpperBound   ( size_t ub );
    void       Dump              ( std::ostream& os = std::cout ) const;
   
private:
    void Sieve();
   
    //object from class BitVector
    fsu::BitVector bv_;
    
};



