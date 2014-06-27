#include "header/Assento.hpp"

Assento::Assento(int idAssento) {
  _idAssento = idAssento;
}

int Assento::getIdAssento() const {
  return _idAssento;
}

bool Assento::getDisponibilidade() const {
  return _disponibilidade;
}

void Assento::setDiponibilidade(bool disponibilidade) {
  _disponibilidade = disponibilidade;
}
