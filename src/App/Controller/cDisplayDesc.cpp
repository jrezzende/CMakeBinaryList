#include "cDisplayDesc.h"

void cDisplayDesc::exec(Model& m, User& u)
{
   system("cls");
   u._PrintList(m.getCurrentList().displayDesc());
}
