#ifndef SALA_H

#define SALA_H

namespace entity
{
  class Sala
  {
    private:
      int capacidade;
      int numSala;
      Situacao situacao;
      
    public:
      int
      getCapacidade():
      
      int
      getNumSala();
      
      Situacao
      getSituacao();
      
      void
      setCapacidade(int);
      
      void
      setNumSala(int);
      
      void
      setSituacao(Situacao);
  };
};

#endif
