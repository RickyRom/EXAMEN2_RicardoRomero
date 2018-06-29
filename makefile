main:		main.cpp Seleccion.o Nodo.o Lista.o
	g++ main.cpp Seleccion.o Nodo.o Lista.o -o main
main.o:		main.cpp Seleccion.h Nodo.h Lista.h
	g++ -c main.cpp
Seleccion: 	Seleccion.cpp Seleccion.h
	g++ -c Seleccion.cpp
Nodo: 		Nodo.cpp Nodo.h
	g++ -c Nodo.cpp
Lista: 		Lista.cpp Lista.h
	g++ -c Lista.cpp
clean:
	rm *.o main