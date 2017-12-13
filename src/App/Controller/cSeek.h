#pragma once
#ifndef INCLUDED_CSEEK_H
#define INCLUDED_CSEEK_H

#include "Cmd.h"

class cSeek : public Cmd
{
   void exec(Model& m, User& u);
};

#endif //INCLUDED_CSEEK_H //
