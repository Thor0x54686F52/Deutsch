#include "Verzweigungen.hpp"

std::string Verzweigung(std::string Text) {
   std::string text = "";
   if(Text.find("Wir haben folgende Möglichkeiten: ") < Text.size()) {
      for(int i = Text.find("Wir haben folgende Möglichkeiten: ") + 36; i < Text.size(); i++) {
         if(Text[i] == '.') {
            break;
         }
         if(Text[i] == ',') {
            if(text.find("if") < text.size()) {
               text += "else ";
            }
            text += ")";
            text += "if(";
         }
         else {
         }
      }
   }
   return text;
}