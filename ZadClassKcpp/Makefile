# Zadanie 7.1
# --------------------------------------
# - Stwórz Makefile (lub uzyj cmake) do kompilacji programu (programów) z zadania 6.1

main.out: main.o src/LManipulacjaStrumieniemCout.o src/ZadArytmetykaWskaznikow.o src/ZadKcpp.o src/ZadParzysta.o src/ZadPreprocesor.o src/ZadZwracanie.o
	g++ -o main.out main.o src/LManipulacjaStrumieniemCout.o src/ZadArytmetykaWskaznikow.o src/ZadKcpp.o src/ZadParzysta.o src/ZadPreprocesor.o src/ZadZwracanie.o

main.o: main.cc
	g++ -c main.cc -o main.o

src/LManipulacjaStrumieniemCout.o: src/LManipulacjaStrumieniemCout.cc
	g++ -c src/LManipulacjaStrumieniemCout.cc -o src/LManipulacjaStrumieniemCout.o


src/ZadArytmetykaWskaznikow.o: src/ZadArytmetykaWskaznikow.cc
	g++ -c src/ZadArytmetykaWskaznikow.cc -o src/ZadArytmetykaWskaznikow.o


src/ZadKcpp.o: src/ZadKcpp.cc
	g++ -c src/ZadKcpp.cc -o src/ZadKcpp.o


src/ZadParzysta.o: src/ZadParzysta.cc
	g++ -c src/ZadParzysta.cc -o src/ZadParzysta.o


src/ZadPreprocesor.o: src/ZadPreprocesor.cc
	g++ -c src/ZadPreprocesor.cc -o src/ZadPreprocesor.o


src/ZadZwracanie.o: src/ZadZwracanie.cc
	g++ -c src/ZadZwracanie.cc -o src/ZadZwracanie.o

clean:
	rm -rf *.o

distclean:
	rm -rf *.o *~ main.out
