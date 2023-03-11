#include <main.hxx>

int
main(int argc, char* argv[])
{
    if (argc != 4) {
        help();
        return 0;
    }
    string cipher{ argv[1] };
    string in{ argv[2] };
    string key{ argv[3] };

    unordered_map<string, int> cipher_map = { { "caesar", 0 },
                                              { "viginere", 1 } };

    switch (cipher_map.at(cipher)) {
        case 0:
            cout << caesar(in, key) << endl;
            break;
        default:
            help();
            break;
    }
    return 0;
}