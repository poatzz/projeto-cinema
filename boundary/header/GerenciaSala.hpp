#ifndef __GERENCIASALA_HPP_

#define __GERENCIASALA_HPP_

#include "GerenciaGenerico.hpp"

#include <string>

#include "../../control/header/GerenciarGenerico.hpp"

class GerenciaSala : public GerenciaGenerico.hpp {

  protected:
    virtual void mostrarAdicionar();
    virtual void mostrarAlterar();
    virtual void mostrarConsultar();
    virtual void mostrarDeletar();
    virtual void mostrarListar();

  public:
    virtual ~GerenciaSala();
};

#endif /* __GERENCIASALA_HPP_ */
