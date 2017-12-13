#pragma once
#ifndef INCLUDED_CDISPLAY_H
#define INCLUDED_CDISPLAY_H

#include "Cmd.h"

class cDisplay : public Cmd
{
   void exec(Model& m, User& u);
};

#endif // !INCLUDED_CDISPLAY_H
