#ifndef __FILME_HPP_

#define __FILME_HPP_

#include <string>

#include "../../libraries/cplusplus/data_structures/ListaDinamica.hpp"
#include "../../libraries/cplusplus/utilities/Hora.hpp"
#include "../enumeration/Genero.hpp"
#include "EquipeFilme.hpp"

using std::string;

template<class EquipeFilme>
class Filme {
  private:
    string _titulo;
    unsigned short _censura;
    Hora _duracao;
    Genero _genero;
    ListaDinamica<EquipeFilme> _equipe;

  public:
    Filme(string titulo, unsigned short censura, Hora duracao, Genero genero);
    string getTitulo() const;
    unsigned short getCensura() const;
    Hora getDuracao() const;
    Genero getGenero() const;
    ListaDinamica<EquipeFilme> getEquipe() const;
    void addEquipe(EquipeFilme * equipe);
    void removeEquipe(string nomeEquipe);
};

#endif /* __FILME_HPP_ */
