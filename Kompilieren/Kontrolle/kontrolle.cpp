#include "kontrolle.hpp"

std::string woerter[642282];

bool Einlesen(const int laenge_von_array, const std::unique_ptr<std::string> Dateipfad, std::string test[]) {
   try {
      std::ifstream dateiinhalt;
      dateiinhalt.open((*Dateipfad));
      if(dateiinhalt.fail()) {
         std::cout << "Fehler beim Laden der Datei " << *Dateipfad << "." << std::endl;
         return false;
      }

      for (int i = 0; i < laenge_von_array; i++) {
         std::getline(dateiinhalt, test[i], '\n');
      }
      dateiinhalt.close();
   }
   catch(const std::exception& e) {
      std::cerr << e.what() << '\n';
      return false;
   }
   return true;
}

bool Rechtschreib_Kontrolle(const std::shared_ptr<std::string> Text) {
   int laenge;
   std::string einlesen;
   std::string abkuerzungen[133];
   bool richtig_geschrieben = false;
   try {
      einlesen = "/home/schule/Deutsch/Kompilieren/Kontrolle/Abkuerzungen.txt";
      laenge = size(abkuerzungen);
      Einlesen(laenge, std::make_unique<std::string>(einlesen), abkuerzungen);
      einlesen = "/home/schule/Deutsch/Kompilieren/Kontrolle/Woerter.txt";
      laenge = size(woerter);
      Einlesen(laenge, std::make_unique<std::string>(einlesen), woerter);
      einlesen = "";
   }
   catch(const std::exception& e) {
      std::cerr << e.what() << '\n';
      return false;
   }
   std::cout << (*Text).length() << std::endl;
   for(int i = 0; i < (*Text).length() + 1; i++) {
      if ((*Text)[i] != ' ' && (*Text)[i] != '\n' && (*Text)[i] != EOF) {
         einlesen += (*Text)[i];
      }
      else {
         if(!(std::find(std::begin(woerter), std::end(woerter), einlesen) != std::end(woerter))) {
            std::cerr << "Das Wort \"" << einlesen << "\" ist falsch geschrieben.\n";
            richtig_geschrieben = false;
         }
         else {
            std::cerr << "Das Wort \"" << einlesen << "\" ist richtig geschrieben.\n";
            richtig_geschrieben = true;
         }
         einlesen = "";
      }
      /*
        Es wird hier auf falsch gesetzt, da bei einem richtig geschriebenen Wort dieser Wert auf true gesetzt wird und
        bei einem falsch geschriebenen Wort dieser Wert auf false geprüft wird. Wenn einmal ein Wort richtig geschrieben wird und
        nicht wieder auf false gesetzt wird, wird angenommen, dass, auch ein falsch geschriebenes Wort, richtig geschrieben ist
      */
   }
   return true;
}

bool Text_kontrolieren(std::shared_ptr<std::string> Text) {
   Rechtschreib_Kontrolle(Text);
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
