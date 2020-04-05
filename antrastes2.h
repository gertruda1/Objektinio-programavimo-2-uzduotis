#ifndef ANTRASTES2_H_INCLUDED
#define ANTRASTES2_H_INCLUDED

struct student
{
    std::string vardas, pavarde;
    double galutinis;
    std::string grupe;
};

class Rand_int
{
    public:
        Rand_int(int low, int high): mt{rd()}, dist{low, high} {}
        int operator()() {return dist(mt);}
    private:
        std::random_device rd;
        std::mt19937 mt;
        std::uniform_int_distribution<int> dist;
};

#endif // ANTRASTES2_H_INCLUDED