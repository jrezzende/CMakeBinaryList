#include "cSerializeValue.h"

void cSerializeValue::exec(Model& m, User& u)
{
   m.getCurrentList().serializeSetValue();
   u._Success();
}
