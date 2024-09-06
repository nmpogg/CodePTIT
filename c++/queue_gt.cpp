#include<stdio.h>
#include<conio.h>

typedef struct {
int front, rear; // V? trí c?a d?nh d?u, d?nh cu?i


int *nodes; // Danh sách các ph?n t?
} Queue;

/* Khai báo các nguyên m?u hàm */
void init(Queue *queue);
void insert(Queue *queue, int node);
int remove(Queue *queue);
void travese(Queue *queue);
void release(Queue *queue);

void init(Queue *queue){
queue = new Queue; // C?p phát b? nh? cho con tr?
queue->front = -1; // Kh?i t?o danh sách r?ng
queue->rear = -1;
return;
}

void insert(Queue *queue, int node){
int *tmpNodes = new int[queue->rear + 2];// C?p phát vùng nh? m?i
queue->rear ++; // Tang ch? s? c?a node duôi
if(queue->front == -1) // N?u hàng d?i cu r?ng
queue->front = 0; // thì c?p nh?t front
for(int i=0; i<queue->rear; i++) // Sao chép sang vùng nh? m?i
tmpNodes[i] = queue->nodes[i];
tmpNodes[queue->rear] = node; // Thêm node m?i vào duôi
delete [] queue->nodes; // Gi?i phóng vùng nh? cu
queue->nodes = tmpNodes; // Tr? vào vùng nh? m?i
return;
}

int remove(Queue *queue){
if((queue-front < 0)||(queue-rear < 0)){// Ki?m tra hàng d?i r?ng
cout << “Queue is empty!” << endl;
return 0;
}

56

// Luu gi? giá tr? ph?n t? d?u
int result = queue->nodes[queue->front];
int *tmpNodes;
if(queue->rear > 0){ // N?u có hon 1 ph?n t?
tmpNodes = new int[queue->rear];// C?p phát vùng nh? m?i
for(int i=0; i<queue->rear; i++)// Sao chép sang vùng nh? m?i
tmpNodes[i] = queue->nodes[i];

}else // N?u ch? có 1 ph?n t?
queue->front --; // Hàng d?i thành r?ng
queue->rear --; // Gi?m ch? s? c?a node duôi
delete [] queue->nodes; // Gi?i phóng vùng nh? cu
queue->nodes = tmpNodes; // Tr? vào vùng nh? m?i
return result; // Tr? v? giá tr? node d?u
}

void travese(Queue *queue){
if(queue->front < 0){ // Khi danh sách r?ng
cout << “Danh sach rong!” << endl;
return;
}
for(int i=queue->front; i<=queue.rear; i++)
cout << queue->nodes[i] << “ ”;// Li?t kê các ph?n t?
cout << endl;
return;
}

void release(Queue *queue){
if(queue->front > -1) //N?u danh sách không r?ng thì
delete [] queue->nodes; //gi?i phóng vùng nh? c?a danh sách
delete queue; //Gi?i phóng vùng nh? c?a con tr?
}

void main(){
clrscr();
Queue *queue;

57

init(queue); // Kh?i t?o hàng d?i
int function;
do{
clrscr();
cout << “CAC CHUC NANG:” << endl;
cout << “1: Them mot tien trinh vao hang doi” << endl;
cout << “2: Dua mot tien trinh trinh vao thuc hien” << endl;
cout<<“3: Xem tat ca cac tien trinh trong hang doi” << endl;
cout << “5: Thoat!” << endl;
cout << “=========================================” << endl;
cout << “Chon chuc nang: ” << endl;
cin >> function;
switch(function){
case ‘1’: // Thêm vào hàng d?i
int maso;
cout << “Ma so tien trinh vao hang doi: ”;
cin >> maso;
insert(queue, maso);
break;
case ‘2’: // L?y ra kh?i hàng d?i
cout << “Tien trinh duoc thuc hien: ” <<
remove(queue) << endl;
break;
case ‘3’: // Duy?t hàng d?i
cout<<“Cac tien trinh dang o trong hang doi la:”
<<endl;
travese(queue);
break;
}while(function != ‘5’);
release(queue); // Gi?i phóng hàng d?i
return;
}
