#include "Masina.h"

Masina::Masina(std::string informatiiMasini)
{
    std::stringstream masiniStream(informatiiMasini);
    masiniStream >> id;
    masiniStream >> marcaMasina;
    masiniStream >> numeMasina;
    masiniStream >> culoareMasina;
    masiniStream >> locatie;
    masiniStream >> distantaCurenta;
}

int Masina::getId()
{
    return id;
}
std::string Masina::getMarcaMasina()
{
    return marcaMasina;
}
std::string Masina::getNumeMasina()
{
    return numeMasina;
}
std::string Masina::getCuloareMasina()
{
    return culoareMasina;
}
std::string Masina::getLocatie()
{
    return locatie;
}
std::string Masina::getDistantaCurenta()
{
    return distantaCurenta;
}
