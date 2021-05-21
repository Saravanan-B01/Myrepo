#include <iostream>

using namespace std;

int main()
{
    int **a;
    a=(int**)malloc(3* sizeof(int));
    a[0] = (int *) malloc(3*sizeof(int));
    a[1] = (int *) malloc(3*sizeof(int));
    a[2] = (int *) malloc(3*sizeof(int));
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            *(i+*(a+j))= i+j;
            printf("Array %d\n", *(i+*(a+j)));
        }
    }
    return 0;
}

