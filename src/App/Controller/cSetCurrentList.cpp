#include "cSetCurrentList.h"

void cSetCurrentList::exec(Model & m, User & u)
{   
   int pos= u._GetCurrentValue();
   m.setCurrentList(pos);
}
