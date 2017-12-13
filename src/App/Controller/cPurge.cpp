#include "cPurge.h"

void cPurge::exec(Model& m, User& u)
{
   int purgeCount= m.getCurrentList().purge();
   u._Purge(purgeCount);

   return;
}
