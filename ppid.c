#include <stdio.h>
#include <unistd.h>

int main(void)
{
    pid_t pid;
    pid_t ppid;

    pid = getpid();
    printf("My PID is: %u\n", pid);
    ppid = getppid();
    printf("%My parent PID is: %u\n", ppid);
    return (0);
}
