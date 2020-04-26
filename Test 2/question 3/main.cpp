#include <iostream>
#include <ctime>
using namespace std;

void staticArray();
void onHeap(int n);
void onStack(int n);

int main(){
unsigned int start ,stop;
start = clock();
for(int i=0;i<10000;i++)
staticArray();
stop = clock();
cout<<"Time taken by static method: "<<(stop - start)<<" ms"<<endl;
start = clock();
for(int i=0;i<10000;i++)
onStack(100000);
stop = clock();
cout<<"Time taken by onStack method: "<<(stop - start)<<" ms"<<endl;
start = clock();
for(int i=0;i<10000;i++)
onHeap(100000);
stop = clock();
cout<<"Time taken by onHeap method: "<<(stop - start)<<" ms"<<endl;
}
void staticArray(){
static int array[100000];
}
void onHeap(int n){
int *array = new int[n];
}
void onStack(int n){
int array[n];
}
