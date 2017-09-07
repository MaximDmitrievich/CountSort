#include "countsort.h"

std::vector<int> *CountSort(std::vector<int> *a)
{
    int k = 0;
    for (auto i : *a) {
        if (k < i) {
            k = i;
        }
    }
    std::vector<int> *b = new std::vector<int>(a->size());
    std::vector<int> *c = new std::vector<int>(k);
    for (int j = 0; j < a->size(); j++) {
        c->at(a->at(j) - 1) = c->at(a->at(j) - 1) + 1;
    }
    // c[i] == count of element is i
    for (int i = 1; i < k; i++) {
        c->at(i) = c->at(i) + c->at(i - 1);
    }
    //c[i] == count of elements not more than i
    for (int j = a->size() - 1; j >= 0; j--) {
        b->at(c->at(a->at(j) - 1) - 1) = a->at(j);
        c->at(a->at(j) - 1) =  c->at(a->at(j) - 1) - 1;
    }
    delete c;
    return b;
}
