#ifndef __INGRESSO_HPP_

#define __INGRESSO_HPP_

#include <string>

#include "../enumeration/Tipo.hpp"
#include "Sessao.hpp"

using std::string;

template <class Hora, class Fileira, class EquipeFilme>
class Ingresso {
  public:
    Sessao<Hora, Fileira, EquipeFilme> _sessao;
    double _valor;
    Tipo _tipo;
    string _poltrona;

  private:
    Ingresso(Sessao<Hora, Fileira, EquipeFilme> sessao);
    Sessao<Hora, Fileira, EquipeFilme> getSessao() const;
    double getValor() const;
    void setValor(double valor);
    Tipo getTipo() const;
    void setTipo(Tipo tipo);
    string getPoltrona() const;
    void setPoltrona(string poltrona);
};

#endif /* __INGRESSO_HPP_ */
