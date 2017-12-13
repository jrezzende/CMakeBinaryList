#include "cCreateBothLists.h"

void cCreateBothLists::exec(Model& m, User& u)
{
   m.createBothLists();

   if (m.fileExists())
      u._Success();
   else
      u._Fail();

   return;
}
