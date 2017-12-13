#pragma once
#ifndef INCLUDED_MODEL_H
#define INCLUDED_MODEL_H

#include <string>

class List;

class Model
{
private:
   List* firstList;
   List* secondList;
   List* currentList;
   bool areInitialized= false;

public:
   ~Model();
   Model() { firstList= secondList= nullptr; currentList= firstList; }

   bool areCreated() { return areInitialized; }
   void switchState() { if (areInitialized) areInitialized= false; else areInitialized= true; }
   void createBothLists();
   std::string displayLists();
   bool concatenateLists(int pos);
   void deleteLists();
   bool fileExists();
   
   void setCurrentList(int num);
   
   List& getFirstList() { return *firstList; };
   List& getSecondList() { return *secondList;  };
   List& getCurrentList() { return *currentList; };
};

#endif // !INCLUDED_MODEL_H
