#include "cDeleteLists.h"

void cDeleteLists::exec(Model& m, User& u)
{
   if (m.fileExists()) {
      if (u._Danger()) {
         m.deleteLists();
         system("cls");
         u._Success();
      }
      else
         u._Cancel();
   }
   else
      u._Fail();
   
   return;
}
