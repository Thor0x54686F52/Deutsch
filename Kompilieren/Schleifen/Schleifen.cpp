#include "Schleifen.hpp"

void Schleife(const std::shared_ptr<std::string> Text, std::shared_ptr<std::string> Cppcode) { //Muss noch geschaut werden wie die Bedingung und Handlung am bessten Übersetzt
   if((*Text).find("solange") < (*Text).size() || (*Text).find("Solange") < (*Text).size() || (*Text).find("während") < (*Text).size() || (*Text).find("Während") < (*Text).size()) {
      *Cppcode += "while(";
      if((*Text).find("solange") < (*Text).size())
      {
         for(int i = (*Text).find("solange") + 8; i < (*Text).find(";") + 8; i++) {
            *Cppcode += "";
         }
      }
      *Cppcode += ") {";
      for(int i = 0; i < (*Text).size(); i++) {
         *Cppcode += "";
      }
      *Cppcode += "}";
   }
   if(((*Text).find("solange") < (*Text).size() || (*Text).find("Solange") < (*Text).size()) && ((*Text).find("kleiner als") < (*Text).size() || (*Text).find("größer als") < (*Text).size())) {
      *Cppcode += "for(int i = "/*Größe des kleineren Werts*/"; i < "/*Größe des größeren Werts*/"; i++) {\n\
         "/*Code muss noch gereriert werden*/"\n\
      }";
   }
   return;
}