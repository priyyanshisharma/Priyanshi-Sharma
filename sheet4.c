#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int user, computer;
    srand(time(0));
    printf("1. rock\n2. paper\n3. scissors\n");
    scanf("%d", &user);
    computer = rand() % 3 + 1;

    if (user == computer) {
        printf("it's a tie\n");
    } else if ((user == 1 && computer == 2) || (user == 2 && computer == 3) || (user == 3 && computer == 1)) {
        printf("computer wins\n");
    } else {
        printf("you win\n");
    }

    return 0;
}
