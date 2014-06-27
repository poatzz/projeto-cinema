#ifdef __ASSENTO_HPP_

#define __ASSENTO_HPP_

class Assento {
  private:
    int _idAssento;
    bool _disponibilidade;

  public:
    Assento(int idAssento);
    int getIdAssento() const;
    bool getDisponibilidade() const;
    void setDiponibilidade(bool disponibilidade);
};

Assento::Assento(int idAssento) {
  Assento::_idAssento = idAssento;
}

int Assento::getIdAssento() const {
  return Assento::_idAssento;
}

bool Assento::getDisponibilidade() const {
  return Assento::_disponibilidade;
}

void Assento::setDiponibilidade(bool disponibilidade) {
  Assento::_disponibilidade = disponibilidade;
}

#endif /* __ASSENTO_HPP_ */
