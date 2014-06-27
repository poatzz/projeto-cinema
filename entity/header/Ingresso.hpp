#ifndef __INGRESSO_HPP_

#define __INGRESSO_HPP_

#include "../enumeration/Tipo.hpp"
#include "Sessao.hpp"

template <class Hora, class Fileira, class EquipeFilme>
class Ingresso {
  public:
    Sessao<Hora, Fileira, EquipeFilme> _sessao;
    double _valor;
    Tipo _tipo;
    char _poltrona[2];

  private:
    Ingresso(Sessao<Hora, Fileira, EquipeFilme> _sessao);
    Sessao<Hora, Fileira, EquipeFilme> getSessao() const;
    double getValor() const;
    void setValor(double valor);
    Tipo getTipo() const;
    void setTipo(Tipo tipo);
    char* getPoltrona() const;
    void setPoltrona(char poltrona[2]);
};

#endif /* __INGRESSO_HPP_ */
