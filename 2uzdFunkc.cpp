#include "antrastes.h"
#include "antrastes2.h"
void ArSkaiciusTinkamas (int& skaicius, int pradzia, int pabaiga)
{
    while (std::cin.fail() || skaicius < pradzia || skaicius > pabaiga)
    {
        std::cin.clear();
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(),'\n');
        std::cout<<"Ivestas netinkamas dydis" <<std::endl;
        std::cout << "Pasirinkite skaiciu is intervalo nuo " << pradzia << " iki " << pabaiga << ": ";
        std::cin >> skaicius;
    }
}

double rastimediana (std::vector<int> vekt)
{
    typedef std::vector<int>::size_type vec_sz;
    vec_sz size = vekt.size();
    if (size == 0)
        throw std::domain_error("median of an empty vector");
    std::sort(vekt.begin(), vekt.end());
    vec_sz mid = size / 2;
    return (double)(size % 2 == 0 ? ((double)(vekt[mid]) + (double)(vekt[mid-1])) / 2 : (double)(vekt[mid]));
}

bool compareAlphabet(student a, student b)
{
    return a.vardas < b.vardas;
}

void spausdinimas(std::vector<student> a, std::string b)
{
    if (b == "vidurkis") std::cout << "Pavarde \t Vardas \t\t Galutinis (Vid.)" << std::endl;
    else std::cout << "Pavarde \t Vardas \t\t Galutinis (Med.) " << std::endl;
    std::cout << "-----------------------------------------------------------" << std::endl;
    for (int i = 0; i < a.size() - 1; i++)
    {
        std::cout << a[i].pavarde << " \t " << a[i].vardas << " \t\t " << std::fixed << std::setprecision(2) <<
        a[i].galutinis << std::endl;
    }
}

void spausdinimas (student* a, std::string b, int m)
{
    if (b == "vidurkis") std::cout << "Pavarde \t Vardas \t Galutinis (Vid.)" << std::endl;
    else std::cout << "Pavarde \t Vardas \t Galutinis (Med.)" << std::endl;
    std::cout << "-----------------------------------------------------------" << std::endl;
    for (int i = 0; i < m; i++)
    {
        std::cout << a[i].pavarde << " \t" << a[i].vardas << " \t " << std::fixed << std::setprecision(2) <<
        a[i].galutinis << std::endl;
    }
}