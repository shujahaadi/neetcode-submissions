class DynamicArray {
    int* arr;
    int capacity;
    int size = 0;

public:

    DynamicArray(int capacity) {
        if (capacity <= 0)
        capacity = 1;

        this->capacity = capacity;
        arr = new int[capacity];
    }

    int get(int i) {
        return arr[i];
    }

    void set(int i, int n) {
        arr[i] = n;
    }

    void pushback(int n) {
        if(capacity == size){
            resize();
        }
        arr[size] = n;
        size++;
    }

    int popback() {
        int value = arr[size - 1];
        size--;
        return value;
    }

    void resize() {
        int* temparr = new int[capacity * 2];

        for(int i = 0; i < size; i++){
            temparr[i] = arr[i]; 
        }
        delete[] arr;
        arr = temparr;

        capacity = capacity*2;
    }

    int getSize() {
        return size;
    }

    int getCapacity() {
        return capacity;
    }
};
