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

//----------[ FUNCTIONS ]----------//
using namespace std;

string
caesar(string key, string in);

string
vigenere(string key, string in);

string
morse(string in);

void
help();
//-----------------------------//