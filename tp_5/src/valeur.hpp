#ifndef VALEUR_HPP_ASDSAD
#define VALEUR_HPP_ASDSAD

class Valeur{
    private:
        double nombre;
    
    public:
        Valeur(double v=0) : nombre(v) {}
        double getNombre() const { return nombre; }
        void setNombre(double n) { nombre = n; }

};

#endif