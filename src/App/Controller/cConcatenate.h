#pragma once
#ifndef INCLUDED_CCONCATENATE_H
#define INCLUDED_CCONCATENATE_H

#include "Cmd.h"

class cConcatenate : public Cmd
{
   void exec(Model& m, User& u);
};

#endif // !INCLUDED_CCONCATENATE_H
