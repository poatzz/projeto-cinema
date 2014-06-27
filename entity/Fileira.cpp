#include "header/Fileira.hpp"

#include "../libraries/cplusplus/data_structures/FilaEstatica.hpp"
#include "header/Assento.hpp"

template <class Assento>
Fileira<Assento>::Fileira(char id) {
  Fileira<Assento>::_id = id;
}
