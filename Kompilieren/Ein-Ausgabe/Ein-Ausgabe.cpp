#include "Ein-Ausgabe.hpp"

std::string Eingabe(std::string Text) { //Muss mit Psychologen auf mögliche weitere Möglichkeiten begutachtet werden
   std::string text;
   if(Text.find("Sag mir bitte was los ist") < Text.size() || Text.find("Sagen Sie mir bitte was los ist") < Text.size() || Text.find("Was ist los?") < Text.size() || Text.find("Was gibt's?") < Text.size() || Text.find("Was gibts?") < Text.size() || Text.find("Was gibt es?") < Text.size() || Text.find("Was willst du mir denn sagen?") < Text.size() || Text.find("Was wollen Sie mir denn sagen?") < Text.size()) {
      text = "std::cin >> eingabe;";
   }
   if(Text.find("Willst du mir was sagen?") < Text.size()) {
      text = "std::cin >> eingabe;\n\
      if(eingabe.find(\"ja\") || eingabe.find(\"Ja\")) {\n\
         std::cout << \"Was willst du mir sagen?\" << std::endl;\n\
      }\n\
      else {\n\
         std::cout << \"Dann hab ich mich wohl geirrt.\"\n\
      }";
   }
   if(Text.find("Wollen Sie mir etwas sagen?") < Text.size()) {
      text = "std::cin >> eingabe;\n\
      if(eingabe.find(\"ja\") || eingabe.find(\"Ja\")) {\n\
         std::cout << \"Was willen Sie mir sagen?\" << std::endl;\n\
      }\n\
      else {\n\
         std::cout << \"Dann hab ich mich wohl geirrt.\"\n\
      }";
   }
   return text;
}

std::string Ausgabe(std::string Text) { //Muss mit Psychologen auf mögliche weitere Möglichkeiten begutachtet werden
   std::string text;
   int doppelpunkt = -1;
   int beistrich = -1;
   int anfuehrungsstrich1 = -1;
   int anfuehrungsstrich2 = -1;
   for (int i = 0; i < Text.size(); i++) {
      if (Text[i] == '"') {
         if (anfuehrungsstrich1 == -1) {
               anfuehrungsstrich1 = i;
         }
         else if (anfuehrungsstrich2 == -1) {
               anfuehrungsstrich2 = i;
         }
      }
      if (Text[i] == ':' && doppelpunkt == -1 && (i < anfuehrungsstrich1 || i > anfuehrungsstrich2)) {
         doppelpunkt = i;
      }
      if (Text[i] == ',' && beistrich == -1 && (i < anfuehrungsstrich1 || i > anfuehrungsstrich2)) {
         beistrich = i;
      }
   }

   if(((doppelpunkt != -1 && anfuehrungsstrich1 > doppelpunkt) || (beistrich != -1 && anfuehrungsstrich2 < beistrich)) &&
        anfuehrungsstrich1 != -1 && anfuehrungsstrich2 != -1) {
      text = "std::cout << ";
      for(int i = anfuehrungsstrich1; i <= anfuehrungsstrich2; i++) {
         text += Text[i];
      }
      text += " << std::endl;";
   }
   return text;
}
