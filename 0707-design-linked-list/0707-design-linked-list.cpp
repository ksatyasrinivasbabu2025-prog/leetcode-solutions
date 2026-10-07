class MyLinkedList {
private:
    struct Node {
        int data;
        Node* next;

        Node(int data) {
            this->data = data;
            this->next = nullptr;
        }
    };

    Node* head;

public:
    MyLinkedList() {
        head = nullptr;
    }

    int get(int index) {
        int current = 0;
        Node* temp = head;

        while (temp != nullptr && current <= index) {
            if (current == index) {
                return temp->data;
            } else {
                temp = temp->next;
                current++;
            }
        }

        return -1;
    }

    void addAtHead(int val) {
        Node* newNode = new Node(val);

        if (head == nullptr) {
            head = newNode;
            return;
        }

        newNode->next = head;
        head = newNode;
    }

    void addAtTail(int val) {
        Node* newNode = new Node(val);

        if (head == nullptr) {
            head = newNode;
            return;
        }

        Node* temp = head;

        while (temp->next != nullptr) {
            temp = temp->next;
        }

        temp->next = newNode;
    }

    void addAtIndex(int index, int val) {
        if (index == 0) {
            addAtHead(val);
            return;
        }

        Node* temp = head;
        Node* newNode = new Node(val);

        while (index > 1 && temp != nullptr) {
            temp = temp->next;
            index--;
        }

        if (temp != nullptr) {
            newNode->next = temp->next;
            temp->next = newNode;
        } else {
            delete newNode;
        }
    }

    void deleteAtIndex(int index) {
        if (head == nullptr) {
            return;
        } else if (index == 0) {
            Node* temp = head;
            head = head->next;
            delete temp;
            return;
        }

        Node* temp = head;

        while (index > 1 && temp != nullptr) {
            temp = temp->next;
            index--;
        }

        if (temp == nullptr || temp->next == nullptr) {
            return;
        }

        Node* toDelete = temp->next;
        temp->next = temp->next->next;
        delete toDelete;
    }
};