// receiver.c
 
#include <stdio.h>


#include <signal.h>


#include <unistd.h>
 
void sigusr1_handler(int signum) {


    printf("Received SIGUSR1 signal (%d)\n", signum);


}
 
int main() {


    // Register SIGUSR1 handler


    signal(SIGUSR1, sigusr1_handler);
 
    printf("Waiting for SIGUSR1 signal...\n");
 
    // Infinite loop to keep the program running


    while (1) {


        sleep(1);


    }
 
    return 0;

} 
 
// sender.c
 
#include <stdio.h>


#include <stdlib.h>


#include <signal.h>


#include <unistd.h>
 
int main() {


    pid_t receiver_pid;
 
    // Prompt user to enter PID of the receiver


    printf("Enter PID of the receiver process: ");


    if (scanf("%d", &receiver_pid) != 1) {


        fprintf(stderr, "Invalid input. Exiting...\n");


        return 1;


    }
 
    // Send SIGUSR1 signal to the specified process


    if (kill(receiver_pid, SIGUSR1) == -1) {


        perror("kill");


        return 1;


    }
 
    printf("Sent SIGUSR1 to process with PID %d\n", receiver_pid);
 
    return 0;
} 
