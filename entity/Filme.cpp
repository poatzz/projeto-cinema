#include <string>

#include "header/Filme.hpp"

#include "../libraries/cplusplus/data_structures/ListaDinamica.hpp"
#include "../libraries/cplusplus/data_structures/NoLista.hpp"
#include "../libraries/cplusplus/utilities/Hora.hpp"
#include "enumeration/Genero.hpp"
#include "header/EquipeFilme.hpp"

using std::string;

template<class EquipeFilme>
Filme<EquipeFilme>::Filme(string titulo, unsigned short censura, Hora duracao, Genero genero) : _titulo(titulo), _censura(censura), _duracao(duracao), _genero(genero) { }

template<class EquipeFilme>
string Filme<EquipeFilme>::getTitulo() const {
  return _titulo;
}

template<class EquipeFilme>
unsigned short Filme<EquipeFilme>::getCensura() const {
  return _censura;
}

template<class EquipeFilme>
Hora Filme<EquipeFilme>::getDuracao() const {
  return _duracao;
}

template<class EquipeFilme>
Genero Filme<EquipeFilme>::getGenero() const {
  return _genero;
}

template<class EquipeFilme>
ListaDinamica<EquipeFilme> Filme<EquipeFilme>::getEquipe() const {
  return _equipe;
}

template<class EquipeFilme>
void Filme<EquipeFilme>::addEquipe(EquipeFilme * equipe) {
  _equipe.insereOrdenado(equipe);
}

template<class EquipeFilme>
void Filme<EquipeFilme>::removeEquipe(string nomeEquipe) {
  NoLista<EquipeFilme> * equipe;

  for (equipe = _equipe._primeiro; equipe != NULL; equipe = equipe->proximo)
    if (equipe->getElemento()->getNome() == nomeEquipe)
      break;

  delete equipe;
}

