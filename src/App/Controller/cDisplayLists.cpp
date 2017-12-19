#include "cDisplayLists.h"

void cDisplayLists::exec(Model& m, User& u)
{
   system("cls");

   if (m.fileExists())
      u._PrintList(m.displayLists());
   else {
      u._Fail();
      return;
   }

   return;
}
