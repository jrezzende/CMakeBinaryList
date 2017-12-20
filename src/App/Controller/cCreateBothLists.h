#pragma once
#ifndef INCLUDED_CCREATEBOTHLISTS_H
#define INCLUDED_CCREATEBOTHLISTS_H

#include "Cmd.h"

class cCreateBothLists : public Cmd
{
   void exec(Model& m, User& u);
};

#endif // !INCLUDED_CCREATEBOTHLISTS_H
