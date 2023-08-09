# Variáveis de compilação
CXX = g++
CXXFLAGS = -Wall -Wextra -pedantic -std=c++17

# Nome do arquivo executável
TARGET = main

# Arquivos objeto
OBJS = main.o linked.o

# Regra para compilar o arquivo executável
$(TARGET): $(OBJS)
	$(CXX) $(CXXFLAGS) $(OBJS) -o $(TARGET)

# Regras para compilar cada um dos arquivos objeto
main.o: main.cpp linked.hpp
	$(CXX) $(CXXFLAGS) -c main.cpp

Lista.o: linked.cpp linked.hpp
	$(CXX) $(CXXFLAGS) -c linked.cpp

# Regra para limpar os arquivos objeto e o arquivo executável
clean:
	rm -f $(OBJS) $(TARGET)
