#pragma once
#ifndef INCLUDED_CSETVALUE_H
#define INCLUDED_CSETVALUE_H

#include "Cmd.h"

class cSetValue : public Cmd
{
   void exec(Model& m, User& u);
};

#endif // !INCLUDED_CSETVALUE_H
