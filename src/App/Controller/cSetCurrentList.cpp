#include "cSetCurrentList.h"

static int list=0;

void cSetCurrentList::exec(Model& m, User& u)
{
   if (m.fileExists()) {
      list= u._GetListNumber();
      m.setCurrentList(list);
   }
   else
      u._Fail();

   return;
}
