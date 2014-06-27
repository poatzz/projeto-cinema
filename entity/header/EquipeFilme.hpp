#ifndef __EQUIPEFILME_HPP_

#define __EQUIPEFILME_HPP_

#include <string>

#include "../enumeration/Papel.hpp"

using std::string;

class EquipeFilme {
  private:
    string _nome;
    Papel _papel;

  public:
    EquipeFilme(string nome, Papel papel);
    string getNome() const;
    Papel getPapel() const;
};

#endif /* __EQUIPEFILME_HPP_ */
