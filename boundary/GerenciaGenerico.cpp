#include "header/GerenciaGenerico.hpp"
#include "header/GerenciaEquipe.hpp"
#include "header/GerenciaFilme.hpp"
#include "header/GerenciaSala.hpp"
#include "header/GerenciaSessao.hpp"
#include "header/GerenciaVenda.hpp"

#include <iostream>

using std::cout;
using std::endl;

GerenciarGenerico::GerenciarGenerico(std::string titulo, const GerenciarGenerico & controle) {
  GerenciarGenerico::_titulo = titulo;
  GerenciarGenerico::_controle = controle;
}

static GerenciaGenerico * GerenciaGenerico::criarGerencia(std::string titulo, const GerenciarGenerico & controle) {
  GerenciaGenerico * ret;

  if (typeid(GerenciaEquipe) == typeid(dynamic_cast<GerenciaEquipe> controle))
    ret = new GerenciaEquipe(titulo, controle);
  else if (typeid(GerenciaFilme) == typeid(dynamic_cast<GerenciaFilme> controle))
    ret = new GerenciaFilme(titulo, controle);
  else if (typeid(GerenciaSala) == typeid(dynamic_cast<GerenciaSala> controle))
    ret = new GerenciaSala(titulo, controle);
  else if (typeid(GerenciaSessao) == typeid(dynamic_cast<GerenciaSessao> controle))
    ret = new GerenciaSessao(titulo, controle);
  else if (typeid(GerenciaVenda) == typeid(dynamic_cast<GerenciaVenda> controle))
    ret = new GerenciaVenda(titulo, controle);

  return ret;
}

void GerenciaGenerico::mostrar() {
  while (true) {
    cout << endl << endl << endl;
    cout << "########## " << GerenciaGenerico::_titulo << " ##########" << endl;
    cout << endl;
    cout << "        1 - Adicionar                        " << endl;
    cout << "        2 - Alterar                          " << endl;
    cout << "        3 - Deletar                          " << endl;
    cout << "        4 - Consultar                        " << endl;
    cout << "        5 - Listar                           " << endl;
    cout << endl;
    cout << "        0 - Voltar                           " << endl;
    cout << endl << endl;
    cout << "              Opcao: ";
    std::cin >> GerenciaGenerico::_opcao;

    switch (GerenciaGenerico::_opcao) {
      case 1: // Adicionar
        GerenciaGenerico::mostrarAdicionar();
        break;
      case 2: // Alterar
        GerenciaGenerico::mostrarAlterar();
        break;
      case 3: // Deletar
        GerenciaGenerico::mostrarDeletar();
        break;
      case 4: // Consultar
        GerenciaGenerico::mostrarConsultar();
        break;
      case 5: // Listar
        GerenciaGenerico::mostrarListar();
        break;
      case 0: // Voltar
        return;
      default :
        cout << "Opcao invalida!" << endl;
        break;
    }
  }
}
