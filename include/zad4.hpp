#include "zad1.hpp"

#include <vector>

auto obliczMake(const std::vector<Tagliatelle>& t_vect){
    double M=0;
    int i=1;
    for (auto it=t_vect.rbegin();it!=t_vect.rend();++it){
        M+=it->ileMaki(i++);
    }

    if (M>100) throw 1;
    if (M>50 && M<=100) throw 69.;
    return M;
}
