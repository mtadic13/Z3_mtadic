struct klijent {
    int i; 
    std::string datum;
    float tek; 
    float dev; 
    std::string ime;
};



struct qu {
    klijent value;
    qu *sljedeci;
};

struct que {
    qu *front;
    qu *rear;
};

typedef qu *element;
typedef que queue;

klijent FrontQ(queue *q) {
    return q->front->sljedeci->value;
}

void EnQueueQ(klijent x, queue *q) {
    element novi = new qu;
    novi->value = x;
    q->rear->sljedeci = novi;
    q->rear = novi;
}

void DeQueueQ(queue *q) {
    element obrisi;
    obrisi = q->front;
    q->front = q->front->sljedeci;
    delete obrisi;
}

void InitQ(queue *q) {
    element novi = new qu;
    q->front = q->rear = novi;
}

bool IsEmptyQ(queue *q) {
    return (q->front == q->rear);
}
