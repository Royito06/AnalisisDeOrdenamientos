# Analisis comparativo de Ordenamientos

Este proyecto genera arreglos de distitntos tamaños los cuales ordena con distintos metodos, tomando el tiempo que toma cada ordenacion.
El programa genera un archivo CSV el cual contiene los tiempos que tarda cada algoritmo con cada tamaño de arreglo.
Esto con el fin de analizar la eficacia de los distintos algoritmos de ordenamiento.

Requisitos del sistema:

-Sistema operativo: Windows/Linux/macOS <br>
-Compilador: g++ (GCC) o similares compatibles con C++11 <br>

-Hardware: Minimo 1 GB de RAM <br>

Instrucciones de compilacion y ejecución:
*Primero hay que clonar el repositorio:
git clone https://github.com/Royito06/AnalisisOrdenamientos.git

*Se compila:
g++ -std=c++17 src/*.cpp -Iinclude -o bin/ordenamientos -O2

*Se ejecuta <br>
./bin/ordenamientos

# Compile with optimizations
make build  # Or manually: g++ -std=c++17 src/*.cpp -Iinclude -o bin/ordenamientos -O2

Descripción de cada algoritmo:


Gráfica comparativa de los tiempos de ejecución obtenidos en el experimento:
![Grafica comparativa](https://github.com/Royito06/AnalisisDeOrdenamientos/blob/main/DeAlgoritmosDeOrdenamiento/Grafica_Analisis_Ordenamientos.png?raw=true)


Análisis de los resultados obtenidos:

Conclusiones:


Archivo .CSV generado que contiene los tiempos de ejecución

