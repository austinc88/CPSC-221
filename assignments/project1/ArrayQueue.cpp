#ifndef _ARRAYQUEUE_CPP
#define _ARRAYQUEUE_CPP

//ArrayQueue.cpp

#include "ArrayQueue.hpp"
#include <cstdlib> //for NULL
#include <cassert>
#include <iostream>
using namespace std;

// 221 STUDENTS:
//
// This skeleton file (along with the .hpp) is
// here to help get you started, but you are
// free to change function signatures, etc.
// as long as ArrayQueue is some subtype
// of BagOfPuzzleStates
ArrayQueue::ArrayQueue(){
  front = 0;
  back = 0;
  num_elements = 0;
  capacity = INITIAL_SIZE;
  array = new PuzzleState*[capacity];
}

void ArrayQueue::add(PuzzleState *elem)
{
  // TODO: uncomment parameter name (commented out so you don't get a warning)
  // TODO: implement add method
  ensure_capacity(num_elements +1);
  array[back] = elem;
  back = (back +1) % capacity;
  num_elements++;
}

PuzzleState *ArrayQueue::remove()
{
  assert(num_elements > 0);
  // TODO: implement remove method
  PuzzleState * elem = array[front];
  front = (front + 1)% capacity;
  num_elements--;

  return elem;
}

bool ArrayQueue::is_empty()
{
  return front == back;
}

void ArrayQueue::ensure_capacity(int n)
{
  if (capacity < n) {
    // Make plenty of room.
    int target_capacity = 2*n; //(n<2*capacity)? 2*capacity: 2*n; 
    PuzzleState ** old_array = array;
    array = new PuzzleState*[target_capacity];

    int i = 0;

      while((front+i)%capacity != back){
      array[i] = old_array[(front + i) %capacity];
      i++;
    }
      capacity = target_capacity;
      delete[] old_array;
  }
  
}


ArrayQueue::~ArrayQueue()
{
  delete[] array;
}

#endif
