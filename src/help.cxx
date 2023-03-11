#include <iostream>
using namespace std;

void
help()
{
    cout << "  +---------[ CES ]---------+  " << endl
         << "  | A collection of ciphers |  " << endl
         << "  |   Implemented in C++    |  " << endl
         << "  |                         |  " << endl
         << "  |  For Decryption use CDS |  " << endl
         << "  +-------------------------+  " << endl
         << "                               " << endl
         << "  +--------[ USAGE ]--------+  " << endl
         << "  | CES[cipher][key][input] |  " << endl
         << "  +-------------------------+  " << endl
         << "                               " << endl
         << "  +-------[ CIPHERS ]-------+  " << endl
         << "  |        - Caesar -       |  " << endl
         << "  |       - Vigenere -      |  " << endl
         << "  |        - Morse -        |  " << endl
         << "  +-------------------------+  " << endl
         << "                               " << endl
         << "  +---------[ KEY ]---------+  " << endl
         << "  |  Input the key for the  |  " << endl
         << "  |          cipher         |  " << endl
         << "  |    For Caesar ciphers   |  " << endl
         << "  |     input the shift     |  " << endl
         << "  |   For morse code enter  |  " << endl
         << "  |      only the input     |  " << endl
         << "  +-------------------------+  " << endl
         << "                               " << endl
         << "  +--------[ INPUT ]--------+  " << endl
         << "  |  Input a string of text |  " << endl
         << "  |    in quotes with no    |  " << endl
         << "  |    special characters   |  " << endl
         << "  +-------------------------+  " << endl;
}