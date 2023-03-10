#include <alphabet.hxx>
#include <main.hxx>

string
caesar(string in, string key)
{
    vector<int> v;
    int key_int = atoi(key.c_str());
    for (int i{ 0 }; i < in.length(); i++) {
        string s{ in.substr(i, 1) };
        v.push_back(alphabet.at(s));
    }
    for (int i{ 0 }; i < v.size(); i++) {
        v[i] = v[i] + key_int;
        if (v[i] > 26) {
            v[i] -= 26;
        }
    }
    string out{ "" };
    for (int i{ 0 }; i < v.size(); i++) {
        out.append(REalphabet.at(v[i]));
    }
    return out;
}