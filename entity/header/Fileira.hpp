#ifndef __FILEIRA_HPP_

#define __FILEIRA_HPP_

#include "../../libraries/cplusplus/data_structures/FilaEstatica.hpp"
#include "Assento.hpp"

template <class Assento>
class Fileira {
  private:
    char _idFileira;
    FilaEstatica<Assento> _assentos;
  
  public:
    Fileira(char id);
};

#endif /* __FILEIRA_HPP_ */
