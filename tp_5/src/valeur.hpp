#ifndef VALEUR_HPP_ASDSAD
#define VALEUR_HPP_ASDSAD

#include <iostream>

class Valeur{
    private:
        double note;
        std::string etudiant;
    
    public:
        Valeur(double v=0, std::string n = "inconnu") : note(v), etudiant(n) {}
        
        double getNombre() const { return note; }
        double getNote() const { return note; }
        std::string getEtudiant() const { return etudiant; }
        
        void setNombre(double n) { note = n; }
        void setNote(double n) { note = n; }
        void setEtudiant(std::string n) { etudiant = n; }


};

#endif