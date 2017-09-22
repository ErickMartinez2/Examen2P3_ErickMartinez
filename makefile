Main: Main.o Ciudadano.o Emmitter.o Estudiante.o Maestro.o Mutant.o Quirk.o Transformation.o LinkedList.o
	g++ Main.o Ciudadano.o Emmitter.o Estudiante.o Maestro.o Mutant.o Quirk.o Transformation.o LinkedList.o -o a

Main.o: Main.cpp Ciudadano.h Emmitter.h Estudiante.h Maestro.h Mutant.h Quirk.h Transformation.h LinkedList.h
	g++ -c Main.cpp Ciudadano.cpp Emmitter.cpp Estudiante.cpp Maestro.cpp Mutant.cpp Quirk.cpp Transformation.cpp LinkedList.cpp

Ciudadano.o: Ciudadano.h Ciudadano.cpp
	g++ -c Ciudadano.cpp

Emmitter.o: Emmitter.h Emmitter.cpp
	g++ -c Emmitter.cpp

Estudiante.o: Estudiante.h Estudiante.cpp
	g++ -c Estudiante.cpp

Maestro.o: Maestro.h Maestro.cpp
	g++ -c Maestro.cpp

Mutant.o: Mutant.h Mutant.cpp
	g++ -c Mutant.cpp

Quirk.o: Quirk.h Quirk.cpp
	g++ -c Quirk.cpp

Transformation.o: Transformation.h Transformation.cpp
	g++ -c Transformation.cpp

LinkedList: LinkedList.h LinkedList.cpp
	g++ -c LinkedList.cpp
