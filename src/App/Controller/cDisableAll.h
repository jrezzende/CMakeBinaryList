#pragma once
#ifndef INCLUDED_CDISABLEALL_H
#define INCLUDED_CDISABLEALL_H

#include "Cmd.h"

class cDisableAll : public Cmd
{
   void exec(Model& m, User& u);
};

#endif // !INCLUDED_CDISABLEALL_H
