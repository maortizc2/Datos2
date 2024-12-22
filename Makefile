# Nombre del ejecutable
TARGET = demo

# Archivos fuente
SRCS = main.cpp Archivo.cpp Ticket.cpp  

# Archivos objeto (generados a partir de los archivos fuente)
OBJS = $(SRCS:.cpp=.o)

# Compilador y flags
CXX = g++

# Regla por defecto
all: $(TARGET)

# Regla para construir el ejecutable
$(TARGET): $(OBJS)
	$(CXX) -o $@ $(OBJS)

# Regla para construir los archivos objeto
%.o: %.cpp
	$(CXX) $(CXXFLAGS) -c $< -o $@

# Regla para limpiar los archivos generados
clean:
	rm -f $(TARGET) $(OBJS)

run: $(TARGET)
	./$(TARGET)

# Regla para mostrar las reglas
.PHONY: all clean

