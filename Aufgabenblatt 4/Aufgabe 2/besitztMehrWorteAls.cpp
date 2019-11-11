#include "besitztMehrWorteAls.h"
using namespace std;

vector<string> besitztMehrWorteAls::tokenizer(string str) {
    istringstream iss(str);
    vector<string> result(istream_iterator<string>{iss}, istream_iterator<string>());
    return result;
}

int besitztMehrWorteAls::validWords(vector<string> tokens) {
    int result = 0;
    for (string token : tokens) {
        if (token.size() >= 2) {
            result++;
        }
    }
    return result;
}

bool besitztMehrWorteAls::operator()(string first, string second) {
    vector<string> firstTokens = tokenizer(first);
    vector<string> secondTokens = tokenizer(second);
    return validWords(firstTokens) > validWords(secondTokens);
}

// Domenik Kranke <domenik@kranke.de>
