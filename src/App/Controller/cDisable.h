#pragma once
#ifndef INCLUDED_CDISABLE_H
#define INCLUDED_CDISABLE_H

#include "Cmd.h"

class cDisable : public Cmd
{
   void exec(Model& m, User& u);
};

#endif // !INCLUDED_CDISABLE_H
