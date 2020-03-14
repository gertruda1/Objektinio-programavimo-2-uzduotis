#ifndef ANTRASTES_H_INCLUDED
#define ANTRASTES_H_INCLUDED


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
void spausdinimas(std::vector<student> a, std::string b);
void failugeneravimas (int a, int b);
void failugeneravimas1000 (int a);
void failugeneravimas10000 (int a);
void failugeneravimas100000 (int a);
void failugeneravimas1000000 (int a);#ifndef ANTRASTES_H_INCLUDED

#endif // ANTRASTES_H_INCLUDED
