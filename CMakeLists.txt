cmake_minimum_required(VERSION 3.22.1)

add_library(Kompilieren Kompilieren/kompilieren.hpp Kompilieren/kompilieren.cpp)
add_library(Addition Kompilieren/Berechnungen/Addition/Addition.hpp Kompilieren/Berechnungen/Addition/Addition.cpp)
add_library(Subtraktion Kompilieren/Berechnungen/Subtraktion/Subtraktion.hpp Kompilieren/Berechnungen/Subtraktion/Subtraktion.cpp)
add_library(Multiplikation Kompilieren/Berechnungen/Multiplikation/Multiplikation.hpp Kompilieren/Berechnungen/Multiplikation/Multiplikation.cpp)
add_library(Division Kompilieren/Berechnungen/Division/Division.hpp Kompilieren/Berechnungen/Division/Division.cpp)
add_library(Verzweigungen Kompilieren/Verzweigungen/Verzweigungen.hpp Kompilieren/Verzweigungen/Verzweigungen.cpp)
add_library(Schleifen Kompilieren/Schleifen/Schleifen.hpp Kompilieren/Schleifen/Schleifen.cpp)
add_library(Ein-Ausgabe Kompilieren/Ein-Ausgabe/Ein-Ausgabe.hpp Kompilieren/Ein-Ausgabe/Ein-Ausgabe.cpp)

project(Deutsch)

add_executable(${PROJECT_NAME} main.cpp)

target_link_libraries(${PROJECT_NAME} PRIVATE Kompilieren)
target_link_libraries(${PROJECT_NAME} PRIVATE Addition)
target_link_libraries(${PROJECT_NAME} PRIVATE Subtraktion)
target_link_libraries(${PROJECT_NAME} PRIVATE Multiplikation)
target_link_libraries(${PROJECT_NAME} PRIVATE Division)
target_link_libraries(${PROJECT_NAME} PRIVATE Verzweigungen)
target_link_libraries(${PROJECT_NAME} PRIVATE Schleifen)
target_link_libraries(${PROJECT_NAME} PRIVATE Ein-Ausgabe)