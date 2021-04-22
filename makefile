program:
	g++ -I "./include" -c ./src/Islem.cpp -o ./lib/Islem.o
	g++ -I "./include" -c ./src/Islemci.cpp -o ./lib/Islemci.o
	g++ -I "./include" -c ./src/IslemKuyrugu.cpp -o ./lib/IslemKuyrugu.o
	g++ -I "./include" -c ./src/IslemYoneticisi.cpp -o ./lib/IslemYoneticisi.o
	g++ -I "./include" -c ./src/main.cpp -o ./lib/main.o
	g++ ./lib/main.o ./lib/Islem.o ./lib/IslemKuyrugu.o ./lib/Islemci.o ./lib/IslemYoneticisi.o -o./bin/program
	./bin/program.exe