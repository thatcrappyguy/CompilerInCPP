#ifndef COMPILER_H
#define COMPILER_H

#include<bits/stdc++.h>
using namespace std;

unordered_map<char, pair<string,string>> token;


class Tokens{
    public:
        string TYPE;
        string WORK;
        char value;
 };

string stanerr(Tokens T);
void iter_through_text(const string & text);

#endif
