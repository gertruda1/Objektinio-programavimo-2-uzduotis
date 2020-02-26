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

#define daugiausia 50


struct student;

void ArSkaiciusTinkamas (int& skaicius, int pradzia, int pabaiga);
double rastimediana (std::vector<int> vekt);
bool compareAlphabet(student a, student b);
void spausdinimas(std::vector<student> a, std::string b);
void spausdinimas (student* a, std::string b, int m);



#endif // ANTRASTES_H_INCLUDED
