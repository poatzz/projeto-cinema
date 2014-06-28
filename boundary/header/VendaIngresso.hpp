#ifndef __VENDAINGRESSO_HPP_

#define __VENDAINGRESSO_HPP_

#include <string>

#include "../../control/header/GerenciarGenerico.hpp"

class VendaIngresso {
  private:
    std::string _titulo;
    short _opcao;
    GerenciarGenerico * _controle;
    GerenciarGenerico(std::string titulo, const GerenciarGenerico & controle);

  protected:
    virtual void mostrarAdicionar() = 0;
    virtual void mostrarAlterar() = 0;
    virtual void mostrarConsultar() = 0;
    virtual void mostrarDeletar() = 0;
    virtual void mostrarListar() = 0;

  public:
    VendaIngresso();
    virtual ~VendaIngresso();
    void mostrar();
};

#endif /* __VENDAINGRESSO_HPP_ */
