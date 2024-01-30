#include <iostream>

int main() {
    //part a create identity matrix normally
    int arr[5][5];
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            if (i == j) {
                arr[i][j] = 1;
            } else {arr[i][j] = 0;}
        }
    }
    //part b display the matrix normally
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            std::cout << arr[i][j] << " ";
        }
        std::cout << std::endl;
    }
    std::cout << std::endl << std::endl;
    //part c print using pointers
    int *xptr = &(arr[0][0]);
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            std::cout << *xptr << " ";
            xptr++;
        }
        std::cout << std::endl;
    }
    std::cout << std::endl << std::endl;
    //part d fill the matrix using pointers
    xptr = &(arr[0][0]);
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            if (i == j) {
                *xptr = 1;
            } else {*xptr = 0;}
        }
    }
    //part e swap rows using pointers
    int *row0 = &(arr[0][0]);
    int *row4 = &(arr[4][0]);

        for (int i = 0; i < 5; i++) {
            int temp = *(row0 + i); //addr of row 0 indexes
            *(row0 + i) = *(row4 + i); //swap and dereference
            *(row4 + i) = temp;
        }



        //part f print the matrix
        for (int i = 0; i < 5; i++) {
            for (int j = 0; j < 5; j++) {
                std::cout << *xptr << " ";
                xptr++;
            }
            std::cout << std::endl;
        }
    }
