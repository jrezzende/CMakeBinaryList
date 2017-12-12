#include "cAppend.h"

void cAppend::exec(Model& m, User& u)
{
   int value= u._GetValue();

   m.getCurrentList().appendNode(value);
   u._Success();
}
