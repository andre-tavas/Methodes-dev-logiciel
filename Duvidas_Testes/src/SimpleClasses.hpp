#ifndef SIMPLECLASSES_hpp
#define SIMPLECLASSES_hpp

#include <vector>

class C{
    private:
        std::vector<int *> vetor(5);

    public:
        C(int element);
        C(const C& other);
        ~C();
        void afficher() const;
        void setElement(int element);
};

#endif