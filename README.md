# Analisis comparativo de Ordenamientos

Este proyecto genera arreglos de distitntos tamaños los cuales ordena con distintos metodos, tomando el tiempo que toma cada ordenacion.
El programa genera un archivo CSV el cual contiene los tiempos que tarda cada algoritmo con cada tamaño de arreglo.
Esto con el fin de analizar la eficacia de los distintos algoritmos de ordenamiento.

#Requisitos del sistema:

-Sistema operativo: Windows/Linux/macOS <br>
-Compilador: g++ (GCC) o similares compatibles con C++11 <br>

-Hardware: Minimo 1 GB de RAM <br>

#Instrucciones de compilacion y ejecución:

*Hay que clonar el repositorio: <br>
git clone https://github.com/Royito06/AnalisisOrdenamientos.git

*Hay que compilar:  

g++ -std=c++17 src/*.cpp -Iinclude -o bin/ordenamientos -O2


*Y ejecutar <br>
./bin/ordenamientos

#Descripción de cada algoritmo:<br>

<details>
<summary> Algoritmo de Ordenamiento: Insertion Sort</summary>

Insertion Sort (o "Ordenamiento por Inserción") es una técnica de ordenación que construirá la secuencia ordenada de elementos uno a la vez, comparando siempre cada elemento con los elementos ya ordenados a la izquierda e insertándolo en la posición correcta.
</details>

<details>
<summary> Algoritmo de Ordenamiento: Merge Sort</summary>

El ordenamiento por mezcla (merge sort) es un algoritmo que ordena datos dividiéndolos en partes más pequeñas, ordenándolas y fusionándolas de nuevo. Es un algoritmo recursivo que se basa en la técnica "divide y vencerás".
</details>

<details>
<summary> Algoritmo de Ordenamiento: Quick Sort</summary>

El ordenamiento rápido (quicksort) es un algoritmo que ordena listas de elementos de manera rápida y eficiente. Es uno de los métodos de ordenamiento más utilizados y está presente en la mayoría de los lenguajes de programación. También es un algoritmo recursivo que se basa en la técnica "divide y vencerás".
</details>

<details>
<summary> Algoritmo de Ordenamiento: Bubble Sort</summary>

El ordenamiento de burbuja (Bubble Sort) es un algoritmo de clasificación que ordena una lista de elementos comparando pares de elementos adyacentes. El nombre proviene de la forma en que los elementos más pequeños "burbujean" hacia el principio de la lista.
</details>

<details>
<summary> Algoritmo de Ordenamiento: Heap Sort</summary>

El ordenamiento por montículos (heapsort) es un algoritmo de ordenación que utiliza un árbol binario completo para ordenar elementos. El árbol binario se conoce como heap, y en él, cada nodo tiene un valor mayor que el de sus descendientes.
</details>

<details>
<summary> Algoritmo de Ordenamiento: Selection Sort</summary>

El ordenamiento por selección mejora el ordenamiento burbuja haciendo un sólo intercambio por cada pasada a través de la lista. Para hacer esto, un ordenamiento por selección busca el valor mayor a medida que hace una pasada y, después de completar la pasada, lo pone en la ubicación correcta.
</details>

<details>
<summary> Algoritmo de Ordenamiento por Shell Sort</summary>

El ordenamiento Shell es un algoritmo de ordenamiento. El método se denomina Shell en honor de su inventor Donald Shell. Su implementación original, requiere O(n²) comparaciones e intercambios en el peor caso.
</details>


#Gráfica comparativa de los tiempos de ejecución obtenidos en el experimento:<br>
![Análisis de Algoritmos de Ordenamiento](https://github.com/Royito06/AnalisisDeOrdenamientos/raw/main/AnalisisDeAlgoritmosDeOrdenamiento/Grafica_Analisis_Ordenamientos.png)




#Conclusiones: <br>
El análisis de estos distintos algoritmos de ordenamiento nos ayuda a comprender mejor cómo estos funcionan y los recursos que utilizan, además de ayudarnos a
comprender mejor lo que representa la complejidad temporal. Por ejemplo, al revisar las gráficas se puede ver cómo el Bubble Sort, siendo O(n²), al ir
incrementando el tamaño de los conjuntos, el tiempo que necesita va incrementando - como se esperaba - de manera exponencial, mientras que algoritmos como Quick
Sort y Merge Sort, que son de complejidad O(n log n), al ir incrementando el tamaño de los conjuntos, el tiempo necesario para ordenarlos crece realmente poco.


Archivo .CSV generado que contiene los tiempos de ejecución
[📥 Descargar resultados.csv](https://github.com/Royito06/AnalisisDeOrdenamientos/raw/main/AnalisisDeAlgoritmosDeOrdenamiento/Archivo%20CSV/resultados.csv)
