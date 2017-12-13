#include "cDisplay.h"

void cDisplay::exec(Model& m, User& u)
{
   system("cls");
   u._PrintList(m.getCurrentList().displayAsc());

   return;
}
