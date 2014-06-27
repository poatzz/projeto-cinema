#include "header/Sala.hpp"

#include "../libraries/cplusplus/data_structures/ListaDinamica.hpp"
#include "header/Fileira.hpp"
#include "enumeration/Situacao.hpp"

template <class Fileira>
Sala<Fileira>::Sala(unsigned int numSala, unsigned int capacidade) :  _numSala(numSala), _capacidade(capacidade) { }

template <class Fileira>
unsigned int Sala<Fileira>::getCapacidade() const {
  return Sala<Fileira>::_capacidade;
}

template <class Fileira>
void Sala<Fileira>::setCapacidade(unsigned int capacidade) {
  Sala<Fileira>::_capacidade = capacidade;
}

template <class Fileira>
unsigned int Sala<Fileira>::getNumSala() const {
  return Sala<Fileira>::_numSala;
}

template <class Fileira>
void Sala<Fileira>::setNumSala(unsigned int numSala) {
  Sala<Fileira>::_numSala = numSala;

}

template <class Fileira>
Situacao Sala<Fileira>::getSituacao() const {
  return Sala<Fileira>::_situacao;
}

template <class Fileira>
void Sala<Fileira>::setSituacao(Situacao situacao) {
  Sala<Fileira>::_situacao = situacao;
}

