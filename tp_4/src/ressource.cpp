#include "ressource.hpp"

std::ostream& operator<<(std::ostream& out, const ressources_t& ressources){
    for (const std::weak_ptr<Ressource>& ressource : ressources){
        auto r = ressource.lock();
        if (r) {
            out << r->getStock() << " ";
        } else {
            out << "-" << " ";
        }
    }
    return out;
}