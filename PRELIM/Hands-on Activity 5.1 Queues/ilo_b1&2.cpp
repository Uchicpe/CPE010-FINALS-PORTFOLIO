#include <iostream>
#include "queue.h"
#include "queueArr.h"
#include <queue>

int main() {

    qNode<int>* front = nullptr;
    qNode<int>* back = nullptr;

    enqueue(1, &front, &back);
    std::cout << "front: " << front->data << " back: " << back->data << "\n";
    enqueue(2, &front, &back);
    enqueue(3, &front, &back);
    std::cout << "front: " << front->data << " back: " << back->data << "\n";

    display(front);
    dequeue(&front, &back);
    std::cout << "front: " << front->data << " back: " << back->data << "\n";
    dequeue(&front, &back);
    std::cout << "front: " << front->data << " back: " << back->data << "\n";
    dequeue(&front, &back);
    dequeue(&front, &back);
    display(front);


    //object creation
    queueArr<char> q(6);

    q.Enqueue(1);
    std::cout << "front: " << q.Front() << " Back: " <<q.Back() << "Size: " << q.Size() << std::endl;
    q.Enqueue(2);
    std::cout << "front: " << q.Front() << " Back: " <<q.Back() << "Size: " << q.Size() << std::endl;
    q.Enqueue(3);
    std::cout << "front: " << q.Front() << " Back: " <<q.Back() << "Size: " << q.Size() << std::endl;
    q.Enqueue(4);
    std::cout << "front: " << q.Front() << " Back: " <<q.Back() << "Size: " << q.Size() << std::endl;
    q.Enqueue(5);
    std::cout << "front: " << q.Front() << " Back: " <<q.Back() << "Size: " << q.Size() << std::endl;
    q.Enqueue(6);
    std::cout << "front: " << q.Front() << " Back: " <<q.Back() << "Size: " << q.Size() << std::endl;
    q.Enqueue(7);
    q.Dequeue();
    std::cout << "Front: " << q.Front() << " Back: " << q.Back() << " Size: " << q.Size() << std::endl;
    q.Dequeue();
    q.Dequeue();
    q.Dequeue();
    q.Dequeue();
    q.Dequeue();
    std::cout << "Front: " << q.Front() << " Back: " << q.Back() << " Size: " << q.Size() << std::endl;

    return 0;
}
