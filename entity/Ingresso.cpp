#include "header/Ingresso.hpp"

#include "enumeration/Tipo.hpp"
#include "header/Sessao.hpp"

template <class Hora, class Fileira, class EquipeFilme>
Ingresso<Hora, Fileira, EquipeFilme>::Ingresso(Sessao<Hora, Fileira, EquipeFilme> sessao) {
  Ingresso<Hora, Fileira, EquipeFilme>::_sessao = sessao;
}

template <class Hora, class Fileira, class EquipeFilme>
Sessao<Hora, Fileira, EquipeFilme> Ingresso<Hora, Fileira, EquipeFilme>::getSessao() const {
  return Ingresso<Hora, Fileira, EquipeFilme>::_sessao;
}

template <class Hora, class Fileira, class EquipeFilme>
double Ingresso<Hora, Fileira, EquipeFilme>::getValor() const {
  return Ingresso<Hora, Fileira, EquipeFilme>::_valor;
}

template <class Hora, class Fileira, class EquipeFilme>
void Ingresso<Hora, Fileira, EquipeFilme>::setValor(double valor) {
  Ingresso<Hora, Fileira, EquipeFilme>::_valor = valor;
}

template <class Hora, class Fileira, class EquipeFilme>
Tipo Ingresso<Hora, Fileira, EquipeFilme>::getTipo() const {
  return Ingresso<Hora, Fileira, EquipeFilme>::_tipo;
}

template <class Hora, class Fileira, class EquipeFilme>
void Ingresso<Hora, Fileira, EquipeFilme>::setTipo(Tipo tipo) {
  Ingresso<Hora, Fileira, EquipeFilme>::_tipo = tipo;
}

template <class Hora, class Fileira, class EquipeFilme>
string Ingresso<Hora, Fileira, EquipeFilme>::getPoltrona() const {
  return Ingresso<Hora, Fileira, EquipeFilme>::_poltrona;
}

template <class Hora, class Fileira, class EquipeFilme>
void Ingresso<Hora, Fileira, EquipeFilme>::setPoltrona(string poltrona) {
  Ingresso<Hora, Fileira, EquipeFilme>::_poltrona = poltrona;
}

