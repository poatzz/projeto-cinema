#ifndef __GERENCIAVENDA_HPP_

#define __GERENCIAVENDA_HPP_

#include "GerenciaGenerico.hpp"

#include <string>

#include "../../control/header/GerenciarGenerico.hpp"

class GerenciaVenda : public GerenciaGenerico.hpp {

  protected:
    virtual void mostrarAdicionar();
    virtual void mostrarAlterar();
    virtual void mostrarConsultar();
    virtual void mostrarDeletar();
    virtual void mostrarListar();

  public:
    virtual ~GerenciaVenda();
};

#endif /* __GERENCIAVENDA_HPP_ */
