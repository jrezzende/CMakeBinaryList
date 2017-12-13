#pragma once
#ifndef INCLUDED_CPREPEND_H
#define INCLUDED_CPREPEND_H

#include "Cmd.h"

class cPrepend : public Cmd
{
   void exec(Model& m, User& u);
};

#endif // !INCLUDED_CPREPEND_H
