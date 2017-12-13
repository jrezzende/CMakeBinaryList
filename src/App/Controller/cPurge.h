#pragma once
#ifndef INCLUDED_CPURGE_H
#define INCLUDED_CPURGE_H

#include "Cmd.h"

class cPurge : public Cmd
{
   void exec(Model& m, User& u);
};

#endif // !INCLUDED_CPURGE_H
