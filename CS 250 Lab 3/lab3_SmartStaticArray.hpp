#ifndef _SMART_STATIC_ARRAY_HPP
#define _SMART_STATIC_ARRAY_HPP

#include <iostream>
#include <string>
#include <stdexcept>
using namespace std;

const int MAX_SIZE = 1000;

class SmartStaticArray
{
    public:
    SmartStaticArray();
    //private m_itemCount = 0;

    void Push( const string& newItem );
    void Insert( int index, const string& newItem );
    void Extend( const SmartStaticArray& other );
    void Pop();
    void Remove( int index );
    string Get( int index ) const;

    int Size() const;
    bool IsFull() const;
    bool IsEmpty() const;

    string operator[]( int index );
    SmartStaticArray& operator=( const SmartStaticArray& other );
    bool operator==( const SmartStaticArray& other );
    bool operator!=( const SmartStaticArray& other );

    private:
    void ShiftRight( int index )noexcept;
    void ShiftLeft( int index ) noexcept;
    string m_data[MAX_SIZE];
    int m_itemCount;
};

#endif
