#include <main.hxx>

int
main(int argc, char* argv[])
{
    if (argc != 4 && argc != 3) {
        help();
        return 0;
    }
    string cipher{ argv[1] };
    string in{ argv[2] };
    string key{ "" };
    if (cipher != "morse") {
        key = argv[3];
    }
    if (in == "" || cipher != "morse" && key == "") {
        help();
    }

    unordered_map<string, int> cipher_map = { { "caesar", 0 },
                                              { "vigenere", 1 },
                                              { "morse", 2 } };

    switch (cipher_map.at(cipher)) {
        case 0:
            cout << caesar(key, in) << endl;
            break;
        case 1:
            cout << vigenere(key, in) << endl;
            break;
        case 2:
            cout << morse(in) << endl;
            break;
        default:
            cout << "Invalid cipher" << endl << endl;
            help();
            break;
    }
    return 0;
}