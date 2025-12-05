#include "zad1.hpp"

#include <algorithm>
#include <iterator>
#include <deque>
#include <random>
#include <vector>

template < typename T >
auto sortujTagliatelle(T start, T finish){
    std::sort(start,finish,[](const Tagliatelle& t1, const Tagliatelle& t2){
        return t1.ileMaki(1)>t2.ileMaki(1);
    });
}
