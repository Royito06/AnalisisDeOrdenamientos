
#define ALGORITMOS_ORDENAMIENTO_H_INCLUDED

#include <vector>

/**
 * Ordena un arreglo usando el m�todo de inserci�n.
 *
 * @param arreglo Arreglo de enteros a ordenar (se modifica directamente)
 * @param n Tama�o del arreglo
 */
void ordenamientoPorInsercion(std::vector<int>& arr);

//**************************************************************************

/**
 * Ordena un arreglo usando el m�todo de burbuja cl�sico.
 *
 * @param arreglo Arreglo de enteros a ordenar (se modifica directamente)
 * @param n Tama�o del arreglo
 */
void ordenamientoBurbuja(std::vector<int>& arr);

//**************************************************************************

/**
 * Versi�n optimizada del ordenamiento burbuja.
 *
 * @param arreglo Arreglo de enteros a ordenar (se modifica directamente)
 * @param n Tama�o del arreglo
 */
void ordenamientoBurbujaOptimizado(std::vector<int>& arr);

//**************************************************************************

/**
 * Ordena un arreglo usando el m�todo de selecci�n.
 *
 * @param arreglo Arreglo de enteros a ordenar (se modifica directamente)
 * @param n Tama�o del arreglo
 */
void ordenamientoPorSeleccion(std::vector<int>& arr);

//**************************************************************************

/**
 * Funci�n auxiliar para el Merge Sort.
 *
 * @param arreglo Arreglo principal
 * @param left �ndice izquierdo del subarreglo
 * @param mid �ndice medio del subarreglo
 * @param right �ndice derecho del subarreglo
 */
void merge(std::vector<int>& arr, int left, int mid, int right);

//**************************************************************************

/**
 * Ordena un arreglo usando el m�todo Merge Sort.
 *
 * @param arreglo Arreglo de enteros a ordenar (se modifica directamente)
 * @param left �ndice inicial del subarreglo
 * @param right �ndice final del subarreglo
 */
void mergeSort(std::vector<int>& arr, int left, int right);

//**************************************************************************

/**
 * Funci�n auxiliar para el Quick Sort.
 *
 * @param arreglo Arreglo a particionar
 * @param low �ndice inferior del subarreglo
 * @param high �ndice superior del subarreglo (usado como pivote)
 * @return �ndice de la posici�n final del pivote
 */
int partition(std::vector<int>& arr, int low, int high);

//**************************************************************************

/**
 * Ordena un arreglo usando el m�todo Quick Sort.
 *
 * @param arreglo Arreglo de enteros a ordenar (se modifica directamente)
 * @param low �ndice inicial del subarreglo
 * @param high �ndice final del subarreglo
 */
void quickSort(std::vector<int>& arr, int low, int high);

//**************************************************************************

/**
 * Funci�n auxiliar para el Heap Sort.
 *
 * @param arreglo Arreglo a ordenar
 * @param n Tama�o del heap
 * @param i �ndice ra�z del sub�rbol
 */
void heapify(std::vector<int>& arr, int n, int i);

//**************************************************************************

/**
 * Ordena un arreglo usando el m�todo Heap Sort.
 *
 * @param arreglo Arreglo de enteros a ordenar (se modifica directamente)
 * @param n Tama�o del arreglo
 */
void heapSort(std::vector<int>& arr);

//**************************************************************************

/**
 * Ordena un arreglo usando el m�todo Shell Sort.
 *
 * @param arreglo Arreglo de enteros a ordenar (se modifica directamente)
 * @param n Tama�o del arreglo
 */
void shellSort(std::vector<int>& arr);


