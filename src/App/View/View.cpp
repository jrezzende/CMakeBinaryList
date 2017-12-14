#include "View.h"

#include <iomanip>
#include <iostream>
#include <string>

using namespace std;

string currentName;

int View::getFirstOption()
{
   int option;

   cout << "//////////////////////////////////////////////////////\n";
   cout << setw(27) << "Menu" << endl;
   cout << "//////////////////////////////////////////////////////\n";
   cout << "            " << "Option 1: Create both lists" << endl;
   cout << "            " << "Option 2: Display all lists" << endl;
   cout << "            " << "Option 3: Concatenate two lists" << endl;
   cout << "            " << "Option 4: Delete both lists" << endl;
   cout << "            " << "Option 5: Manage a list" << endl;
   cout << "            " << "Option 0: Exit" << endl;
   cout << "//////////////////////////////////////////////////////\n" << endl;

   cin >> option;

   return option;
}

int View::getSecondOption(string fileName)
{
   int option;
   string fName= fileName;

   cout << "/////////////////////////////////////////////////////////////////\n";
   cout << setw(43) << "Menu -> List Manager -> " << fName << endl;
   cout << "/////////////////////////////////////////////////////////////////\n";
   cout << "            " << "Option 1: Prepend a node (attach to first position)" << endl;
   cout << "            " << "Option 2: Append a node (attach to last position)" << endl;
   cout << "            " << "Option 3: Add in a specific position" << endl;
   cout << "            " << "Option 4: Disable a node in a specific position" << endl;
   cout << "            " << "Option 5: Disable all nodes" << endl;
   cout << "            " << "Option 6: List all nodes" << endl;
   cout << "            " << "Option 7: List all nodes in reverse" << endl;
   cout << "            " << "Option 8: Sort list" << endl;
   cout << "            " << "Option 9: Purge List" << endl;
   cout << "            " << "Option 10: Back to previous menu" << endl;
   cout << "            " << "Option 0: Exit" << endl;
   cout << "/////////////////////////////////////////////////////////////////\n" << endl;
   cin >> option;

   return option;
}

int View::getList()
{
   int currentList= 0;
   system("cls");
   
   do {

      cout << "/////////////////////////////////////////////////////////////////\n";
      cout << setw(10) << "Set current list.\n";
      cout << "1 - First list.\n";
      cout << "2 - Second list.\n";
      cout << "/////////////////////////////////////////////////////////////////\n";
      cout << "Choose a list: .\n";

      cin >> currentList;
      if ((currentList != 1) && (currentList != 2)) {
         system("cls");
         cout << "Invalid option.\n";
      }
      else
         break;
   } while (true);

   if (currentList == 1)
      currentName= "First List";
   else
      currentName= "Second List";
   
   system("cls");

   return currentList;
}