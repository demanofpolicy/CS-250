#include "project1_LinkedList.hpp"

Node::Node()
{
    m_ptrNext = nullptr;
    m_ptrPrev = nullptr;
    //throw runtime_error( "Node() not yet implemented" );
}

LinkedList::LinkedList()
{
    m_ptrFirst = nullptr;
    m_ptrLast = nullptr;
    m_itemCount = 0;

    //throw runtime_error( "LinkedList() not yet implemented" );
}

LinkedList::~LinkedList()
{
    Clear();
    //throw runtime_error( "~LinkedList() not yet implemented" );
}

void LinkedList::Clear()
{
    while( m_itemCount != 0)
    {
        PopFront();
    }
    //throw runtime_error( "Clear() not yet implemented" );
}

void LinkedList::PushFront( CustomerData newData )
{

    Node * newNode = new Node;
    newNode -> m_data = newData;
    if( m_itemCount == 0)
    {
        m_ptrFirst = newNode;
        m_ptrLast = newNode;
    }
    else
    {
        m_ptrFirst -> m_ptrPrev = newNode;
        newNode -> m_ptrNext = m_ptrFirst;
        m_ptrFirst = newNode;

    }

    m_itemCount ++;
    //throw runtime_error( "PushFront() not yet implemented" );
}

void LinkedList::PushBack( CustomerData newData )
{

    Node *newNode = new Node;
    newNode -> m_data =newData;
    if ( m_itemCount == 0)
    {
        m_ptrFirst = newNode;
        m_ptrLast = newNode;
    }
    else
    {
        m_ptrLast -> m_ptrNext = newNode;
        newNode -> m_ptrPrev = m_ptrLast;
        m_ptrLast = newNode;
    }

    m_itemCount ++;
    //throw runtime_error( "PusBack() not yet implemented" );
}

void LinkedList::PopFront() noexcept
{
    if (m_itemCount == 1)
    {
        delete m_ptrFirst;
        m_ptrFirst = nullptr;
        m_ptrLast = nullptr;
        m_itemCount--;
    }
    else if( m_itemCount > 1)
    {
        Node *ptrSecond = m_ptrFirst -> m_ptrNext;
        ptrSecond -> m_ptrPrev = nullptr;
        delete m_ptrFirst;
        m_ptrFirst = ptrSecond;
        m_itemCount --;
    }



    //throw runtime_error( "PopFront() not yet implemented" );
}

void LinkedList::PopBack() noexcept
{
    if ( m_itemCount == 1)
    {
        delete m_ptrLast;
        m_ptrFirst = nullptr;
        m_ptrLast = nullptr;
        m_itemCount--;
    }
    else if( m_itemCount > 1)
    {
        Node *ptrSecondToLast = m_ptrLast -> m_ptrPrev;
        ptrSecondToLast -> m_ptrNext = nullptr;
        delete m_ptrLast;
        m_ptrLast = ptrSecondToLast;
        m_itemCount --;


    }

    //throw runtime_error( "PopBack() not yet implemented" );
}

CustomerData LinkedList::GetFront()
{
    if(m_itemCount == 0)
    {
        throw out_of_range ( " The List is Empty");
    }
    else
    {
        return m_ptrFirst -> m_data;
    }

    //throw runtime_error( "GetFront() not yet implemented" );
}

CustomerData LinkedList::GetBack()
{
    if (m_itemCount == 0)
    {
        throw out_of_range ( "The List Is Empty");
    }
    return m_ptrLast -> m_data;
    //throw runtime_error( "GetBack() not yet implemented" );
}

CustomerData& LinkedList::operator[]( const int index )
{
    if( index < 0 || index >= m_itemCount)
    {
        throw out_of_range ("the index is invalid");
    }
    int counter = 0;
    Node *ptrCurrent = m_ptrFirst;
    while( counter != index)
    {
        ptrCurrent = ptrCurrent -> m_ptrNext;
        counter ++;
    }
    return ptrCurrent -> m_data;
    //throw runtime_error( "operator[]() not yet implemented" );
}

bool LinkedList::IsEmpty()
{
    if ( m_itemCount == 0)
    {
        return true;
    }
    else
    {
        return false;
    }
    //throw runtime_error( "IsEmpty() not yet implemented" );
}

int LinkedList::Size()
{
    return m_itemCount;
    //throw runtime_error( "Size() not yet implemented" );
}

