#include <alphabet.hxx>
#include <main.hxx>

string
caesar(string key, string in)
{
    vector<int> v;
    int key_int = atoi(key.c_str());
    for (int i{ 0 }; i < in.length(); i++) {
        string s{ in.substr(i, 1) };
        v.push_back(alphabet.at(s));
    }
    for (int i{ 0 }; i < v.size(); i++) {
        if (v[i] != 60) {
            v[i] = v[i] + key_int;
        }
        if (v[i] != 60 && v[i] > 26) {
            v[i] -= 26;
        }
    }
    string out{ "" };
    for (int i{ 0 }; i < v.size(); i++) {
        out.append(REalphabet.at(v[i]));
    }
    return out;
}

string
vigenere(string key, string in)
{
    vector<int> v;
    vector<int> v1;
    int j{ 0 };
    for (int i{ 0 }; i < in.length(); i++) {
        v.push_back(alphabet.at(in.substr(i, 1)));
    }
    for (int i{ 0 }; i < key.length(); i++) {
        v1.push_back(alphabet.at(key.substr(i, 1)) - 1);
    }
    for (int i{ 0 }; i < v.size(); i++) {
        if (j < key.length() && v[i] != 60) {
            v[i] = v[i] + v1[j++];
        } else if (v[i] != 60) {
            j = 0;
            v[i] = v[i] + v1[j++];
        }
        if (v[i] != 60 && v[i] > 26) {
            v[i] -= 26;
        }
    }
    string out{ "" };
    for (int i{ 0 }; i < v.size(); i++) {
        out.append(REalphabet.at(v[i]));
    }
    return out;
}

string
morse(string in)
{
    string out{ "" };
    for (int i{ 0 }; i < in.length() ; i++) {
        out.append(morse_alphabet.at(in.substr(i, 1)));
        out.append(" ");
    }
    return out;
}
