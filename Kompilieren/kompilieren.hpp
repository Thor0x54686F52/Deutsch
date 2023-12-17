#pragma once

#ifndef compile_HPP
#define compile_HPP

#include <iostream>
#include <vector>
#include <fstream>
#include <memory>
#include <string>
#include <locale>
#include <codecvt>
#include "Berechnungen/Addition/Addition.hpp"
#include "Berechnungen/Subtraktion/Subtraktion.hpp"
#include "Berechnungen/Multiplikation/Multiplikation.hpp"
#include "Berechnungen/Division/Division.hpp"
#include "Schleifen/Schleifen.hpp"
#include "Verzweigungen/Verzweigungen.hpp"
#include "Ein-Ausgabe/Ein-Ausgabe.hpp"
#include "Kontrolle/kontrolle.hpp"

void Kompilieren(const std::shared_ptr<std::string> Dateiname);

#endif