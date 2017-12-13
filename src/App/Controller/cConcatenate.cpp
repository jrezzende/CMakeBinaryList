#include "cConcatenate.h"

void cConcatenate::exec(Model& m, User& u)
{
   bool flag= true;
   int index= u._GetIndex();

   if (index != 1 && index != 2) {
      flag= false;
   }

   if (index == 1)
      m.getCurrentList().concatenateList(m.getFirstList());
   else
      m.getCurrentList().concatenateList(m.getSecondList());
   
   flag ? u._Final(true) : u._Final(false);

   return;
}
