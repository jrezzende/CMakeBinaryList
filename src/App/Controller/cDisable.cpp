#include "cDisable.h"

void cDisable::exec(Model& m, User& u)
{
   u._PrintList(m.getCurrentList().displayAsc());
   int index= u._GetIndex();
   
   m.getCurrentList().disableNode(index);
   u._Success();
}
