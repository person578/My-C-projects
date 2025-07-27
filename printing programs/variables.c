#include <stdio.h>
#include <stdbool.h>

int main() {

    bool isOnline = 0;
    bool isStudent = 0;

    if (isOnline){
        printf("You are online\n\n");
    }

    else{
        printf("You are not online\n\n");
    }

    if (isStudent){
        printf("You ARE a Student\n\n");
    }

    else{
        printf("You AREN'T a Student\n\n");
    }

    return 0;
}