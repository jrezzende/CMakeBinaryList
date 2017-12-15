#pragma once
#ifndef INCLUDED_CSETCURRENTLIST_H
#define INCLUDED_CSETCURRENTLIST_H

#include "Cmd.h"

class cSetCurrentList : public Cmd
{
   void exec(Model& m, User& u);
};

#endif // INCLUDED_CSETCURRENTLIST_H