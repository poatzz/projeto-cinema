CC = g++
DEBUG = -g
CFLAGS = -Wall -c $(DEBUG)
LFLAGS = -Wall $(DEBUG)

ASSENTO = entity\/Assento.cpp
ASSENTOH = entity\/header\/Assento.hpp
EQUIPEFILME = .\/entity\/EquipeFilme.cpp
EQUIPEFILMEH = .\/entity\/header\/EquipeFilme.hpp
FILEIRA = .\/entity\/Fileira.cpp
FILEIRAH = .\/entity\/header\/Fileira.hpp
FILME = .\/entity\/Filme.cpp
FILMEH = .\/entity\/header\/Filme.hpp
INGRESSO = .\/entity\/Ingresso.cpp
INGRESSOH = .\/entity\/header\/Ingresso.hpp
SALA = .\/entity\/Sala.cpp
SALAH = .\/entity\/header\/Sala.hpp
SESSAO = .\/entity\/Sessao.cpp
SESSAOH = .\/entity\/header\/Sessao.hpp
VENDA = .\/entity\/Venda.cpp
VENDAH = .\/entity\/header\/Venda.hpp
GERENCIARGENERICO = .\/control\/GerenciarGenerico.cpp
GERENCIARGENERICOH = .\/control\/header\/GerenciarGenerico.hpp
GERENCIAREQUIPE = .\/control\/GerenciarEquipe.cpp
GERENCIAREQUIPEH = .\/control\/header\/GerenciarEquipe.hpp
GERENCIARFILME = .\/control\/GerenciarFilme.cpp
GERENCIARFILMEH = .\/control\/header\/GerenciarFilme.hpp
GERENCIARSALA = .\/control\/GerenciarSala.cpp
GERENCIARSALAH = .\/control\/header\/GerenciarSala.hpp
GERENCIARSESSAO = .\/control\/GerenciarSessao.cpp
GERENCIARSESSAOH = .\/control\/header\/GerenciarSessao.hpp
GERENCIARVENDA = .\/control\/GerenciarVenda.cpp
GERENCIARVENDAH = .\/control\/header\/GerenciarVenda.hpp
VENDERINGRESSO = .\/control\/VenderIngresso.cpp
VENDERINGRESSOH = .\/control\/header\/VenderIngresso.hpp
GERENCIAGENERICO = .\/boundary\/GerenciaGenerico.cpp
GERENCIAGENERICOH = .\/boundary\/header\/GerenciaGenerico.hpp
GERENCIAEQUIPE = .\/boundary\/GerenciaEquipe.cpp
GERENCIAEQUIPEH = .\/boundary\/header\/GerenciaEquipe.hpp
GERENCIAFILME = .\/boundary\/GerenciaFilme.cpp
GERENCIAFILMEH = .\/boundary\/header\/GerenciaFilme.hpp
GERENCIASALA = .\/boundary\/GerenciaSala.cpp
GERENCIASALAH = .\/boundary\/header\/GerenciaSala.hpp
GERENCIASESSAO = .\/boundary\/GerenciaSessao.cpp
GERENCIASESSAOH = .\/boundary\/header\/GerenciaSessao.hpp
GERENCIAVENDA = .\/boundary\/GerenciaVenda.cpp
GERENCIAVENDAH = .\/boundary\/header\/GerenciaVenda.hpp
VENDAINGRESSO = .\/boundary\/VendaIngresso.cpp
VENDAINGRESSOH = .\/boundary\/header\/VendaIngresso.hpp

Assento.o: 
	$(CC) $(CFLAGS) $(ASSENTO)

EquipeFilme.o: 
	$(CC) $(CFLAGS) $(EQUIPEFILME)

Fileira.o: 
	$(CC) $(CFLAGS) $(FILEIRA)

Filme.o: 
	$(CC) $(CFLAGS) $(FILME)

Ingresso.o: 
	$(CC) $(CFLAGS) $(INGRESSO)

Sala.o: 
	$(CC) $(CFLAGS) $(SALA)

Sessao.o: 
	$(CC) $(CFLAGS) $(SESSAO)

Venda.o: 
	$(CC) $(CFLAGS) $(VENDA)

GerenciarGenerico.o:
	$(CC) $(CFLAGS) $(GERENCIARGENERICO)

GerenciarEquipe.o:
	$(CC) $(CFLAGS) $(GERENCIAREQUIPE)

GerenciarFilme.o:
	$(CC) $(CFLAGS) $(GERENCIARFILME)

GerenciarSala.o:
	$(CC) $(CFLAGS) $(GERENCIARSALA)

GerenciarSessao.o:
	$(CC) $(CFLAGS) $(GERENCIARSESSAO)

GerenciarVenda.o:
	$(CC) $(CFLAGS) $(GERENCIARVENDA)

VenderIngresso.o:
	$(CC) $(CFLAGS) $(VENDERINGRESSO)

GerenciaGenerico.o:
	$(CC) $(CFLAGS) $(GERENCIAGENERICO)

GerenciaEquipe.o:
	$(CC) $(CFLAGS) $(GERENCIAEQUIPE)

GerenciaFilme.o:
	$(CC) $(CFLAGS) $(GERENCIAFILME)

GerenciaSala.o:
	$(CC) $(CFLAGS) $(GERENCIASALA)

GerenciaSessao.o:
	$(CC) $(CFLAGS) $(GERENCIASESSAO)

GerenciaVenda.o:
	$(CC) $(CFLAGS) $(GERENCIAVENDA)

VendaIngresso.o:
	$(CC) $(CFLAGS) $(VENDAINGRESSO)

clean:
	rm -rf *.gch *.~
