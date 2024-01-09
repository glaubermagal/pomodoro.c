#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

void beep() {
    #ifdef _WIN32
        printf("\a");
        Sleep(200);
    #elif __linux__
        printf("\a");
        fflush(stdout);
        usleep(200000);
    #elif __APPLE__
        printf("\a");
        fflush(stdout);
        usleep(200000);
    #else
        printf("Beep not supported on this platform.\n");
    #endif
}

void startPomodoro(int workMinutes, int breakMinutes) {
    int seconds = workMinutes * 60;

    while (seconds > 0) {
        printf("\r🍅 WORK... %02d:%02d ", seconds / 60, seconds % 60);
        fflush(stdout);
        sleep(1);
        seconds--;
    }

    beep();

    seconds = breakMinutes * 60;

    while (seconds > 0) {
        printf("\r🍝 BREAK... %02d:%02d", seconds / 60, seconds % 60);
        fflush(stdout);
        sleep(1);
        seconds--;
    }

    beep();
    beep();
    beep();
}

int main(int argc, char *argv[]) {
    int workMinutes = 25;
    int breakMinutes = 5;

    if (argc > 1) {
        workMinutes = atoi(argv[1]);
        if (argc > 2) {
            breakMinutes = atoi(argv[2]);
        }
    }
    
    while (1) {
        startPomodoro(workMinutes, breakMinutes);
    }

    return 0;
}
