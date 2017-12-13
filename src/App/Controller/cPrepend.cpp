#include "cPrepend.h"

void cPrepend::exec(Model& m, User& u)
{
   int value= u._GetValue();

   m.getCurrentList().prependNode(value);
   u._Success();

   return;
}
