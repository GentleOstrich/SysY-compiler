//
// Created by lyh on 9/12/2023.
//
#include <cstdio>

//
// Created by lyh on 9/12/2023.
//
#include <cstdio>

void function0(int a) {
    printf("normal FuncFParam:%d\n", a);
}

void function1(int a[2]) {
    printf("part of 2 FuncFParam:");
    for (int i = 0; i < 3; ++i) {
        printf("a[%d]=%d,", i, a[i]);
    }
    printf("\n");
}

void function2(int a[][2]) {
    printf("2 Dim FuncFParam:");
    for (int i = 0; i < 2; ++i) {
        for (int j = 0; j < 2; ++j) {
            printf("a[0][%d]=%d,", j, a[i][j]);
        }
    }
    printf("\n");
}


int main() {
    printf("21373302\n");
    const int Const = 2;
    printf("ConstDef:a=%d\n", Const);
    const int oneDimConstArray[3] = {1, 2, 3};
    const int towDimConstArray[2][2] = {1, 2, 3, 4};
    int Var = 2 * Const;
    printf("VarDef:a=%d\n", Var);
    int oneDimVarArray[3] = {2 * Const, 2 * Const + 1, 2 * Const + 3};
    int twoDimVarArray[2][2] = {2 * Const, 2 * Const + 1, 2 * Const + 2, 2 * Const + 3};

    function0(Var);
    printf("normal FuncRParams:%d\n", Var);

    ++Var;
    printf("++Var LVal:%d\n", Var);

    return 0;
}

