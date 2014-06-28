#ifndef __GERENCIASESSAO_HPP_

#define __GERENCIASESSAO_HPP_

#include "GerenciaGenerico.hpp"

#include <string>

#include "../../control/header/GerenciarGenerico.hpp"

class GerenciaSessao : public GerenciaGenerico.hpp {

  protected:
    virtual void mostrarAdicionar();
    virtual void mostrarAlterar();
    virtual void mostrarConsultar();
    virtual void mostrarDeletar();
    virtual void mostrarListar();

  public:
    virtual ~GerenciaSessao();
};

#endif /* __GERENCIASESSAO_HPP_ */
