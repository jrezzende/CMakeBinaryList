#include "cSerializeNode.h"

void cSerializeNode::exec(Model& m, User& u)
{
   m.getCurrentList().serializeNode();
   u._Success();
}
