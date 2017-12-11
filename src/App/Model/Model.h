#pragma once
#ifndef INCLUDED_MODEL_H
#define INCLUDED_MODEL_H

class List;

class Model
{
private:
   List* firstList;
   List* secondList;
   List* currentList;
   bool areInitialized= false;

public:
   enum ListOption { List1, List2 };

   ~Model();
   Model() { firstList= secondList= nullptr; currentList= firstList; }

   bool areCreated() { return areInitialized; }
   void switchState() { if (areInitialized) areInitialized= false; else areInitialized= true; }
   void createBothLists();
   string displayLists();
   bool concatenateLists(int pos);
   void deleteList();
   bool fileExists();
   
   void setCurrentList(ListOption lo);
   
   List& getFirstList() { return *firstList; };
   List& getSecondList() { return *secondList;  };
   List& getCurrentList() { return *currentList; };
};

#endif // !INCLUDED_MODEL_H
