#include "cPurge.h"

void cPurge::exec(Model& m, User& u)
{
   m.getCurrentList().purge();
   u._Purge();

   return;
}
