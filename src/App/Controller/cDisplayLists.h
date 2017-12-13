#pragma once
#ifndef INCLUDED_CDISPLAYLISTS_H
#define INCLUDED_CDISPLAYLISTS_H

#include "Cmd.h"

class cDisplayLists : public Cmd
{
   void exec(Model& m, User& u);
};

#endif // !INCLUDED_CDISPLAYLISTS_H
