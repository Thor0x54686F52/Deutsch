#include "Schleifen.hpp"

std::string Schleife(std::string Text) { //Muss noch geschaut werden wie die Bedingung und Handlung am bessten Übersetzt
   std::string text;
   if(Text.find("solange") < Text.size() || Text.find("Solange") < Text.size() || Text.find("während") < Text.size() || Text.find("Während") < Text.size()) {
      text = "while(";
      if(Text.find("solange") < Text.size())
      {
         for(int i = Text.find("solange") + 8; i < Text.find(";") + 8; i++) {
            text += "";
         }
      }
      text += ") {";
      for(int i = 0; i < Text.size(); i++) {
         text += "";
      }
      text += "}";
   }
   if((Text.find("solange") < Text.size() || Text.find("Solange") < Text.size()) && (Text.find("kleiner als") < Text.size() || Text.find("größer als") < Text.size())) {
      text = "for(int i = "/*Größe des kleineren Werts*/"; i < "/*Größe des größeren Werts*/"; i++) {\n\
         "/*Code muss noch gereriert werden*/"\n\
      }";
   }
   return text;
}