#pragma once
#include <vector>

template <typename T>
static void BubbleSort(T a[], int n)
{
    int i, j;
    T temp;
    for (i = 0; i < n - 1; ++i)
    {
        for (j = 0; j < n - 1 - i; ++j)
        {
            if (a[j] > a[j + 1])
            {
                temp = a[j + 1];
                a[j + 1] = a[j];
                a[j] = temp;
            }
        }
    }
}

template <typename T>
static int joinNowakSort(T tab[], int pocz, std::vector<T> smaller, std::vector<T> bigger, T x) {
    int i = pocz;
    for (T j : smaller) {
        T[i] = j;
        i++;
    }
    int result = i;
    T[i] = x;
    for (T j : bigger) {
        T[i] = j;
        i++;
    }
    return i;
}

template <typename T>
static void nowakSortLogic(T tab[], int pocz, int kon) {
    if (pocz >= kon)
        return;
    T x = tab[pocz];
    std::vector<T> tabMniejsze;
    std::vector<T> tabWieksze;
    for (int i = pocz + 1; i < kon; i++) {
        if (tab[i] <= x])
            tabMniejsze.push_back(tab[i]);
        else
            tabWieksze.push_back(tab[i]);
    }
    int new_x = joinNowakSort(tab, pocz, tabMniejsze, tabWieksze, x);
    nowakSortLogic(tab, pocz, new_x - 1);
    nowakSortLogic(tab, new_x + 1, kon);
}

template <typename T>
static void nowakSort(T a[], int n)
{
    nowakSortLogic(a, 0, n - 1);
}


class SortingAlgorithms
{
    
};

