#include <iostream>

#include "List.h"

using namespace std;

// list constructor 
List::List()
{
  head = NULL;
}

// itterate over all nodes, delete the calendar data, then the node 
List::~List()
{
  Node *currNode, *nextNode;

  currNode = head;

  while (currNode != NULL) {
    nextNode = currNode->next;
    delete currNode->data;
    delete currNode;
    currNode = nextNode;
  }
}

// adds event in proper place by using the date classes lessThan fn 
void List::add(Event* stu)
{
  Node* tmpNode;
  Node* currNode;
  Node* prevNode;

  tmpNode = new Node;
  tmpNode->data = stu;
  tmpNode->next = NULL;

  currNode = head;
  prevNode = NULL;

  while (currNode != NULL) {
      // comparing events below
    if (currNode->data->lessThan(stu)){
      break;
    }
    prevNode = currNode;
    currNode = currNode->next;
    
  }

  if (prevNode == NULL) {
    head = tmpNode;
  }
  else {
    prevNode->next = tmpNode;
  }

  tmpNode->next = currNode;
}

// itterates over list printing each nodes data, ie the event
void List::print()
{
  Node* currNode = head;

  while (currNode != NULL) {
    cout << "            " << endl;  
    currNode->data->print();
    cout << "            " << endl;
    currNode = currNode->next;
  }



}

