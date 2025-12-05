#include "zad1.hpp"

#include <memory>
#include <string>
#include <type_traits>

class Penne : public Makaron{
public:
    double ileMaki(unsigned P) const override{ return static_cast<double>(P); }

};
Makaron* Makaron::gotujMakaron(const std::string& arg){
    if(arg.front()==arg.back()) return new Tagliatelle{3.14,0.42,0.1};
    else return new Penne();
}