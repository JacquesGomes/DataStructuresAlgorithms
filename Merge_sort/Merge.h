#ifndef MERGE_H
#define MERGE_H

void merge (int* arr, int inicio, int middle, int fim){
    
    int nl = middle - inicio + 1;
    int nr = fim - middle;

    int L[nl];
    int R[nr];
    

    for(int i = 0; i < nl; i++){
        L[i] = arr[inicio + i];
    }

    for(int i = 0; i < nr; i++){
        R[i] = arr[middle + i + 1];
    }

    int i = 0;
    int j = 0;
    int k = inicio;

    while(i < nl && j < nr){
        if(L[i] <= R[j]){
            arr[k] = L[i];
            i++;
        }
        else{
            arr[k] = R[j];
            j++;
        }
        k++;
    }

    while (i < nl){
        arr[k] = L[i];
        i++;
        k++;
    }

    while(j < nr){
        arr[k] = R[j];
        k++;
        j++;
    }

}

void merge_sort (int* arr, int inicio, int fim){
    
    if(inicio >= fim){
        return;
    }

    int middle = (inicio + fim) / 2;
    merge_sort(arr, inicio, middle);
    merge_sort(arr, middle+1, fim);
    merge(arr, inicio, middle, fim);
}

#endif //MERGE_H