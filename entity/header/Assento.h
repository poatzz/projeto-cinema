#ifdef ASSENTO_h

#define ASSENTO_H

namespace entity
{
  class Assento
  {
    public:
      int idAssento;
      int disponibilidade;
      char idFileira;
      
    private:
      boolean
      verificarDisponibilidade();
  };
};

#endif
