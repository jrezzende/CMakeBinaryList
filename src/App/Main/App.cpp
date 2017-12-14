#include "App.h"

void App::start()
{
   firstCommand();
}

void App::firstCommand()
{
   int op;

   do {
      op= View::getFirstOption();
      switch (op) 
      {
      case 1: cmd= new cCreateBothLists();
      case 2: cmd= new cDisplay();
      case 3: cmd= new cConcatenate();
      case 4: cmd= new cDeleteLists();
      case 5: 
      {
         system("cls");
         cmd= new cSetCurrentList();
         secondCommand();
         break;
      }
      case 0: exit(0);
      default: system("cls"); u->_InvalidOp(); break;
      }
   } while (op != NULL);
}

void App::secondCommand()
{
   int op;

   do {
      op= View::getSecondOption();
      switch (op) 
      {
      case 1: cmd= new cPrepend();
      case 2: cmd= new cAppend();
      case 3: cmd= new cAddInPos();
      case 4: cmd= new cDisable();
      case 5: cmd= new cDisableAll();
      case 6: cmd= new cDisplay();
      case 7: cmd= new cDisplayDesc();
      case 8: cmd= new cSort();
      case 9: cmd= new cPurge();
      case 10: system("cls"); op= NULL; break;
      case 0: exit(0);
      default: system("cls"); u->_InvalidOp();
      }
   } while (op != NULL);
}

void App::runCommand()
{
   cmd->exec(*m, *u);
} 