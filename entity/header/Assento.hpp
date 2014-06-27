#ifdef __ASSENTO_H_

#define __ASSENTO_H_

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

#endif /* __ASSENTO_H_ */
