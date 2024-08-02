#include <stdio.h>

#include <signal.h>

#include <unistd.h>
 
void sigint_sigterm_handler(int signum) {

    if (signum == SIGINT) {

        printf("\nCustom message: SIGINT received. Continuing execution...\n");

    } else if (signum == SIGTERM) {

        printf("\nCustom message: SIGTERM received. Terminating program...\n");

        _exit(0); 

    }

}
 
int main() {

    signal(SIGINT, sigint_sigterm_handler);

    signal(SIGTERM, sigint_sigterm_handler);
 
    printf("Press Ctrl+C to trigger SIGINT or send SIGTERM (SIGINT will be caught). PID-  %d\n", getpid());
 
    while (1) {

        sleep(1);

    }
 
    return 0;

}
 
