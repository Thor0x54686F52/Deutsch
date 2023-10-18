#pragma once

#ifndef kontrolle_HPP
#define kontrolle_HPP

#include <string>
#include <memory>
#include <vector>
#include <iostream>
#include <fstream>

bool Text_kontrolieren(const std::shared_ptr<std::string> Text);
/*
   Kontroliert Gramatik, Rechtschreibung und Stil
   true  => alle Tests bestanden
   false => mindestens einen Test nicht bestanden
*/

bool Code_kontrolieren(const std::shared_ptr<std::string> CppCode);
/*
   Kontrolliert C++ Code ob der Kompilierbar ist
   true  => alle Tests bestanden
   false => mindestens einen Test nicht bestanden
*/

std::string Formatieren(std::shared_ptr<std::string> CppCode); // Formatiert den generierten C++ Code in "schönen" C++ Code

#endif
