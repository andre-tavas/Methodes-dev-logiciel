#ifndef ECHANTILLON_HPP_ASUDUSYAGASD
#define ECHANTILLON_HPP_ASUDUSYAGASD

#include <vector>

class Echantillon{
    private:
        std::vector<double> vector;
        

    public:
        Echantillon() {}
        unsigned getTaille() const { return vector.size(); }
        void ajouter(double n) {vector.push_back(n); }

};

#endif