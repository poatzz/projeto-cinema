#ifndef __SESSAO_HPP_

#define __SESSAO_HPP_

#include <map>

#include "../../libraries/cplusplus/data_structures/PilhaDinamica.hpp"
#include "../../libraries/cplusplus/utilities/Data.hpp"
#include "../../libraries/cplusplus/utilities/Hora.hpp"
#include "Filme.hpp"
#include "Sala.hpp"
#include "Fileira.hpp"

template <class Hora, class Fileira, class EquipeFilme>
class Sessao {
  private:
    Filme<EquipeFilme> _filme;
    Sala<Fileira> _sala;
    std::map<Hora, unsigned int> _horarios;
    Data _data;
    bool _encerrada;

  public:
    Sessao(Data data);
    Filme<EquipeFilme> getFilme() const;
    void setFilme(Filme<EquipeFilme> filme);
    Sala<Fileira> getSala() const;
    void setSala(Sala<Fileira> sala);
    PilhaDinamica<Hora> getHorarios() const;
    void setHorario(Hora gorario);
    unsigned int getNumVendidos(Hora horario) const;
    void setNumVendidos(Hora horario, unsigned int quantidade);
    Data getData() const;
    bool getEncerrada() const;
    void setEncerrada(bool encerrada);
};

#endif /* __SESSAO_HPP_ */
