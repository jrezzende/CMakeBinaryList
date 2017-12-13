#include "Model.h"
#include "List.h"

#include <sstream>

Model::~Model()
{
   if (firstList) delete firstList;
   if (secondList) delete secondList;

   firstList= secondList= nullptr;
}

void Model::createBothLists()
{
   if (firstList) {
      firstList->disableAllNodes();
      firstList->purge();
   }
   else
      firstList= new List("firstList.bin");

   if (secondList) {
      secondList->disableAllNodes();
      secondList->purge();
   }
   else
      secondList= new List("secondList.bin");

   areInitialized= true;
}

std::string Model::displayLists()
{
   ostringstream buf;

   buf << "In position 1, the list name is: firstList.bin. \n In position 2, the list name is: secondList.bin.\n";

   return buf.str();
}

bool Model::concatenateLists(int pos)
{
   if ((pos != 1) && (pos != 2))
      return false;

   if (pos == 1)
      secondList->concatenateList(*firstList);
   else if (pos == 2)
      firstList->concatenateList(*secondList);

   return true;
}

void Model::deleteLists()
{
   firstList->disableAllNodes();
   firstList->purge();

   secondList->disableAllNodes();
   secondList->purge();

   remove("firstList.bin");
   remove("secondList.bin");

   return;
}

bool Model::fileExists()
{
   bool flag= false;

   ifstream firstFile("firstList.bin");
   ifstream secondFile("secondList.bin");

   if (firstFile && secondFile)
      flag= true;

   firstFile.close();
   secondFile.close();

   return flag;
}

void Model::setCurrentList(int num)
{
   if (num == 1) {
      currentList= firstList;
      return;
   }

   currentList= secondList;
}

