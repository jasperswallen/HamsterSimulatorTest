#include <rtos.h>

extern "C" int mbed_start();

int mbed_start()
{
    printf("Hello, world!\r\n");

    int count = 0;
    while (1)
    {
        ThisThread::sleep_for(std::chrono::milliseconds(1000));
        printf("%d\r\n", count++);
    }
}
