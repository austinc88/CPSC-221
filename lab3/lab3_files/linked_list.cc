#include <iostream>
#include <string> 

struct Node {
  int key;
  Node* next;
}; 

void insert( Node*& head, int key) {
  Node * curr = new Node;
  curr->key  = key;
  curr->next = head;

  head = curr;
}

void print( Node* head ) {
  std::cout << "[";
  for (Node* curr = head; curr != NULL; curr = curr->next ){ 
    std::cout << curr->key;
    if( curr->next != NULL ) std::cout << ", ";
  }
  std::cout << "]" << std::endl;
}

// This function deletes the last element in the linked list.
// Pre-condition: The head of a linked list is provided.
// Post-condition: The last element of that linked list has been removed.
void delete_last_element( Node*& head )
{
  //please write your own code here
}

// This function inserts a key after a node with a given key.
// If there is no node with the given key, no action.
// Pre-condition: The head of a linked list,
// a key to indicate where to insert,
// and a new key to insert are provided.
// Post-condition: If a node with key is found, the linked list
// contains a new node (newKey) after that node.
void insert_after( Node* head, int key, int newKey )
{
  //please write your own code here
}

// This function merges two linked lists.
// Pre-condition: Two linked lists (list1 and list2) are provided.
// Post-condition: A new linked list is returned that contains the keys
// of list1 and list2, starting with the first key of list1, then the
// first key of list2, etc. When one list is exhausted, the remaining
// keys come from the other list.
// For example: [1, 2] and [3, 4, 5] would return [1, 3, 2, 4, 5]
Node* interleave( Node* list1, Node* list2 )
{
  //please write your own code here to replace "return NULL" below
  return NULL;
}

int main() {

  Node * list1 = NULL;
  Node * list2 = NULL;
  Node * list3 = NULL;
  Node * list4 = NULL;

  insert( list1, 1);
  insert( list1, 2);
  insert( list1, 3);

  std::cout << "<A> List 1: ";
  print( list1 );

  insert( list2, 10);
  insert( list2, 9);
  insert( list2, 8);
  insert( list2, 7);
  insert( list2, 6);

  std::cout << "<B> List 2: ";
  print( list2 );

  delete_last_element( list1 );
  std::cout << "<C> List 1: ";
  print( list1 );

  delete_last_element( list1 );
  std::cout << "<D> List 1: ";
  print( list1 );

  delete_last_element( list1 );
  std::cout << "<E> List 1: ";
  print( list1 );

  delete_last_element( list1 );
  std::cout << "<F> List 1: ";
  print( list1 );

  insert(list1, 11);
  insert_after(list1, 11, 12);
  std::cout << "<G> List 1: ";
  print( list1 );

  insert_after(list1, 13, 14);
  std::cout << "<H> List 1: ";
  print( list1 );

  list4 = interleave(list1, list2);
  std::cout << "<I> List 4: ";
  print( list4 );

  list4 = interleave(list1, list3);
  std::cout << "<J> List 4: ";
  print( list4 );

  list4 = interleave(list3, list3);
  std::cout << "<K> List 4: ";
  print( list4 );

  return 0;
}
