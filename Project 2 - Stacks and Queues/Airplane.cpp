#include "Airplane.hpp"


//! Move traveller onto airplane
/**
    For the traveller passed in, push it into the airplane's stack.

    @param <Traveller*> traveller
    @return <void>
*/
void Airplane::Board(Traveller* traveller)
{
    m_travellers.Push(traveller);
}

//! Pull traveller off airplane
/**
    Get the next (top-most) traveller from the airplane stack,
    remove them from the stack and return the traveller.

    @return <Traveller*>
*/
Traveller* Airplane::Disembark()
{
    Traveller*topTraveller =  m_travellers.GetBack();
    m_travellers.PopBack();
    return topTraveller;

}

//! Return whether the airplane is empty (no passengers)
/**
    If the size of the stack is 0, then the airplane is empty.

    @return <bool>
*/
bool Airplane::IsEmpty()
{
    if ( m_travellers.Size() == 0  )
    {
        return true;
    }
    else{
        return false;
    }

}

