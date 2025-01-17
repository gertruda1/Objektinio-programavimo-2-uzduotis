#ifndef ANTRASTES_VEKTORIUS_H_INCLUDED
#define ANTRASTES_VEKTORIUS_H_INCLUDED


#include <iostream>
#include <string>
#include <limits>
#include <iomanip>
#include <algorithm>
#include <vector>
#include <numeric>
#include <fstream>
#include <cctype>
#include <random>
#include <chrono>

#define daugiausia 50


struct student;
class Rand_int;

void ArSkaiciusTinkamas (int& skaicius, int pradzia, int pabaiga);
double rastimediana (std::vector<int> vekt);
bool compareAlphabet(student a, student b);
bool rikiuojam_pagal_balaD(student a, student  b);
void spausdinimas(std::vector<student> a, std::string b);
void spausdinimas(std::vector<student> kiet, std::vector<student> vargs, std::string b);
void failugeneravimas (int a, int b);
void failugeneravimas1000 (int a);
void failugeneravimas10000 (int a);
void failugeneravimas100000 (int a);
void failugeneravimas1000000 (int a);
void failugeneravimas10000000 (int a);
void skaitymas_is_failo (int egz, std::string kas, double ndvid, double ndsum, std::vector<student> &studentas);
void pirmine_apklausa (std::string &kas, std::string &ar_generuoti, std::string &duomenu_ivedimas,
 int &koki_faila_generuoti, int &kiek_nd, int &strategija);
void paskirstymas (std::vector<student> &a);
void paskirstymas2 (std::vector<student> &a, std::vector<student> &kiet);
void paskirstymas1 (std::vector<student> &a, std::vector<student> &vargs, std::vector<student> &kiet);
void F_duomenu_ivedimas(double ndsum, int egz, double ndvid, std::string kas, std::vector<student> &studentas);
void koks_konteineris (char& simbolis, char pirmas, char antras, char trecias);
void vektorius ();

#endif // ANTRASTES_VEKTORIUS_H_INCLUDED