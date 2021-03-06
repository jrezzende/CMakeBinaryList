#pragma once
#ifndef INCLUDED_LIST_H
#define INCLUDED_LIST_H

#define NODE_SIZE 17
#define HEADER_SIZE 12
#define SIZE 0
#define FIRST 4
#define LAST 8
#define VALUE 4
#define NEXT 8
#define PREV 12
#define STATE 16

#include <string>
#include <fstream>
#include <iostream>

using namespace std;

class List
{
private:
   struct Node
   {
   public:
      Node() { index= 0; value= 0; state= true; next= prev= -1; }
      Node(int v) { index= 0; value= v; state= true; next= prev= -1; }

      int index;
      int value;
      bool state;
      int next;
      int prev;
   };

   int firstNode;
   int lastNode;
   int listSize;
   fstream fs;
   const char* fileName;
   string listName;

public:
   List(const char* fName) { 
      fileName= fName; 
      firstNode= lastNode= -1; 
      listSize= 0;
      openFile();
   }
   ~List() { remove(fileName); }

   /////////////////

   void newFile();
   bool openFile();
   bool isEmpty();
   void fileStatus();
   void clearFile();
   void closeFile();
   void setListName(string lName) { listName= lName; }

   int getListSize() { return listSize; }
   int getFirstNode() { return firstNode; }
   int getLastNode() { return lastNode; }
   string getFileName() { return fileName; }
   string getListName() { return listName; }
   
   string displayAsc();
   string displayDesc();

   void concatenateList(List&);
   void sortList();

   void appendNode(int value);
   void prependNode(int value);
   void addInPos(int value, int pos);
   Node* seekNode(int index);
   void setNodeValue(int pos, int value);

   void disableAllNodes();
   void disableNode(int pos);
   void purge();

   void serializeSize();
   void serializeHeader();
   void serializeNode(Node&);
   void serializeSetValue(Node&);
};

#endif // !INCLUDED_LIST_H
