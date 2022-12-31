#include <iostream>
#include <vector>
using namespace std;

class minheap {
public:
    vector<int> arr;
    int size;

    minheap(int a[], int n) :size(n) {
        for (int i = 0; i < size; i++) {
            arr[i] = a[i];
        }
        heapify();
    }

    int left(int i) {
        return (2 * i + 1);
    }
    int right(int i) {
        return (2 * i + 2);
    }
    int parent(int i) {
        return (i - 1) / 2;
    }
    void swap(int i, int j) {
        int temp = arr[j];
        arr[j] = i;
        arr[i] = temp;
        return;
    }

    void bubbledown(int i) {
        if (i >= size) { return; }
        int L = left(i);
        int R = right(i);

        if (L < size && R >= size && (arr[i] > arr[L])) {
            swap(arr[i], arr[L]);
            bubbledown(L);
        }
        else if (L >= size && R <= size && (arr[i] > arr[R])) {
            swap(arr[i], arr[R]);
            bubbledown(R);
        }
        else {
            int minimum = min(arr[L], arr[R]);
            if (minimum == arr[L]) {
                swap(arr[i], arr[L]);
                bubbledown(L);
            }
            else {
                swap(arr[i], arr[R]);
                bubbledown(R);
            }
        }
        return;

    }

    void bubbleup(int i) {
        int P = parent(i);
        if (i <= 0) { return; }
        if (arr[P] > arr[i]) {
            swap(arr[i], arr[P]);
            bubbleup(P);
        }
        return;
        
    }

    void heapify() {
        for (int i = size; i > 0; i--) {
            bubbledown(i);
        }
        return;
    }

    void insert(int e) {
        arr.push_back(e);
        size++;
        bubbleup(size - 1);
        return;
    }

    int extract() {
        swap(arr[0], arr[size - 1]);
        int e = arr[size - 1];
        arr.pop_back();
        size--;
        bubbledown(0);
        return e;
    }

    void print() {
        cout << "[";
        for (int i = 0; i < size; i++) {
            cout << arr[i] << " ";
        }
        cout << "]";
    }

};





int main() {
    int a[] = {10,5,3,6,15,8,7,20,4};
    minheap trial(a, 9);
    trial.insert(100);
    trial.insert(0);
    cout << trial.extract() << endl;
    cout << trial.extract() << endl;
    cout << endl;
    trial.print();
    return 0;
}