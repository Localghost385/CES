//----------[ WINDOWS INCLUDES ]----------//
#ifdef _WIN32
#include <windows.hxx>
#endif
//----------------------------------------//

//----------[ UNIX INCLUDES ]----------//
#ifdef unix
#include <unix.hxx>
#endif
//-------------------------------------//

//----------[ GLOBAL INCLUDES ]----------//
#include <iostream>
#include <string>
#include <unordered_map>
#include <vector>

//---------------------------------------//

//----------[ OTHER ]----------//
using namespace std;

string
caesar(string in, string key);

void
help();
//-----------------------------//