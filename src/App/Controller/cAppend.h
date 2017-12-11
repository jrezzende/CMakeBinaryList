#pragma once
#ifndef INCLUDED_CAPPEND_H
#define INCLUDED_CAPPEND_H

#include "Cmd.h"

class cAppend : public Cmd
{
   void exec(Model& m, User& u);
};

#endif // INCLUDED_CAPPEND_H
