#ifndef _H_BESITZTMEHRWORTEALS
#define _H_BESITZTMEHRWORTEALS

#include <vector>
#include <string>
#include <sstream>
#include <iterator>

class besitztMehrWorteAls {
private:
    std::vector<std::string> tokenizer(std::string str);
    int validWords(std::vector<std::string> tokens);
public:
    bool operator()(std::string first, std::string second);
};

#endif // _H_BESITZTMEHRWORTEALS

// Domenik Kranke <domenik@kranke.de>
