#include <stdio.h>

int main() {
    FILE* file = fopen("newFile.txt","w");
    if(file == NULL) {
        printf("file is not valid");
        return 1;
    } else {
        fprintf(file,"This file is for C style writing");
        fclose(file);
    }
    return 0;
}
