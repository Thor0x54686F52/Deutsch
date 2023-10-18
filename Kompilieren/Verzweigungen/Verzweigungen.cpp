#include "Verzweigungen.hpp"

void Verzweigung(const std::shared_ptr<std::string> Text, std::shared_ptr<std::string> Cppcode) {
   if((*Text).find("Wir haben folgende Möglichkeiten: ") < (*Text).size()) {
      for(int i = (*Text).find("Wir haben folgende Möglichkeiten: ") + 36; i < (*Text).size(); i++) {
         if((*Text)[i] == '.') {
            break;
         }
         if((*Text)[i] == ',') {
            if((*Cppcode).find("if") < (*Cppcode).size()) {
               *Cppcode += "else ";
            }
            else {
               *Cppcode += ")";
               *Cppcode += "if(";
            }
         }
         else {
         }
      }
   }
   return;
}