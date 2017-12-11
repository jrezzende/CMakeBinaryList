#pragma once
#ifndef INCLUDED_CMD_H
#define INCLUDED_CMD_H

#include "Model.h"
#include "View.h"
#include "User.h"

class Cmd
{
public: 
   Cmd() {}
   virtual void exec(Model& m, User& u) = 0;
};

#endif // INCLUDED_CMD_H
