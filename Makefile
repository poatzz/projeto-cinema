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

clean:
	rm -rf *.gch *.~
