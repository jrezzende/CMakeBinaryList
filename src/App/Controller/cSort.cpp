#include "cSort.h"

void cSort::exec(Model& m, User& u)
{
   m.getCurrentList().sortList();
   u._Success();
}
