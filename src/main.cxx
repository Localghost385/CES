#include <main.hxx>

string
caesar(string in, int shift);

int
main(int argc, char* argv[])
{
    string in{ argv[1] };
    string shift{ argv[2] };
    int shift_int{ atoi(shift.c_str()) };
    cout << caesar(in, shift_int) << endl;

    return 0;
}