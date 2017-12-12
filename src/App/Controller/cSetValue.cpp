#include "cSetValue.h"

void cSetValue::exec(Model& m, User& u)
{
   bool flag= true;

   u._PrintList(m.getCurrentList().displayAsc());

   int index= u._GetIndex();
   int value= u._GetValue();

   if (index > m.getCurrentList().getListSize() || index < 1) {
      flag= false;
   }

   flag ? m.getCurrentList().setNodeValue(index, value) : u._FailIndex(); return;
}
