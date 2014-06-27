#ifndef __SALA_HPP_

#define __SALA_HPP_

#include "../../libraries/cplusplus/data_structures/ListaDinamica.hpp"
#include "Fileira.hpp"
#include "../enumeration/Situacao.hpp"

template <class Fileira>
class Sala {
  private:
    unsigned int _capacidade;
    unsigned int _numSala;
    Situacao _situacao;
    ListaDinamica<Fileira> _fileiras;

  public:
    Sala(unsigned int numSala, unsigned int capacidade = 200);
    unsigned int getCapacidade() const;
    void setCapacidade(unsigned int capacidade);
    unsigned int getNumSala() const;
    void setNumSala(unsigned int numSala);
    Situacao getSituacao() const;
    void setSituacao(Situacao situacao);
};

#endif /* __SALA_HPP_ */
