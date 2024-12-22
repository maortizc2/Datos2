# Parcial 2 (Consulta de multas de tránsito por exceso de velocidad  c++)
# Versions Usada
Sistema Operativo: Linux Ubuntu 24.04 Its
Compilador: g++ Ubuntu 24.04
Lenguaje de progrmacion: C++

# Instrucciones para ejecutarlo

# Ejecucion con el MakeFile
 Es necesario que se utilice el compilador g++, de otra forma saldra error al correr el codigo. 
*Al momento de ejecucion:* Se debe abrir la terminal y escribir el comando "make". Luego de que termine la compilacion 
escribes "make run" para iniciar con la ejecución del programa. Luego de haber ejecutado
el programa puedes escribir en la terminal "make clean" para borrar los archivos
innecesarios.

# Ejecucion con comandos
 Para compilar el programa 
 g++ -o main.cpp Archivo.cpp Ticket.cpp

Para ver el resultado  copiar en la linea de comando 
./main
 
# Motivos de solucion
La solucion de este trabajo consiste en una busqueda lineal aplicada en un vector que almacena objetos(Ticket), comparando cada objeto dentro del vector con el que se esta buscando, su tiempo de ejecucion es proporccional al numero de tickets que se estan revisando por ende tiene una complejidad temporal de O(n), donde n es el numero de elementos dentro del vector.En el peor de los casos , se verificaran todo los elementos.
