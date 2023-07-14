#include "kompilieren.hpp"

void Kompilieren(std::string Dateiname) {
   std::ifstream eingabedatei;
   std::ofstream ausgabedatei;
   std::string text;
   std::string Text = "#include <iostream>\n\
   \n\
   int main() {\n";
   try
   {
      eingabedatei.open(Dateiname, std::ios::in);
      if(eingabedatei.is_open()) {
         std::getline(eingabedatei, text, '\0');
         if(Text_kontrolieren(text) == "") {
            Ausgabe(text);
            Eingabe(text);
         }
         std::cout << text.size() << std::endl;
         eingabedatei.close();
      }
      Text = "return 0;\n\
      }";
      Formatieren(Text);
   }
   catch(const std::exception& e)
   {
      std::cerr << e.what() << '\n';
   }
}