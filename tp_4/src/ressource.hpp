#ifndef RESSOURCE_HPP
#define RESSOURCE_HPP

class Ressource{
    private:
        int stock;

    public:
        Ressource(int s) : stock(s) {}
        int getStock() const { return stock;}
        void consommer(int n) { stock -= n; }
        
};

#endif