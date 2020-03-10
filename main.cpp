#include "antrastes.h"
#include "antrastes2.h"


int main ()
{
    double ndvid, ndsum = 0;
    std::string kas;
    std::string ar_generuoti;
    std::string duomenu_ivedimas;
    int koki_faila_generuoti, egz, kiek_nd;
    std::vector<student> studentas;
    pirmine_apklausa(kas, ar_generuoti, duomenu_ivedimas, koki_faila_generuoti, kiek_nd);
    
    if(ar_generuoti == "generuoti")
    {
        auto start = std::chrono::high_resolution_clock::now();
        failugeneravimas(koki_faila_generuoti, kiek_nd);
        auto end = std::chrono::high_resolution_clock::now();
        std::chrono::duration<double> diff = end-start;
        std::cout << koki_faila_generuoti << " Irasu failo generavimo laikas: " << diff.count() << std::endl;

        start = std::chrono::high_resolution_clock::now();
        skaitymas_is_failo(egz, kas, ndvid, ndsum, studentas);
        end = std::chrono::high_resolution_clock::now();
        diff = end-start;
        std::cout << koki_faila_generuoti << " Irasu failo nuskaitymo laikas: " << diff.count() << std::endl;

        start = std::chrono::high_resolution_clock::now();
        paskirstymas(studentas);
        end = std::chrono::high_resolution_clock::now();
        diff = end-start;
        std::cout << koki_faila_generuoti << " Irasu dalijimo i dvi grupes laikas: " << diff.count() << std::endl;

        start = std::chrono::high_resolution_clock::now();
        spausdinimas(studentas, kas);
        end = std::chrono::high_resolution_clock::now();
        diff = end-start;
        std::cout << koki_faila_generuoti << " Irasu spausdinimo laikas: " << diff.count() << std::endl;
    }


    if (duomenu_ivedimas == "nuskaityti")
    {
        skaitymas_is_failo(egz, kas, ndvid, ndsum, studentas);
        paskirstymas(studentas);
        spausdinimas(studentas, kas);
    }

    ///////////////Duomenu ivedimas/////////////////////
    if(duomenu_ivedimas == "ivesti")
    {
        F_duomenu_ivedimas(ndsum, egz, ndvid, kas, studentas);
        paskirstymas (studentas);
        spausdinimas(studentas, kas);
    }
    return 0;
}