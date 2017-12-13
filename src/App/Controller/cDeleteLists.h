#pragma once
#ifndef INCLUDED_CDELETELISTS_H
#define INCLUDED_CDELETELISTS_H

#include "Cmd.h"

class cDeleteLists : public Cmd
{
   void exec(Model& m, User& u);
};

#endif // !INCLUDED_CDELETELISTS_H
