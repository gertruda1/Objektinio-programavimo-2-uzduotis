#include "antrastes.h"
#include "antrastes2.h"


int main ()
{
    double ndvid, ndsum = 0;
    std::string kas;
    std::string ar_generuoti;
    std::string duomenu_ivedimas;#include "antrastes.h"
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
    }
        if(duomenu_ivedimas == "nuskaityti" || ar_generuoti == "generuoti")
        {
                    int nd_kiekis_faile = 0;
        std::ifstream duom ("kursiokai.txt");

        auto start_skaitymas = std::chrono::high_resolution_clock::now();
        skaitymas_is_failo_1(nd_kiekis_faile, egz, kas, ndvid, ndsum, studentas, duom);
        auto end_skaitymas = std::chrono::high_resolution_clock::now();
        std::chrono::duration<double> diff_skaitymas = end_skaitymas - start_skaitymas;

        auto start_paskirstymas = std::chrono::high_resolution_clock::now();
        paskirstymas(studentas);
        auto end_paskirstymas = std::chrono::high_resolution_clock::now();
        std::chrono::duration<double> diff_paskirstymas = end_paskirstymas - start_paskirstymas;
        
        std::ofstream rez1 ("vargsiukai.txt");
        std::ofstream rez2 ("kietiakai.txt");

        auto start_spausdinimas = std::chrono::high_resolution_clock::now();
        spausdinimas_1(studentas, kas, rez1, rez2);
        auto end_spausdinimas = std::chrono::high_resolution_clock::now();
        std::chrono::duration<double> diff_spausdinimas = end_spausdinimas - start_spausdinimas;

        studentas.clear();
        if (!duom.eof())
        {
            start_skaitymas = std::chrono::high_resolution_clock::now();
            skaitymas_is_failo_2(nd_kiekis_faile, egz, ndsum, ndvid, kas, studentas, duom);
            end_skaitymas = std::chrono::high_resolution_clock::now();
            diff_skaitymas += end_skaitymas - start_skaitymas;

            start_paskirstymas = std::chrono::high_resolution_clock::now();
            paskirstymas(studentas);
            end_paskirstymas = std::chrono::high_resolution_clock::now();
            diff_paskirstymas += end_paskirstymas - start_paskirstymas;

            start_spausdinimas = std::chrono::high_resolution_clock::now();
            spausdinimas_2(studentas, rez1, rez2);
            end_spausdinimas = std::chrono::high_resolution_clock::now();
            diff_spausdinimas += end_spausdinimas - start_spausdinimas;
        }
        

        duom.close();
        rez1.close();
        rez2.close();

        std::cout << koki_faila_generuoti << " Irasu failo nuskaitymo laikas: " << diff_skaitymas.count() << std::endl;
        std::cout << koki_faila_generuoti << " Irasu dalijimo i dvi grupes laikas: " << diff_paskirstymas.count() << std::endl;
        std::cout << koki_faila_generuoti << " Irasu spausdinimo laikas: " << diff_spausdinimas.count() << std::endl;
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
