#include <cstdio>
int func2(int a[][2]) {
    return a[1][2];
}
int func0() {
    return 1;
}

int func1(int a[]) {
    return a[0] * 2;
}

void funcx() {
    printf("a void function\n");
}

int funcz(int a1, int a2) {
    return a1 + a2;
}

int main() {
    printf("21373302\n");
    const int a1 = 0, a2 = 0, a3[3] = {0,0,0};
    int v1, v2, v3[3];
    v3[0] = 2;
    const int Const = 2;
    const int oneDimConstArray[3] = {1, 2 * func0(), 3};
    printf("const int oneDimConstArray[3] = {1, 2 * func0(), 3};\n");
    const int towDimConstArray[2][2] = {1, 2 * 9, 3, 4 * func0()};
    printf("towDimConstArray[2][2] = {1, 2 * 9, 3, 4 * func0()};\n");
    int Var = 2 * Const;
    int oneDimVarArray[3] = {2 * Const, 2 * Const - 1, 2 * Const + 3 * func0()};
    printf("int oneDimVarArray[3] = {2 * Const, 2 * Const + 1, 2 * Const + 3 * func0()};\n");
    int twoDimVarArray[2][2] = {2 % Const, 2 * Const + 1, 2 * Const + 2, 2 * Const + 3 / func0()};
    printf("int twoDimVarArray[2][2] = {2 mol Const, 2 * Const + 1, 2 * Const + 2, 2 * Const + 3 / func0()};\n");
    int t = func2(twoDimVarArray);
    printf("int t = function2(twoDimVarArray);\n");
    int ti = func1(oneDimVarArray);
    printf("int ti = func1(oneDimVarArray);\n");
    int i;
    for (i = 0; i < 5; i = i + 1) {
        int inner = 0;
        if (i == 4) {
            break;
        } else {
            continue;
        }

    }
    if (i != 0) {

    }
    if (!(i == 2)) {

    }
    printf("for loop break continue\n");
    int f = (1 != oneDimConstArray[2]);
    printf("int f = (1 != oneDimConstArray[2]);\n");
    funcx();
    funcz(2, oneDimVarArray[0]);
    return 0;
}


