#ifndef Car_rental__Masina
#define Car_rental__Masina

#include <string>
#include <sstream>

class Masina
{
public:
    Masina(std::string informatiiMasini);
    int getId();
    std::string getMarcaMasina();
    std::string getNumeMasina();
    std::string getCuloareMasina();
    std::string getLocatie();
    std::string getDistantaCurenta();
private:
    int id;
    std::string marcaMasina;
    std::string numeMasina;
    std::string culoareMasina;
    std::string locatie;
    std::string distantaCurenta;

};
#endif
