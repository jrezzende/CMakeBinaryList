#include "cConcatenate.h"

void cConcatenate::exec(Model& m, User& u)
{
   bool flag= true;
   int index= u._GetListPos();

   if (index != 1 && index != 2) {
      flag= false;
   }

   if (index == 1) {
      if (m.getSecondList().getListSize() > 0) {
         m.getSecondList().concatenateList(m.getFirstList());
      }
      else
         flag= false;
   }
   else if (index == 2) {
      if (m.getFirstList().getListSize() > 0) {
          m.getFirstList().concatenateList(m.getSecondList());
         }
      else 
         flag= false;
      }
   
   flag ? u._Final(true) : u._Final(false);

   return;
}
