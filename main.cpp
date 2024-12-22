
#include <iostream> // para entrada y salida de datos 
#include "tablahash.h"

int main() {
    TablaHash tabla;

    // Insertar artistas
    tabla.insert(Artista("Ghali","PIZZA KEBAB Vol.1","Rap Italiano"));
    tabla.insert(Artista("Feid","Bahia Ducati" ,"Urbano Latino"));
    tabla.insert(Artista("Post Malone","Beerbongs & bentleys" ,"Hip-Hop/Rap"));
    tabla.insert(Artista("Rosalia","RR" ,"Pop Latino"));
    tabla.insert(Artista("Saiko","Cosas que no te dije" ,"Urbano Latino"));
    tabla.insert(Artista("Taylor Swift","Fearlees" ,"Pop"));
    tabla.insert(Artista("Travis Scott","ASTROWORLD" ,"Hip-hop/Rap"));
    tabla.insert(Artista("Trippie Redd","A love letter to you 4" ,"Hip-Hop/Rap"));
    tabla.insert(Artista("Adele","30" ,"Pop"));
    tabla.insert(Artista("Arcangel","Sentimiento,Elegancia y Maldad" ,"Urbano Latino"));
    tabla.insert(Artista("Bad Bunny","x 100PRE " ,"Urbano Latino"));
    tabla.insert(Artista("Blessd","Si sabe" ,"Urbano Latino"));
    tabla.insert(Artista("C.Tangana","El Madrileño" ,"Urbano Latino"));
    tabla.insert(Artista("Drake","More live" ,"Hip-Hop/Rap"));
    tabla.insert(Artista("KID Cudi","INSANO", "Hip-Hop/Rap"));
    // Print All
    tabla.printAll();

    return 0;
}




