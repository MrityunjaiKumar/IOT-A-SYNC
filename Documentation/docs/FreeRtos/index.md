# Basics of FreeRtos

## What is RTOS?

Real Time Operating System, commonly known as an RTOS, is a software component that rapidly switches between tasks, giving the impression that multiple programs are being executed at the same time on a single processing core.

Most operating systems appear to allow multiple programs to execute at the same time. This is called multi-tasking. In reality, each processor core can only be running a single thread of execution at any given point in time. A part of the operating system called the scheduler is responsible for deciding which program to run when, and provides the illusion of simultaneous execution by rapidly switching between each program.

## What is FreeRtos?

FreeRTOS is a real-time operating system kernel for embedded devices that has been ported to 35 microcontroller platforms. It is distributed under the MIT License.


## Code Examples

### platformio.ini
```ini
{! F:\\ESP32-IOTA-SYNC\\repo\\software\\FreeRtos_Tutorial\\platformio.ini!}
```

### main.cpp
```cpp
{! F:\\ESP32-IOTA-SYNC\\repo\\software\\FreeRtos_Tutorial\\src\\main.cpp!}
```

### Common.h
```h
{! F:\\ESP32-IOTA-SYNC\\repo\\software\\FreeRtos_Tutorial\\src\\Common.h!}
```

### Creating_Tasks.cpp
```cpp
{! F:\\ESP32-IOTA-SYNC\\repo\\software\\FreeRtos_Tutorial\\src\\Creating_Tasks.cpp!}
```

### GetExecutionCore.cpp
```cpp
{! F:\\ESP32-IOTA-SYNC\\repo\\software\\FreeRtos_Tutorial\\src\\GetExecutionCore.cpp!}
```

### QueuesBetweenTask.cpp
```cpp
{! F:\\ESP32-IOTA-SYNC\\repo\\software\\FreeRtos_Tutorial\\src\\QueuesBetweenTask.cpp!}
```
