all : Server

Server : Main.o Server.o logger.o json_parser.o User.o
		g++ Main.o Server.o logger.o json_parser.o User.o -o Server

Main.o : Main.cpp Server.hpp
	g++ -c Main.cpp

Server.o : Server.cpp Server.hpp
	g++ -c Server.cpp

logger.o : logger.cpp logger.hpp
	g++ -c logger.cpp

json_parser.o : json_parser.cpp json_parser.hpp
	g++ -c json_parser.cpp

User.o : User.cpp User.hpp
	g++ -c User.cpp


clean:
	rm *.o Server
