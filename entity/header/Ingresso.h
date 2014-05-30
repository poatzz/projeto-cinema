#include <ctime>

#ifnef INGRESSO_H

#define INGRESSO_H

namespace entity
{
  class Ingresso
  {
    public:
      time_t dtIngresso;
      double valor;
      
    private:
      time_t
      getDtIngresso();
      
      double
      getValor();
      
      void
      setDtIngresso(time_t);
      
      void
      setValor(double);
  };
};

#endif
