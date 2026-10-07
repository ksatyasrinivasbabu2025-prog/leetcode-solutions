class MyCircularDeque {
public:
    int* q;
    int capacity;
    int front;
    int rear;
    int size;

    MyCircularDeque(int k) {
        this->capacity = k;
        front = 0;
        rear = 0;
        size = 0;
        this->q = new int[capacity];
    }

    bool insertFront(int value) {
        if (isFull()) {
            return false;
        }

        front = (front - 1 + capacity) % capacity;
        q[front] = value;
        size++;
        return true;
    }

    bool insertLast(int value) {
        if (isFull()) {
            return false;
        }

        q[rear] = value;
        rear = (rear + 1) % capacity;
        size++;
        return true;
    }

    bool deleteFront() {
        if (isEmpty()) {
            return false;
        }

        front = (front + 1) % capacity;
        size--;
        return true;
    }

    bool deleteLast() {
        if (isEmpty()) {
            return false;
        }

        rear = (rear - 1 + capacity) % capacity;
        size--;
        return true;
    }

    int getFront() {
        if (isEmpty()) {
            return -1;
        }

        return q[front];
    }

    int getRear() {
        if (isEmpty()) {
            return -1;
        }

        return q[(rear - 1 + capacity) % capacity];
    }

    bool isEmpty() {
        return size == 0;
    }

    bool isFull() {
        return size == capacity;
    }
};