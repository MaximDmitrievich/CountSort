#include "countsort.h"

int main(int argc, char **argv)
{
    std::vector<int> *a = new std::vector<int>();
    int buf = 0;
    while (std::cin >> buf)
    {
        a->push_back(buf);
    }
    std::vector<int> *b = CountSort(a);
    for (auto i : *b) {
        std::cout << i << " ";
    }
    std::cout << std::endl;
    delete a;
    delete b;
    return 0;
}
