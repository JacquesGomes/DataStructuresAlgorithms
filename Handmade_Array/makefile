# Variáveis de compilação
CXX = g++
CXXFLAGS = -Wall -Wextra -pedantic -std=c++17

# Nome do arquivo executável
TARGET = main

# Arquivos objeto
OBJS = main.o array.o

# Regra para compilar o arquivo executável
$(TARGET): $(OBJS)
	$(CXX) $(CXXFLAGS) $(OBJS) -o $(TARGET)

# Regras para compilar cada um dos arquivos objeto
main.o: main.cpp array.hpp
	$(CXX) $(CXXFLAGS) -c main.cpp

Turma.o: array.cpp array.hpp
	$(CXX) $(CXXFLAGS) -c array.cpp

# Regra para limpar os arquivos objeto e o arquivo executável
clean:
	rm -f $(OBJS) $(TARGET)
