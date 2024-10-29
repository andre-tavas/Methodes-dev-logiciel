#include "exception.hpp"

const char * ExceptionChaine::what() const noexcept {

    return message.c_str();
}