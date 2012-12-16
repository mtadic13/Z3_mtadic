int AddOne(int n) {
    return (n+1) % 1000;
}

struct klijent {
    int i; 
    std::string datum;
    float tek; 
    float dev; 
    std::string ime;
};

typedef int element;

struct qu {
    klijent klijenti[1000];
   
    element front, rear; 
};

typedef qu queue;

klijent FrontQ(queue *q) {
    return q->klijenti[q->front];
}

void EnQueueQ(klijent x, queue *q) {
    q->rear = AddOne(q->rear);
    q->klijenti[q->rear] = x;
}

void DeQueueQ(queue *q) {
    q->front = AddOne(q->front);
}

void InitQ(queue *q) {
    q->front = 0;
    q->rear = 999;
}

bool IsEmptyQ(queue *q) {
    return q->front == AddOne(q->rear);
}
