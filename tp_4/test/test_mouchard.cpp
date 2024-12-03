// Entetes //---------------------------------------------------------------------------------------
#include <iostream>
#include <complexe.hpp>

// Fonction principale //---------------------------------------------------------------------------
int main(void) {
 complexe_t::stats();

 std::cout << std::endl << "complexe_t c1(1,2);" << std::endl;
 // CONSTRUTOR AD HOC
 complexe_t c1(1,2);
 complexe_t::stats();

 std::cout << std::endl << "complexe_t c2(3,4);" << std::endl;
 // CONSTRUTOR AD HOC
 complexe_t c2(3,4);
 complexe_t::stats();

 std::cout << std::endl << "complexe_t c3(c1);" << std::endl;
 // CONSTRUTOR COPIA
 complexe_t c3(c1); // COPIA E CONSTRUCAO
 complexe_t::stats();

 std::cout << std::endl << "complexe_t c4(std::move(c2));" << std::endl;
 // CONSTRUCTOR MOVEMENT
 complexe_t c4(std::move(c2)); // CONSTRUCAO E UM MOVIMENTO, NAO COPIA C2
 // faz o depouillement de c2?
 complexe_t::stats();

 std::cout << std::endl << "c3=c1;" << std::endl;
 // AFFECTATION PAR COPIE
 c3=c1; // CHAMA CONST COPIA E AFETACAO
 complexe_t::stats();

 std::cout << std::endl << "c4=complexe_t(5,6);" << std::endl;
 // CONSTRUCTEUR AD HOC ET AFFECTATION MOUVEMENT
 c4=complexe_t(5,6); // AFETACAO, CONSTRUCAO E MOVIMENTO
 complexe_t::stats();

 return 0;
}

// Fin //-------------------------------------------------------------------------------------------
