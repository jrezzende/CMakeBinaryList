#pragma once
#ifndef INCLUDED_APP_H
#define INCLUDED_APP_H

#include "Model.h"
#include "View.h"
#include "User.h"

#include "Cmd.h"
#include "cAppend.h"
#include "cPrepend.h"
#include "cAddInPos.h"
#include "cConcatenate.h"
#include "cDisable.h"
#include "cDisableAll.h"
#include "cDisplay.h"
#include "cDisplayDesc.h"
#include "cIdle.h"
#include "cPurge.h"
#include "cSetValue.h"
#include "cSort.h"
#include "cCreateBothLists.h"
#include "cDeleteLists.h"
#include "cSetCurrentList.h"
#include "cDisplayLists.h"

class App
{
private: 
   Model* m;
   User* u;
   Cmd* cmd;
public:
   App() {
      m= new Model();
      u= new User();
      cmd= new cIdle();
   }
   ~App() {
      delete m;
      delete u;
      delete cmd;
   }
   void start();
   void firstCommand();
   void secondCommand(string fileName);
   void runCommand();
   //void setLists(); (?)
};
#endif //INCLUDED_APP_H