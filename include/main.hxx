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
#include <fstream>
#include <iostream>
#include <string>
#include <unordered_map>
#include <vector>
//---------------------------------------//

//----------[ FUNCTIONS ]----------//
using namespace std;

// CAESAR CIPHER ENCRYPTION
string
caesar(string key, string in);
// VIGENERE CIPHER ENCRYPTION
string
vigenere(string key, string in);
// MORSE CODE ENCRYPTION
string
morse(string in);

// PRINT HELP INFORMATION
void
help();
//-----------------------------//