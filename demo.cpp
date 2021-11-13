
#include <iostream>
#include "demo.h"
#include "linkedlist.h"
#include "doublelinkedlist.h"
#include "types.h"
#include "recorrer.h"

using namespace std;

const int nElem = 20;
TX vect[nElem] = {30, 5, 14, 7,80, 90, 37, 25, 54, 47, 
                  3, 6, 12, 8, 25, 27, 19, 83, 9, 17};

template <typename LinkedList>
void demoLinkedList(LinkedList &mylist)
{
    cout << "Inserting:       ";
    for(auto x=0; x<nElem; x++)
    {   
      cout << vect[x] << ", "; 
      mylist.insert(vect[x]);
    }
    cout << endl;
    cout << "Lista en orden: ";
    recorrer(mylist, fx);  cout << endl;
}

void demoLinkedListSorted()
{
    cout << "Ascending list" << endl;
    LinkedList< LLTraitAsc<TX> > myAscList;
    demoLinkedList(myAscList);

    cout << "Descending list" << endl;
    LinkedList< LLTraitDesc<TX> > myDescList;
    demoLinkedList(myDescList);
}

template <typename DoubleList>
void demoDoubleLinkedList(DoubleList &mylist)
{
    cout << "Inserting:       ";
    for(auto x=0; x<nElem; x++)
    {   
      cout << vect[x] << ", "; 
      mylist.insert(vect[x]);
      //mylist.push_back(vect[x]);
    }
    cout << endl;
    cout << "Lista en orden : ";
    recorrer(mylist, fx);  cout << endl;
    
    cout << "Lista invertida: ";
    recorrer_inverso(mylist, fx);  cout << endl;
}

void demoDoubleLinkedListSorted()
{
    cout << "Ascending double list" << endl;
    DoubleLinkedList< DLLAscTraits<TX> > myAscList;
    demoDoubleLinkedList(myAscList);

    cout << "Descending double list" << endl;
    DoubleLinkedList< DLLDescTraits<TX> > myDescList;
    demoDoubleLinkedList(myDescList);
}