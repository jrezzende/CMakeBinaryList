#include "User.h"

#include <iostream>
#include <string>

using namespace std;

int User::_GetValue()
{
   system("cls");

   cout << "--------------------------- \n";
   cout << "Insert the node's value: \n";

   int value;
   cin >> value;

   return value;
}

int User::_GetIndex()
{
   system("cls");
   
   cout << "--------------------------- \n";
   cout << "Insert the node's index: \n";

   int index;
   cin >> index;

   return index;
}

/////////////////////

void User::_Success()
{
   system("cls");
   cout << "Operation Successful.\n";
}

void User::_Fail()
{
   system("cls");
   cout << "Operation failed.\n";
}

void User::_Final(bool flag)
{
   system("cls");
   flag ? _Success() : _Fail();
}

void User::_FailIndex()
{
   system("cls");
   cout << "Invalid index value.\n";
}

void User::_InvalidOp()
{
   system("cls");
   cout << "Invalid Option.\n";
}

bool User::_Danger()
{
   system("cls");

   cout << "Attention! This operation has permanent effects that may not be reverted.\n Do you want to continue?\n";
   cout << "1 - Yes.\n";
   cout << "2 - No.\n";

   int option;
   cin >> option;

   switch (option) {
      case 1: return true;
      case 2: return false;
      default: _InvalidOp();
   }
}

void User::_Cancel()
{
   system("cls");
   cout << "Operation canceled.\n";
}

void User::_Purge(int purgeCount)
{
   system("cls");
   cout << "Operation successful. \" " << purgeCount << "\" nodes were erased from the file.\n";
}

//////////////////////////////////

void User::_PrintList(std::string list)
{
   system("cls");
   cout << list << endl;
}
