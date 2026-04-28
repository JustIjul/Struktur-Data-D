#include <iostream>
#include <string>
using namespace std;

#define MAX 5

class Queue {
private:
    string arr[MAX];
    int front, rear;

public:
    Queue() {
        front = -1;
        rear = -1;
    }

    bool isEmpty() {
        return (front == -1);
    }

    bool isFull() {
        return (rear == MAX - 1);
    }

    void enqueue(string x) { 
        if (isFull()) {
            cout << "Queue Overflow! Antrian layanan penuh.\n";
            return;
        }
        if (isEmpty()) {
            front = 0;
        }
        arr[++rear] = x;
        cout << "- " << x << " mengambil nomor (masuk antrian)\n";
    }

    void dequeue() {
        if (isEmpty()) {
            cout << "Queue Underflow! Tidak ada antrian mahasiswa.\n";
            return;
        }
        cout << "- Memanggil " << arr[front] << " untuk dilayani petugas\n";
        if (front == rear) {
            front = rear = -1;
        } else {
            front++;
        }
    }

    void display() {
        if (isEmpty()) {
            cout << "Kondisi Antrian: Kosong\n";
            return;
        }
        cout << "Kondisi Antrian Saat Ini: ";
        for (int i = front; i <= rear; i++) {
            cout << arr[i];
            if (i < rear) cout << ", ";
        }
        cout << "\n  (Front: " << arr[front] << " | Rear: " << arr[rear] << ")\n";
    }
};

int main() {
    Queue q;

    cout << "=== SIMULASI ANTRIAN LAYANAN AKADEMIK ===\n\n";

    cout << "[ PROSES 1: Kedatangan Mahasiswa ]\n";
    q.enqueue("Mahasiswa A");
    q.enqueue("Mahasiswa B");
    q.enqueue("Mahasiswa C");

    cout << "\n[ PROSES 2: Pengecekan Antrian ]\n";
    q.display();

    cout << "\n[ PROSES 3: Pelayanan Mahasiswa Pertama ]\n";
    q.dequeue();

    cout << "\n[ PROSES 4: Kedatangan Mahasiswa Baru ]\n";
    q.enqueue("Mahasiswa D");

    cout << "\n[ PROSES 5: Pengecekan Antrian Akhir ]\n";
    q.display();

    return 0;
}