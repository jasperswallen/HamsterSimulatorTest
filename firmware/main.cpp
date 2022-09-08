#include <mbed.h>

int main()
{
    printf("Hello, world!\r\n");

    int count = 0;
    while (1)
    {
        ThisThread::sleep_for(100ms);
        printf("%d\r\n", count++);
    }
}
