#include "kompilieren.hpp"

void Kompilieren(const std::shared_ptr<std::string> Dateiname) {
   std::ifstream eingabedatei;
   std::ofstream ausgabedatei;
   std::string text; // Text von der eingabedatei
   std::string Cppcode = "#include <iostream>\n\
   \n\
   int main() {\n";
   std::shared_ptr Adresse_von_Text = std::make_shared<std::string>(text);
   std::shared_ptr Adresse_von_Code = std::make_shared<std::string>(Cppcode);
   try {
      eingabedatei.open(*Dateiname, std::ios::in);
      if(eingabedatei.is_open()) {
         std::getline(eingabedatei, text, '\r'); // Liest die Ganze Datei in die Variable "eingabedatei" ein
         //std::cout << Text_kontrolieren(std::make_shared<std::string>(text)) << std::endl;
         if(Text_kontrolieren(std::make_shared<std::string>(text))) {
            Ausgabe(Adresse_von_Text, Adresse_von_Code);
            Eingabe(Adresse_von_Text, Adresse_von_Code);
         }
         eingabedatei.close();
      }
      Cppcode = "return 0;\n\
      }";
      if(Code_kontrolieren(Adresse_von_Code)) {
         Formatieren(Adresse_von_Code);
      }
   }
   catch(const std::exception& e) {
      eingabedatei.close();
      std::cerr << e.what() << '\n';
   }
}
