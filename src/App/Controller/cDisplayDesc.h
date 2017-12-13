#pragma once
#ifndef INCLUDED_CDISPLAYDESC_H
#define INCLUDED_CDISPLAYDESC_H

#include "Cmd.h"

class cDisplayDesc : public Cmd
{
   void exec(Model& m, User& u);
};

#endif // !INCLUDED_CDISPLAYDESC_H
