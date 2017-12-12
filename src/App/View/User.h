#pragma once
#ifndef INCLUDED_USER_H
#define INCLUDED_USER_H

#include <string>

class User
{
public:
   int _GetValue();
   int _GetIndex();

   void _Success();
   void _Fail();
   void _Final(bool);
   void _FailIndex();
   void _InvalidOp();
   bool _Danger();
   void _Cancel();
   void _Purge(int count);
   void _PrintList(std::string);
};

#endif // INCLUDED_VIEW_H
