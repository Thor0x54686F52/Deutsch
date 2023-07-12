#include "Ein-Ausgabe.hpp"

std::string Ausgabe(std::string Text) {
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
   std::cout << text << std::endl;
   return text;
}
