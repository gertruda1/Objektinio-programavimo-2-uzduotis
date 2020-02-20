#include <iostream>
#include <string>
#include <limits>
#include <iomanip>
#include <algorithm>
#include <vector>
#include <numeric>

#define daugiausia 50
struct student
{
    std::string vardas, pavarde;
    double galutinis;
};


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

///////////////////////////////////////////////////////////////////////////////////////////////////
int main ()
{
    int m;
    double ndvid, ndsum = 0, egz;

    ///////////////Duomenu ivedimas/////////////////////

    std::cout << "Iveskite, kiek is viso yra studentu " << std::endl;
    std::cin >> m;
    /////////////////////Tikrinam, ar gerai ivesti duomenys//////////////////////
    while(m <= 0 || !std::cin)
    {
        if(std::cin.fail() || m <=0)
        {
            std::cin.clear();
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(),'\n');
            std::cout<<"Ivestas netinkamas dydis, iveskite teigiama skaiciu: ";
            std::cin>>m;
        }
     }
    ///////////////////////////Baigiam tikrinti/////////////////////////////////////////////

    student *studentas = new student[m];
    std::string kas;
    std::cout << "Vidurkis ar mediana? " << std::endl;
    std::cin >> kas;

    ////////////////////////Tikrinam, ar gerai ivesti duomenys////////////////////////////

    while(!std::cin || kas!="vidurkis" && kas!="mediana" )
    {
        std::cout<<"Ivestas netinkamas dydis, pasirinkite vidurkis ar mediana: ";
        std::cin>>kas;

        if(kas=="vidurkis" && kas=="mediana" )
        {
            break;
        }
    }


    std::string kaip;
    std::cout << "Namu darbu resultatai random ar ne(Ivesti 'random' / 'nerandom')? " << std::endl;
    std::cin >> kaip;

    ////////////////////////Tikrinam, ar gerai ivesti duomenys////////////////////////////

    while(!std::cin || kaip!="random" && kaip!="nerandom" )
    {
        std::cout<<"Ivestas netinkamas dydis, pasirinkite random ar nerandom: ";
        std::cin>>kaip;

        if(kaip=="random" && kaip=="nerandom" )
        {
            break;
        }
    }
    //////////////////////////Baigiam tikrinti/////////////////////////////////////


    ////////////////////////////////Duomenu ivedimas ir skaiciavimai //////////////////////////////////
    for (int i = 0; i < m; i++)
    {
        std::cout << "Iveskite "<< i + 1 << " studento varda ir pavarde " << std::endl;
        std::cin >> studentas[i].vardas >> studentas[i].pavarde;


        std::vector<int> vektorius;
            int nd;
            int kiek = 0;

        if (kaip == "nerandom")

        {
            std::cout << "Iveskite namu darbu rezultatus (desimtbaleje sistemoje)" << std::endl;

            int tmp = 1;
            for(int j = 0; j < tmp; j++)
            {
                std::cin >> nd;
                ArSkaiciusTinkamas(nd, 0, 10);
                if (nd == 0)
                    tmp = 0;
                    else
                    {
                    vektorius.push_back(nd);
                    }
                    ndsum = accumulate(vektorius.begin(), vektorius.end(), 0);
                    tmp++;
                    kiek++;
            }

            std::cout << "Iveskite " << i+1 << " studento egzamino rezultata (desimtbaleje sistemoje)" << std::endl;
            std::cin >> egz;
            while(egz <=0 || !std::cin || egz>10 )
            {
                if(std::cin.fail() || egz <=0 || egz>10 )
                {
                    std::cin.clear();
                    std::cin.ignore(std::numeric_limits<std::streamsize>::max(),'\n');
                    std::cout<<"Ivestas netinkamas dydis, bandykite dar karta: ";
                    std::cin>>egz;
                }
            }
        }

        if(kaip == "random")
        {
            srand(time(NULL));
            int galas=0; int kiekis;
            ndsum = 0;
            std::cout << "Generuojamu pazymiu kiekis: "; std::cin >> kiekis;
            ArSkaiciusTinkamas (kiekis, 1, daugiausia);
            std::cout << "Namu darbu balai: " ;
                do
                {
                    vektorius.push_back(1+(double)rand ()/ RAND_MAX * 10);
                    std::cout  << vektorius[kiek]<<" " ;
                    /// apskaiciuojama sugeneruoto vektoriaus elementu suma
                    ndsum = accumulate(vektorius.begin(), vektorius.end(), 0);
                    kiekis--;
                    kiek++;
                } while (galas != kiekis);
            egz = (1 + rand() % 10);
            std::cout << "Egzamino balas: " << egz << std::endl;
        }
        std::cout << std::endl;

        ndvid = ndsum / (kiek - 1);
        if (kas == "vidurkis")
        {
            studentas[i].galutinis = 0.4 * ndvid + 0.6 * egz;
        }
        else studentas[i].galutinis = 0.4 * rastimediana(vektorius) + 0.6 * egz;
    }





    ///////////////////////////////////Rezultatu isvedimas///////////////////////////////////////////////

    if (kas == "vidurkis") std::cout << "Pavarde \t Vardas \t Galutinis (Vid.)" << std::endl;
    else std::cout << "Pavarde \t Vardas \t Galutinis (Med.)" << std::endl;
    std::cout << "-----------------------------------------------------------" << std::endl;
    for (int i = 0; i < m; i++)
    {
        std::cout << studentas[i].pavarde << " \t" << studentas[i].vardas << " \t" << std::fixed << std::setprecision(2) <<
        studentas[i].galutinis << " \t " << std::endl;
    }
    /////////////////////////////////////////////////////////////////////////////////////////////////////
    return 0;
}

