#include <vector>
#include <chrono>
#include <fstream>
#include <string>
#include <algorithm>
#include <iostream>
#include <iomanip>
#include <numeric>
#include "../headers/Ordenamientos.h"
#include "../headers/Generador.h"

using namespace std::chrono;

void ejecutarPruebas(const std::string& archivoCSV = "resultados_finales.csv") {
    std::ofstream archivo(archivoCSV);

    // Constantes
    const int INCREMENTO_TAMANO = 10;
    const int TAMANO_INICIAL = 10;
    const int MAX_TAMANO = 1000;
    const int NUM_PRUEBAS = 10;

    // Lista de algoritmos
    std::vector<std::pair<std::string, void(*)(std::vector<int>&)>> algoritmos = {
        {"Insercion", ordenamientoPorInsercion},
        {"Burbuja", ordenamientoBurbuja},
        {"BurbujaOpt", ordenamientoBurbujaOptimizado},
        {"Seleccion", ordenamientoPorSeleccion},
        {"MergeSort", [](std::vector<int>& v){ mergeSort(v, 0, v.size()-1); }},
        {"QuickSort", [](std::vector<int>& v){ quickSort(v, 0, v.size()-1); }},
        {"HeapSort", heapSort},
        {"ShellSort", shellSort}
    };

    // Estructura para almacenar resultados
    struct Resultado {
        int tamano;
        std::vector<std::vector<long long>> tiempos; // [algoritmo][ejecucion]
    };
    std::vector<Resultado> resultados;

    // Ejecutar todas las pruebas
    for (int tamano = TAMANO_INICIAL; tamano <= MAX_TAMANO; tamano += INCREMENTO_TAMANO) {
        Resultado res;
        res.tamano = tamano;
        res.tiempos.resize(algoritmos.size());

        for (int ejecucion = 0; ejecucion < NUM_PRUEBAS; ++ejecucion) {
            for (size_t i = 0; i < algoritmos.size(); ++i) {
                auto arreglo = generarArregloAleatorio(tamano);
                auto copia = arreglo;

                auto inicio = high_resolution_clock::now();
                algoritmos[i].second(copia);
                auto fin = high_resolution_clock::now();

                res.tiempos[i].push_back(duration_cast<microseconds>(fin - inicio).count());
            }
        }
        resultados.push_back(res);
        std::cout << "Completado tama\244o: " << tamano << std::endl;
    }

    // Escribir resultados detallados
    archivo << "Ejecucion,Tama\244o";
    for (const auto& alg : algoritmos) {
        archivo << "," << alg.first;
    }
    archivo << "\n";

    for (const auto& res : resultados) {
        for (int ejecucion = 0; ejecucion < NUM_PRUEBAS; ++ejecucion) {
            archivo << (ejecucion+1) << "," << res.tamano;
            for (size_t i = 0; i < algoritmos.size(); ++i) {
                archivo << "," << res.tiempos[i][ejecucion];
            }
            archivo << "\n";
        }
    }

    // Escribir promedios al final
    archivo << "\nPromedios por tama\244o:\n";
    archivo << "Tama\244o";
    for (const auto& alg : algoritmos) {
        archivo << "," << alg.first;
    }
    archivo << "\n";

    for (const auto& res : resultados) {
        archivo << res.tamano;
        for (size_t i = 0; i < algoritmos.size(); ++i) {
            double promedio = std::accumulate(res.tiempos[i].begin(), res.tiempos[i].end(), 0.0) / NUM_PRUEBAS;
            archivo << "," << std::fixed << std::setprecision(2) << promedio;
        }
        archivo << "\n";
    }

    archivo.close();

}

