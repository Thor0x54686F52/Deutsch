#include <iostream>
#include <string>
#include "Kompilieren/kompilieren.hpp"

int main(int argc, char *argv[]) {
   if(argc < 2) {
      std::cout << "Du musst dem Compiler den Namen von der Datei, wo der Programmcode drinnensteht, übergeben" << std::endl;
      return 0;
   }
   if(argc > 2) {
      std::cout << "Du darfst dem Compiler nur einen Dateinamen, wo der Programmcode drinnensteht, übergeben." << std::endl;
      return 0;
   }
   std::string dateiname = argv[1];
   if(dateiname.length() <= 4) {
      std::cout << "Der Dateiname ist zu kurz" << std::endl;
      return 0;
   }
   if(dateiname.find(".deu")==std::string::npos) {
      std::cout << "Das ist kein gültiger Dateiname. Der Dateiname sollte wie folgendes Beispiel aussehen: Dateiname.deu" << std::endl;
      return 0;
   }
   return 0;
}

