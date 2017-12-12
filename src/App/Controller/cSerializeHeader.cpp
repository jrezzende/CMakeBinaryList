#include "cSerializeHeader.h"

void cSerializeHeader::exec(Model& m, User& u)
{
   m.getCurrentList().serializeHeader();
   u._Success();
}
