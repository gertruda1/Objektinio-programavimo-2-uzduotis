#include <iostream>
#include <string>
#include <limits>
#include <iomanip>
#include <algorithm> 
struct student
{
    std::string vardas, pavarde;
    double galutinisvid;
    double galutinismed;
};

int main ()
{
    int n, m;
    double ndvid, ndmed, ndsum = 0, egz;
    std::cout << "Iveskite, kiek is viso yra studnetu " << std::endl;
    std::cin >> m;
    student *studentas = new student[m];

    for (int i = 0; i < m; i++)
    {
        std::cout << "Iveskite "<< i + 1 << " studento varda ir pavarde " << std::endl;
        std::cin >> studentas[i].vardas >> studentas[i].pavarde;
        std::cout << "Iveskite, kiek is viso yra " << i+1 << " studento namu darbu" << std::endl;
        std::cin >> n;
        int nd[n];
        std::cout << "Iveskite " << n << " namu darbu rezultatus (desimtbaleje sistemoje)" << std::endl;
        for (int j = 0; j < n; j++)
        {
            std::cin >> nd[j];
            ndsum += nd[j];
        }
        std::sort(nd, nd + n);
        std::cout << "Iveskite " << i+1 << " studento egzamino rezultata (desimtbaleje sistemoje)" << std::endl;
        std::cin >> egz;
        ndvid = ndsum / n;
        if (n % 2 == 0) ndmed = ((double)nd[n / 2 - 1] + (double)nd[n / 2]) / 2;
        else ndmed = nd[n / 2];
        studentas[i].galutinisvid = 0.4 * ndvid + 0.6 * egz;
        studentas[i].galutinismed = 0.4 * ndmed + 0.6 * egz;
    }

    std::cout << "Pavarde \t Vardas \t Galutinis (Vid.) \t Galutinis (Med.)" << std::endl;
    std::cout << "----------------------------------------------------------------------" << std::endl;
    for (int i = 0; i < m; i++)
    {
        std::cout << studentas[i].pavarde << " \t" << studentas[i].vardas << " \t" << std::fixed << std::setprecision(2) <<
        studentas[i].galutinisvid << " \t " << studentas[i].galutinismed << std::endl;
    }

    return 0;
}
