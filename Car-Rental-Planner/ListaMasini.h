#ifndef Car_rental__ListaMasini
#define Car_rental__ListaMasini

#include <string>
#include <vector>
#include <fstream>
#include <algorithm>
#include "Masina.h"


class listaMasini
{
public:
    listaMasini(std::string filePath);
    std::vector<Masina> getToyota();
//private:
    std::vector<Masina> masini;
};

#endif
