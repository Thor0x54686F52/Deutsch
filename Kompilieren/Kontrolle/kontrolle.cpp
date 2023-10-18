#include "kontrolle.hpp"

std::string woerter[642282];

bool Einlesen(const int laenge_von_array, const std::unique_ptr<std::string> Dateipfad, std::string woerter[]) {
   try {
      std::ifstream dateiinhalt;
      dateiinhalt.open(*Dateipfad);
      if(dateiinhalt.fail()) {
         std::cout << "Fehler beim Laden der Datei " << *Dateipfad << "." << std::endl;
         return false;
      }

      for (int i = 0; i < laenge_von_array; i++) {
         std::getline(dateiinhalt, woerter[i], '\n');
      }
      dateiinhalt.close();
   }
   catch(const std::exception& e) {
      std::cerr << e.what() << '\n';
      return false;
   }
   return true;
}

bool Text_kontrolieren(const std::shared_ptr<std::string> Text) {
   try {
      int laenge;
      std::string einlesen;
      std::string abkuerzungen[133];
      //einlesen = "~/Deutsch/Kontrolle/Abkuerzungen.txt";
      //laenge = abkuerzungen->length();
      //Einlesen(laenge, std::make_unique<std::string>(einlesen), abkuerzungen);
      //einlesen = "~/Deutsch/Kontrolle/Woerter.txt";
      //laenge = woerter->length();
      //Einlesen(laenge, std::make_unique<std::string>(einlesen), woerter);
   }
   catch(const std::exception& e) {
      std::cerr << e.what() << '\n';
      return false;
   }
   
   
   
   
   // Logik muss noch implemetiert werden
   return true;
}

bool Code_kontrolieren(const std::shared_ptr<std::string> CppCode){
   std::string code;
   // Logik muss noch implemetiert werden
   return true;
}

std::string Formatieren(std::shared_ptr<std::string> CppCode) {
   std::string text;
   // Logik muss noch implemetiert werden
   return text;
}
