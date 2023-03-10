#include <iostream>
using namespace std;

void
help()
{
    cout << "  ----------[ CES ]----------  " << endl
         << "    A collection of ciphers    " << endl
         << "      Implemented in C++       " << endl
         << "                               " << endl
         << "     For Decryption use CDS    " << endl
         << "  ---------------------------  " << endl
         << "                               " << endl
         << "  ---------[ USAGE ]---------  " << endl
         << "    CES[cipher][key][input]    " << endl
         << "  ---------------------------  " << endl
         << "                               " << endl
         << "  --------[ CIPHERS ]--------  " << endl
         << "           - Caesar -          " << endl
         << "          - Vigenere -         " << endl
         << "  ---------------------------  " << endl
         << "                               " << endl
         << "  ----------[ KEY ]----------  " << endl
         << "     input the key for the     " << endl
         << "             cipher            " << endl
         << "    for Caesar ciphers input   " << endl
         << "           the shift           " << endl
         << "  ---------------------------  " << endl
         << "                               " << endl
         << "  ---------[ INPUT ]---------  " << endl
         << "     input a string of text    " << endl
         << "    in quotes with no spaces   " << endl
         << "     or special characters     " << endl
         << "  ---------------------------  " << endl;
}