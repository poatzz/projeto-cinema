#ifndef __GERENCIAGENERICO_HPP_

#define __GERENCIAGENERICO_HPP_

#include <string>

#include "../../control/header/GerenciarGenerico.hpp"

class GerenciaGenerico {
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
    virtual ~GerenciarGenerico();
    static GerenciarGenerico * criarGerencia(std::string titulo, GerenciarGenerico controle);
    void mostrar();
};

#endif /* __GERENCIAGENERICO_HPP_ */
