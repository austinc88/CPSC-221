//HeapPriorityQueue.cpp
#ifndef _HEAPPRIORITYQUEUE_CPP
#define _HEAPPRIORITYQUEUE_CPP

#include "HeapPriorityQueue.hpp"
#include <cassert>
#include <cstdlib>//for NULL
#include <iostream>

#include <math.h>

HeapPriorityQueue::HeapPriorityQueue() {
  // TODO
}

HeapPriorityQueue::~HeapPriorityQueue() {
  // TODO
}

void HeapPriorityQueue::add(PuzzleState *elem) {
  // TODO
  int hole;
  heap.push_back(elem);
  if(heap.size() < 1){           
    heap.push_back(elem);
  }
  hole = (int)heap.size();
  
  while((heap[parent(hole)]->getBadness() > elem->getBadness()) and hole > 1){
      heap[hole] = heap[parent(hole)];
      heap[parent(hole)] = elem;
      hole = parent(hole);  
    }
  heap[hole] = elem;  

}

PuzzleState * HeapPriorityQueue::remove() {
  // TODO
  assert(heap.size() > 0);
  int target, hole, left, right;
  PuzzleState* curr = heap[1];
  heap.pop_back();
  hole = 1;
  
  while(first_child(hole) <= (int)heap.size()) {
  left = first_child(hole);
  right = left + 1;
  if (right <= (int)heap.size() and (heap[right]->getBadness() < heap[left]->getBadness())) {
	target = right;
  } else {
	target = left;
  }
  if (heap[target]->getBadness() < heap[heap.size() + 1]->getBadness()) {
	heap[hole] = heap[target];
	hole = target;
	}
	else break;
  }
  heap[hole] = heap[heap.size() + 1];
  return curr;
}


PuzzleState *HeapPriorityQueue::get_next() {
  // TODO
  if (heap.size() < 1)
	return (PuzzleState *)NULL;
	return heap[1];
}

bool HeapPriorityQueue::is_empty() {
  // TODO
  return (heap.size() == 0);
}

int HeapPriorityQueue::parent(int index) {
	return int(floor(index/2));
}

int HeapPriorityQueue::first_child(int index) {
    // give back the the first (left) child of index
    return 2*index;
}


#endif
