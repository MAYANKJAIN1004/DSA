#include<iostream>
#include<stdlib.h>
using namespace std;

int main ()
{
    int row,col;

    cout<<"Enter Size of Array - Row :";
    cin>>row;
    cout<<"Enter Size of Array - Column :";
    cin>>col;
    cout <<"Creating Matrix of size "<<row<<" * "<<col<<endl;
    // Step 1: Allocate memory for row pointers
    //int** parPtr = (int**)calloc(row,sizeof(int*));
    int** parPtr = new int*[row];

    if(parPtr == NULL)
    {
        cout<<"parPtr is NULL!"<<endl;
        return -1;
    }

    // Step 2: Allocate memory for each row
    for(int i=0;i<row;i++){
        //parPtr[i] = (int*)calloc(col,sizeof(int));
        parPtr[i] = new int[col];
    }
    // Step 3: Use the array to store values
    for(int r=0;r<row;r++){
        for(int c=0;c<col;c++){
            parPtr[r][c] = r+c;
        }
    }
    // Step 4: Use the array to print values
    for(int r=0;r<row;r++){
        for(int c=0;c<col;c++){
            cout<<parPtr[r][c]<<" ";
        }
        cout<<endl;
    }
    // Step 5: Free memory
    for(int i=0;i<row;i++){
        if(parPtr[i] != NULL){
            //free(parPtr[i]);
            delete[] parPtr[i];
            parPtr[i] = nullptr;
        }
    }
    //free(parPtr);
    delete[]parPtr;
    parPtr = nullptr;
    return 0;
}