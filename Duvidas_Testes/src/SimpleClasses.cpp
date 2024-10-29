#include "SimpleClasses.hpp"

C::C(int element){
    std::cout << "Construtor padrao chamado" << std::endl;
    setElement(element);
}

C::C(const C& other){
    std::cout << "Construtor de copia chamado" << std::endl;

    for(int i = 0; i < vetor.size(); ++i){
        (*vetor[i]) = element; 
    }
}

C::~C(){
    for(int i = 0; i < vetor.size(); ++i){
        delete vetor[i];
    }
}

void C::afficher(){
    for(int i = 0; i < vetor.size(); ++i){
         std::cout << *vetor[i] << ", " << vetor[i] << std::endl;
    }
    std::cout << std::endl;
}

void C::setElement(int element){
    for(int i = 0; i < vetor.size(); ++i){
        (*vetor[i]) = element; 
    }
}