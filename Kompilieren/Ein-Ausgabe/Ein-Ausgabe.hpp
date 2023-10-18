#pragma once

#include <string>
#include <iostream>
#include <memory>

#ifndef Ein_Ausgabe_HPP
#define Ein_Ausgabe_HPP

void Eingabe(const std::shared_ptr<std::string> Text, std::shared_ptr<std::string> Cppcode);
void Ausgabe(const std::shared_ptr<std::string> Text, std::shared_ptr<std::string> Cppcode);

#endif
