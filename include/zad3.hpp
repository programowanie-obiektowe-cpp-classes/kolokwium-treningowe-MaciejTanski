#include "zad1.hpp"
#include <cstdint>
#include <functional>

template<typename T>
std::size_t polejSosem(const Tagliatelle& Tagia,const T& sos){
    return sos.polej(Tagia);
}

