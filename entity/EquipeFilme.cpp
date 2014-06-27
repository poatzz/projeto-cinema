#include <string>

#include "header/EquipeFilme.hpp"

#include "enumeration/Papel.hpp"

using std::string;

EquipeFilme::EquipeFilme(string nome, Papel papel) {
  _nome = nome;
  _papel = papel;
}

string EquipeFilme::getNome() const {
  return _nome;
}

Papel EquipeFilme::getPapel() const {
  return _papel;
}
