#include<iostream>
using namespace std;

void Swap2No(int*,int*);
int Add(int* ,int*);
void AddVal(int*,int*,int*);
void Factorial(int*,int*);

void Add(int& i,int& j,int&k)
{
    
}
int main(int argc,char* argv[]){

    //argc : argument count
    //argv : argument values

    cout<<"No of arguments Passed : "<<argc<<endl;

    if(argc<=1)
        return -1;

    for(int i=0;i<argc;i++)
        cout<<"argv["<<i<<"]"<<" : "<<argv[i]<<endl;

    //argv[0] is always the program name
    //Actual arguments start from argv[1]
    int p = atoi(argv[1]);
    int q = atoi(argv[2]);
    int result = 1;

    Factorial(&p,&result);
    cout<<"Factorial of " <<p<<" is "<<result<<endl;
    cout<<"B4 Swaping : "<<p<<" "<<q<<endl;
    Swap2No(&p,&q);
    cout<<"Af Swaping : "<<p<<" "<<q<<endl;
    cout<<"Sum of Add : "<<Add(&p,&q)<<endl;
    AddVal(&p,&q,&result);
    cout<<"Sum of AddVal : "<<result<<endl;
    return 0; // return 0, means program executed successfully;Non-zero return value indicates an error
}

void AddVal(int* i,int* j,int* k){
    *k=*i+*j;
}
void Factorial(int* a,int* b){
    if(*a<0){
        *b=0;
        return;
    }

    if(*a==0||*a==1){
        *b=1;
        return;
    }

    int tmp = *a-1;
    Factorial(&tmp,b);
    *b *= *a;
}

int Add(int* i,int* j){
    return *i+*j;
}
void Swap2No(int* p,int*q){
    cout<<"InSide Swap2No!\n";
    /*
    int temp;
    temp = *p;
    *p = *q;
    *q = temp;
    */
    *p = *p+*q;
    *q = *p-*q;
    *p = *p-*q;
    cout<<"Exit - Swap2No!\n";
}