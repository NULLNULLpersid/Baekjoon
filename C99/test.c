/*
#include <stdio.h>
#define SIZE 10

typedef char *element;
typedef struct {
    element arr[SIZE];
    int front, rear;
} QueueType;

void init(QueueType *q){
	q->front = q->rear = 0;
}
int full(QueueType* q) {
	return (q->rear+1)%SIZE == q->front;
}
int empty(QueueType *q){
	return q->front == q->rear;
}
void enqueue(QueueType *q, char *u) {
    if (full(q)) printf("대기열이 가득 찼습니다.\n");
    else q->arr[(q->rear+1)%SIZE] = u;
}
element dequeue(QueueType *q) {
    if(empty(q)) {
        printf("대기열이 비어 있습니다.\n");
        return NULL;
    }
    else return q->arr[(q->front+1)%SIZE];
}
void print(QueueType *q) {
    for (int i = (q->front+1) % SIZE; i != (q->rear + 1) % SIZE; i = ++(i)% SIZE) {
        (q->arr[i] != NULL) ? printf("%s", q->arr[i]) : printf(", ");
    }
    printf("\n");
}
int main(void) {
    QueueType q;
    int choice;
    char name[SIZE];
    init(&q);
    do {
        scanf("%d", &choice);
        switch (choice) {
        case 1:
            scanf("%s", name);
            enqueue(&q, name);
            break;
        case 2:
        dequeue(&q);
            break;
        case 3:
            print(&q);
            break;
        default:
            printf("잘못입력하셨습니다.");
        }
    } while(choice != 4);
    return 0;
}

#include <stdio.h>
#define SIZE 10

typedef char *element;
typedef struct {
    element arr[SIZE];
    int front, rear;
} QueueType;

void init(QueueType *q){
	q->front = q->rear = 0;
}

int full(QueueType* q) {
	return q->rear%SIZE == q->front;
}

int empty(QueueType *q){
	return q->front == q->rear;
}

void enqueue(QueueType *q, char *u) {
    if (full(q)) {
        printf("대기열이 가득 찼습니다.\n");
    } else {
        q->rear = (q->rear + 1) % SIZE;
        q->arr[q->rear] = u;
    }
}

element dequeue(QueueType *q) {
    if (empty(q)) {
        printf("대기열이 비어 있습니다.\n");
        return NULL;
    } else {
        q->front = (q->front + 1) % SIZE;
        return q->arr[q->front];
    }
}

void print(QueueType *q) {
    int i = (q->front + 1) % SIZE;
    while (i != (q->rear + 1) % SIZE) {
        (q->arr[i] != NULL) ? printf("%s", q->arr[i]) : printf(", ");
        i = (i + 1) % SIZE;
    }
    printf("\n");
}

int main(void) {
    QueueType q;
    int choice;
    char name[SIZE];
    init(&q);
    do {
        scanf("%d", &choice);
        switch (choice) {
        case 1:
            scanf("%s", name);
            enqueue(&q, name);
            break;
        case 2:
            dequeue(&q);
            break;
        case 3:
            print(&q);
            break;
        default:
            printf("잘못입력하셨습니다.");
        }
    } while(choice != 4);
    return 0;
}
*/
#include <stdio.h>
#define SIZE 10
typedef char element;
typedef struct {
    element arr[SIZE][SIZE];
    int front, rear;
} QueueType;

void init(QueueType *q){
    for (int i = 0; i < SIZE; i++) for (int j = 0; j < SIZE; j++) q->arr[i][j] = '\0';
    q->front = q->rear = 0;
}

int full(QueueType* q) {
	return (q->rear+1)%SIZE == q->front;
}
int empty(QueueType *q){
	return q->front == q->rear;
}
void enqueue(QueueType *q) {
    if (full(q)) printf("대기열이 가득 찼습니다.\n");
    else {
        char name[SIZE];
        scanf("%s", name);
        for (int i = 0; *(name+i) != '\0'; i++) {
            q->arr[(q->rear+1)%SIZE][i] = *(name+i);
        }
        q->rear++;
    }
}
element* dequeue(QueueType *q) {
    if (empty(q)) {
        printf("대기열이 비어 있습니다.\n");
        return '\0';
    } 
    else {
        element name[SIZE];
        for (int i = 0;q->arr[(q->front+1)%SIZE][i] != '\0'; i++) {
            q->arr[(q->rear+1)%SIZE][i] = q->arr[(q->front+1)%SIZE][i];
            q->arr[(q->front+1)%SIZE][i] = '\0';
        }
        q->front++;
        return name;
    }
}
void print(QueueType *q) {
    for (int i = (q->front + 1) % SIZE; i != (q->rear + 1) % SIZE; i = (i + 1) % SIZE) {
        (q->arr[i] != NULL) ? printf("%s, ", q->arr[i]) : printf(", ");
    }
    printf("\n");
}

int main(void) {
    QueueType q;
    int choice;
    init(&q);
    do {
        scanf("%d", &choice);
        switch (choice) {
        case 1:
            enqueue(&q);
            break;
        case 2:
            dequeue(&q);
            break;
        case 3:
            print(&q);
            break;
        }
    } while(choice < 4);
    return 0;
}