#ifndef __ASSENTO_HPP_

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

#endif /* __ASSENTO_HPP_ */
