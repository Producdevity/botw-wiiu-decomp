#include "botw/heap_manager.h"

struct ThreadRegistry {
    unsigned char unknown[0x60];
    int threadSlot;
};

struct RegisteredThread {
    unsigned char unknown[0x70];
    void* currentHeap;
};

extern "C" ThreadRegistry* data_1046c920;
extern "C" void* fn_0434c488(int slot);

extern "C" void* fn_030aa420(HeapManager* manager, void* heap) {
    RegisteredThread* thread = static_cast<RegisteredThread*>(fn_0434c488(data_1046c920->threadSlot));
    void* previous = thread->currentHeap;
    thread->currentHeap = heap;
    return previous;
}
