#ifndef __VENDA_HPP_

#define __VENDA_HPP_

class Venda {
  private:
    Data _data;
    double _valorTotal;
    FormaPagto _formaPagto;
    bool _cancelada;
    ListaDinamica<Ingresso> _ingressos;
    void emitirIngressos();

  public:
    Venda(Data data);
    Data getData() const;
    double getValorTotal() const;
    void calcularValorTotal();
    FormaPagto getFormaPagto() const;
    void setFormaPagto(FormaPagto _pagamento);
    bool getCancelada() const;
    void cancelar();
    void fechar();
    void addIngresso(Ingresso ingresso);
//    Ingresso removeIngresso();
};

#endif /* __VENDA_HPP_ */
