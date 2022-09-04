#include <bits/stdc++.h>

#include "Masina.h"
#include "ListaMasini.h"


void printMasina(Masina masina)
{
    std::cout<<"ID: "<< masina.getId()<<"\n";
    std::cout<<"Marca: "<< masina.getMarcaMasina()<<"\n";
    std::cout<<"Denumire: "<< masina.getNumeMasina()<<"\n";
    std::cout<<"Culoare: "<< masina.getCuloareMasina()<<"\n";
    std::cout<<"Distanta: "<< masina.getDistantaCurenta()<<"\n";
}

int main()
{

    listaMasini lista("E:/C++/Car_rental/masini.txt");
    for (int i=0; i<lista.masini.size(); i++)
    {
        Masina m = lista.masini.at(i);
        printMasina(m);
    }
    return 0;
}

