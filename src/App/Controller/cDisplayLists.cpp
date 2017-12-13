#include "cDisplayLists.h"

void cDisplayLists::exec(Model& m, User& u)
{
   system("cls");
   u._PrintList(m.displayLists());

   return;
}
