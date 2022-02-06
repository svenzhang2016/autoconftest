#include <iostream>
#include <vector>
#include <string>

#if defined (ONLY_WITH_BUILDSYSTEM)
using namespace std;
#endif

int main()
{
    std::vector<std::string> msg{"Hello","C++","Autotools","from", "Vs Code"
    , "and the C++ extension!"};

    for(const std::string& word : msg)
    {
        std::cout << word << " ";
    }
}