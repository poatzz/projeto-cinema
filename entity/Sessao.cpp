#include <map>

#include "header/Sessao.hpp"

#include "../libraries/cplusplus/data_structures/PilhaDinamica.hpp"
#include "../libraries/cplusplus/utilities/Data.hpp"
#include "../libraries/cplusplus/utilities/Hora.hpp"
#include "header/Filme.hpp"
#include "header/Sala.hpp"
#include "header/Fileira.hpp"

template <class Hora, class Fileira, class EquipeFilme>
Sessao<Hora, Fileira, EquipeFilme>::Sessao(Data data) {
}

template <class Hora, class Fileira, class EquipeFilme>
Filme<EquipeFilme> Sessao<Hora, Fileira, EquipeFilme>::getFilme() const {
  return _filme;
}

template <class Hora, class Fileira, class EquipeFilme>
void Sessao<Hora, Fileira, EquipeFilme>::setFilme(Filme<EquipeFilme> filme) {
}

template <class Hora, class Fileira, class EquipeFilme>
Sala<Fileira> Sessao<Hora, Fileira, EquipeFilme>::getSalas() const {
  return _salas;
}

template <class Hora, class Fileira, class EquipeFilme>
void Sessao<Hora, Fileira, EquipeFilme>::setSalas(Sala<Fileira> sala) {
}

template <class Hora, class Fileira, class EquipeFilme>
PilhaDinamica<Hora> Sessao<Hora, Fileira, EquipeFilme>::getHorarios() const {
  return _horarios;
}

template <class Hora, class Fileira, class EquipeFilme>
void Sessao<Hora, Fileira, EquipeFilme>::setHorario(Hora gorario) {
}

template <class Hora, class Fileira, class EquipeFilme>
unsigned int Sessao<Hora, Fileira, EquipeFilme>::getNumVendidos(Hora horario) const {
  return 0;
}

template <class Hora, class Fileira, class EquipeFilme>
void Sessao<Hora, Fileira, EquipeFilme>::setNumVendidos(Hora horario, unsigned int quantidade) {
}

template <class Hora, class Fileira, class EquipeFilme>
Data Sessao<Hora, Fileira, EquipeFilme>::getData() const {
  return _data;
}

template <class Hora, class Fileira, class EquipeFilme>
bool Sessao<Hora, Fileira, EquipeFilme>::getEncerrada() const {
  return _encerrada;
}

template <class Hora, class Fileira, class EquipeFilme>
void Sessao<Hora, Fileira, EquipeFilme>::setEncerrada(bool encerrada) {
}

