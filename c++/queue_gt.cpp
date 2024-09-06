#include<stdio.h>
#include<conio.h>

typedef struct {
int front, rear; // V? tr� c?a d?nh d?u, d?nh cu?i


int *nodes; // Danh s�ch c�c ph?n t?
} Queue;

/* Khai b�o c�c nguy�n m?u h�m */
void init(Queue *queue);
void insert(Queue *queue, int node);
int remove(Queue *queue);
void travese(Queue *queue);
void release(Queue *queue);

void init(Queue *queue){
queue = new Queue; // C?p ph�t b? nh? cho con tr?
queue->front = -1; // Kh?i t?o danh s�ch r?ng
queue->rear = -1;
return;
}

void insert(Queue *queue, int node){
int *tmpNodes = new int[queue->rear + 2];// C?p ph�t v�ng nh? m?i
queue->rear ++; // Tang ch? s? c?a node du�i
if(queue->front == -1) // N?u h�ng d?i cu r?ng
queue->front = 0; // th� c?p nh?t front
for(int i=0; i<queue->rear; i++) // Sao ch�p sang v�ng nh? m?i
tmpNodes[i] = queue->nodes[i];
tmpNodes[queue->rear] = node; // Th�m node m?i v�o du�i
delete [] queue->nodes; // Gi?i ph�ng v�ng nh? cu
queue->nodes = tmpNodes; // Tr? v�o v�ng nh? m?i
return;
}

int remove(Queue *queue){
if((queue-front < 0)||(queue-rear < 0)){// Ki?m tra h�ng d?i r?ng
cout << �Queue is empty!� << endl;
return 0;
}

56

// Luu gi? gi� tr? ph?n t? d?u
int result = queue->nodes[queue->front];
int *tmpNodes;
if(queue->rear > 0){ // N?u c� hon 1 ph?n t?
tmpNodes = new int[queue->rear];// C?p ph�t v�ng nh? m?i
for(int i=0; i<queue->rear; i++)// Sao ch�p sang v�ng nh? m?i
tmpNodes[i] = queue->nodes[i];

}else // N?u ch? c� 1 ph?n t?
queue->front --; // H�ng d?i th�nh r?ng
queue->rear --; // Gi?m ch? s? c?a node du�i
delete [] queue->nodes; // Gi?i ph�ng v�ng nh? cu
queue->nodes = tmpNodes; // Tr? v�o v�ng nh? m?i
return result; // Tr? v? gi� tr? node d?u
}

void travese(Queue *queue){
if(queue->front < 0){ // Khi danh s�ch r?ng
cout << �Danh sach rong!� << endl;
return;
}
for(int i=queue->front; i<=queue.rear; i++)
cout << queue->nodes[i] << � �;// Li?t k� c�c ph?n t?
cout << endl;
return;
}

void release(Queue *queue){
if(queue->front > -1) //N?u danh s�ch kh�ng r?ng th�
delete [] queue->nodes; //gi?i ph�ng v�ng nh? c?a danh s�ch
delete queue; //Gi?i ph�ng v�ng nh? c?a con tr?
}

void main(){
clrscr();
Queue *queue;

57

init(queue); // Kh?i t?o h�ng d?i
int function;
do{
clrscr();
cout << �CAC CHUC NANG:� << endl;
cout << �1: Them mot tien trinh vao hang doi� << endl;
cout << �2: Dua mot tien trinh trinh vao thuc hien� << endl;
cout<<�3: Xem tat ca cac tien trinh trong hang doi� << endl;
cout << �5: Thoat!� << endl;
cout << �=========================================� << endl;
cout << �Chon chuc nang: � << endl;
cin >> function;
switch(function){
case �1�: // Th�m v�o h�ng d?i
int maso;
cout << �Ma so tien trinh vao hang doi: �;
cin >> maso;
insert(queue, maso);
break;
case �2�: // L?y ra kh?i h�ng d?i
cout << �Tien trinh duoc thuc hien: � <<
remove(queue) << endl;
break;
case �3�: // Duy?t h�ng d?i
cout<<�Cac tien trinh dang o trong hang doi la:�
<<endl;
travese(queue);
break;
}while(function != �5�);
release(queue); // Gi?i ph�ng h�ng d?i
return;
}
