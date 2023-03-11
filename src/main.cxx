#include <main.hxx>

int
main(int argc, char* argv[])
{
    if (argc != 4 && argc != 3) {
        help();
        return 0;
    }
    string src {argv[1]};
    string cipher{ argv[2] };
    string in {""};
    if (src == "cli") {
        in = argv[3];
    } else if (src == "file") {
        ifstream ifs(argv[3]);
        in.assign((istreambuf_iterator<char>(ifs)),
                  (istreambuf_iterator<char>()));
    }
    string key{ "" };
    if (cipher != "morse") {
        key = argv[4];
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