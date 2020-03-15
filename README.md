# Objektinio-programavimo-2-uzduotis

Programa, nuskaitanti duomenis apie studentus ir apskaičiuojanti jų mokslo rezultatus

# Programos naudojimas ir veikimas

Vartotojo veiksmų seka:

1) Vartotojas pasirenka, kuriame konteineryje bus saugomi duomenys (vector, list, deque).
2) Vartotojas pasirenka, pagal ką bus skaučiuojams studneto galutinis balas (pagal namų darbų vidurkį ar medianą).
3) Vartotojas pasirenka, ar generuoti naują failą su studentų duomenimis, ar ne.

Jei taip:

  4) Vartotojas pasirenka, kelių studentų duomenys tame faile bus (1000, 10000, 100000, 1000000, 10000000).
  5) Toliau vartotojas pasirenka, kiek vienas studentas turės namų darbų rezultatų (nuo 1 iki 50).
  6) Pasirinkdamas, kad failus programa sugeneruotų pati, vartotojas automatiškai sutinka, kad visi šie duomenys toliau bus nuskaityti ir  iš jų bus išvestas rezultatas.
  
Jei ne:

  4) Vartotojas pasirenka, ar duomenis nori pats įvesti, ar kad programa nuskaitytų nuo jau esančio failo. 
  
  Jei programa nuskaito failą, tai ji išveda rezultatus. Jei pasirenkama įvesti rankiniu būdų visus studentų duomenis, toliau eina tokia vartotojo veiksmų seka:
  
  5) Vartotojas įveda, kiek iš viso bus studentų.
  6) Vartotojas pasirenka, ar namų darbų bei egzamino rezultatus nori suvesti pats, ar kad programa tuos rezultatus sugeneruotų random.
  
 Jei random:
 
 7) Vartotojas suveda kiekvieno studento vardą ir pavardę.
 8) Vartotojas pasirenka, kiek bus generuojama namų darbų rezultatų (nuo 1 iki 50).
 9) Vartotojas gauna rezultatus
 
 Jei pažymiai bus ne random:
 
 7) Vartotojas suveda kiekvieno studento vardą.
 8) Vartotojas suveda kiekvieno studento namų darbų pažymius (Jei jis jau suvedė visus pažymius, turi įvesti 0)
 9) Vartotojas įveda studento egzamino balą
 10) Vartotojas gauna rezultatą.
 
 
 Po visos šios veiksmų sekos atspausdinami 2 .txt failai pagal galutinio balo rezultatą. Jei galutinis balas < 5, studento duomenys (vardas, pavardė) ir rezultatai išvedami į ("vargsiukai.txt") failą, o jei rezultatai >= 5, tai studento duomenys bei rezultatai išvedami į ("kietuoliai.txt") failą.
 
 Galutinio rezultato formulės:

    Galutinis rezultatas = (namų darbų vidurkis) * 0.4 + (egzamino balas) * 0.6;
    Galutinis rezultatas = (namų darbų mediana) * 0.4 + (egzamino balas) * 0.6;

# Programos veikimo spartos analizė

Išmatuotas laikas pateikiamas sekundėmis. Namų darbų kiekis sugeneruotuose failuose - 3.

 | Duomenų kiekis | Duomenų failo generavimas | Duomenų failo skaitymas | Studentų rūšiavimas | Duomenų spausdinimas |
 |----------------|---------------------------|-------------------------|---------------------|----------------------|
 | 1000 | 0.040117 | 0.019702 | 0 | 0.010025 |
 | 10000 | 0.049145 | 0.229971 | 0 | 0.060223 |
 | 100000 | 0.390096 | 2.88993 | 0.020137 | 0.589707 |
 | 1000000 | 3.80589 | 37.9099 | 0.135065 | 6.92016 |
 | 10000000 | 42.7737 | 534.582 | 1.17489 | 64.5651 |
 
 # Releases
 
 [**v0.1**](https://github.com/gertruda1/Objektinio-programavimo-2-uzduotis/releases/tag/v.0.1)
 
 [**v0.2**](https://github.com/gertruda1/Objektinio-programavimo-2-uzduotis/releases/tag/v0.2)
 
 [**v0.3**](https://github.com/gertruda1/Objektinio-programavimo-2-uzduotis/releases/tag/v0.3)
 
 [**v0.4**](https://github.com/gertruda1/Objektinio-programavimo-2-uzduotis/releases/tag/v0.4)
 
 [**v0.5**](https://github.com/gertruda1/Objektinio-programavimo-2-uzduotis/releases/tag/v0.5)
 
 
