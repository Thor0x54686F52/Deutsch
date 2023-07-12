#include "kompilieren.hpp"

void Kompilieren(std::string Dateiname) {
   std::ifstream eingabedatei;
   std::ofstream ausgabedatei;
   std::string text;
   try
   {
      eingabedatei.open(Dateiname, std::ios::in);
      if(eingabedatei.is_open()) {
         std::getline(eingabedatei, text, '\0');
         Ausgabe(text);
         Eingabe(text);
         eingabedatei.close();
      }
   }
   catch(const std::exception& e)
   {
      std::cerr << e.what() << '\n';
   }
}