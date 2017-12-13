#include "cSetCurrentList.h"

void cSetCurrentList::exec(Model& m, User& u)
{
   int list= u._GetListNumber();

   m.setCurrentList(list);
}
