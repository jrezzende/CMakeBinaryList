#pragma once
#ifndef INCLUDED_CSORT_H
#define INCLUDED_CSORT_H

#include "Cmd.h"

class cSort : public Cmd
{
   void exec(Model& m, User& u);
};

#endif // !INCLUDED_CSORT_H
