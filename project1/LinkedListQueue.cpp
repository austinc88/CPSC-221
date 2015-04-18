//LinkedListQueue.cpp
#ifndef _LINKEDLISTQUEUE_CPP
#define _LINKEDLISTQUEUE_CPP

#include "LinkedListQueue.hpp"
#include <cstdlib> //for NULL
#include <cassert>
#include <iostream>

LinkedListQueue::LinkedListQueue() {
  head = NULL;
  tail = NULL;
  size = 0;
}

void LinkedListQueue::add(PuzzleState *elem){
   if (head == NULL){
        head = new node;
        head->next = NULL;
        head->data = elem;
        tail=head;
        size++;
     }
    else {
        tail->next = new node;
        tail->next->data = elem;        
        tail->next->next = NULL;
        tail = tail->next;
        size++;
      }
    }

PuzzleState *LinkedListQueue::remove(){
  assert(!this->is_empty());

  PuzzleState * retType = head->data;
  node * temp = head->next;
  delete head;
  head = temp;
  size--;

  return retType;
}


bool LinkedListQueue::is_empty()
{
  return head == NULL;
}

LinkedListQueue::~LinkedListQueue() {
  while(!this->is_empty()){
    this->remove();
  }
}

#endif

