#pragma once
#ifndef INCLUDED_CIDLE_H
#define INCLUDED_CIDLE_H

#include "Cmd.h"

class cIdle : public Cmd
{
   void exec(Model& m, User& u);
};

#endif // !INCLUDED_CIDLE_H
