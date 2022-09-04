#include "ListaMasini.h"

bool intervalComp(Masina &m1, Masina &m2)
{
    return (m1.getDistantaCurenta() > m2.getDistantaCurenta());
}

listaMasini::listaMasini(std::string filePath)
{

    std::ifstream fMasina (filePath.c_str());
    std::string continut;
    while (std::getline(fMasina,continut))
    {

        Masina m(continut);
        masini.push_back(m);
    }

    fMasina.close();
    std::sort(masini.begin(), masini.end(), intervalComp);
}
