# Definir el compilador y las banderas
CC = g++ -std=c++17

# Archivos fuente y de salida
SRC = main.cpp Grafo.cpp
OBJ = main.o Grafo.o
EXEC = ejecutable

# Regla principal
all: $(EXEC)

# Regla para crear el ejecutable
$(EXEC): $(OBJ)
	$(CC) -o $@ $(OBJ)

# Regla para compilar los archivos .cpp en .o
%.o: %.cpp
	$(CC) -c $< -o $@

# Regla para limpiar los archivos generados
clean:
	rm -f $(OBJ) $(EXEC)

# Phony targets
.PHONY: all clean
