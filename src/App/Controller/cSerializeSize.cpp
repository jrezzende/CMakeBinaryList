#include "cSerializeSize.h"

void cSerializeSize::exec(Model& m, User& u)
{
   m.getCurrentList().serializeSize();
   u._Success();
}
