#include "cSort.h"

void cSort::exec(Model& m, User& u)
{
   if(m.getCurrentList().getListSize() > 0)
      m.getCurrentList().sortList();

   u._Success();

   return;
}
