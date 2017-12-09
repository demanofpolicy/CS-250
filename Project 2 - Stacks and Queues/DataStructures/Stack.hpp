#ifndef _STACK_HPP
#define _STACK_HPP

#include "LinkedList.hpp"

//! A LIFO template data structure; inherits from LinkedList
template <typename T>
class Stack : public LinkedList<T>
{
public:
    //!
    /**
        @param <type> asdf
        @return <type>
    */
	Stack() : LinkedList<T>()
	{

	}

    //!
    /**
        @param <T> newItem
        @return <void>
    */
	void Push(T& newItem)
	{
	    LinkedList<T>:: PushBack(newItem);

	}

    //!
    /**
        @return <void>
    */
	void Pop()
	{
	    LinkedList<T>:: PopBack();

	}

    //!
    /**
        @return <T> asdf
    */
	T& Top()
	{
        return LinkedList<T> :: GetBack();
	}

};

#endif
