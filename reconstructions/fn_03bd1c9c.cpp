#include "botw/heap_manager.h"

extern "C" void* fn_0308e5b4(unsigned size, void* heap, int alignment);
extern "C" void* fn_03bd1bec(void* storage);
extern "C" const unsigned char data_103cea30[];
extern "C" void* data_1047f0bc;
extern "C" Disposer* data_1047f0c0;

inline void* operator new(__typeof__(sizeof(0)), void* where) throw() { return where; }

namespace {
struct SingletonDisposer : Disposer {
    SingletonDisposer(void* owner) {
        fn_030a59d4(this, owner, 3);
        vtable = data_103cea30;
    }
};
}

extern "C" void* fn_03bd1c9c(void* heap) {
    if (data_1047f0bc == 0) {
        char* memory = static_cast<char*>(fn_0308e5b4(0x68, heap, 4));
        data_1047f0c0 = new (memory + 4) SingletonDisposer(heap);
        void* instance = memory;
        if (instance != 0) {
            instance = fn_03bd1bec(instance);
        }
        data_1047f0bc = instance;
    }
    return data_1047f0bc;
}
