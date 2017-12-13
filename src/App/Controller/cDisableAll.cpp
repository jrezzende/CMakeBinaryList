#include "cDisableAll.h"

void cDisableAll::exec(Model& m, User& u)
{
   if (u._Danger()) {
      m.getCurrentList().disableAllNodes();
      u._Success();
   }
   else
      u._Cancel();

   return;
}
