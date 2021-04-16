all : tp10_smp.out

tp10_smp.o: mainCompte.o compte.o
	g++ -c tp10_smp.out mainCompte.o compte.out

mainCompte.o: mainCompte.cpp compte.h
  g++ -c mainCompte.cpp
  
compte.o: compte.cpp compte.h
  g++ -c compte.cpp

clean :
  rm *.o
  rm *.out
