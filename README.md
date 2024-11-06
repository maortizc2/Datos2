# Parcial 3 (Videojuego Soluy's Legend c++)
# Versions Usada
Sistema Operativo: Linux Ubuntu 24.04 Its
Compilador: g++ Ubuntu 24.04
Lenguaje de progrmacion: C++

# Instrucciones para ejecutarlo

# Ejecucion con el MakeFile
 Es necesario que se utilice el compilador g++, de otra forma saldra error al correr el codigo. 
*Al momento de ejecucion:* Se debe abrir la terminal y escribir el comando "make". Luego de que termine la compilacion 
escribes "./ejecutable" para iniciar con la ejecución del programa. Luego de haber ejecutado
el programa puedes escribir en la terminal "make clean" para borrar los archivos
innecesarios.

# Ejecucion con comandos
 Para compilar el programa 
g++ -std=c++17 main.cpp Grafo.cpp -o ejecutable

Para ver el resultado  copiar en la linea de comando 
./ejecutable
 
# Motivos de solucion
La solución de este trabajo consiste en un grafo dirigido y ponderado, con la implementacion de lista de adyacencia y un algoritmo de Dijkstra para encontrar el camino mas corto entre dos nodos. Ademas he implementado el uso de un mapa para almacenar el estado de la busqueda en el algoritmo de Dijkstra.