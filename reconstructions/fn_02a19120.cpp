#include "botw/heap_manager.h"

extern "C" void* fn_0308e5b4(unsigned size, void* heap, int alignment);
extern "C" void* fn_02a18fa4(void* storage);
extern "C" const unsigned char data_101877d0[];
extern "C" void* data_10463748;
extern "C" Disposer* data_1046374c;

inline void* operator new(__typeof__(sizeof(0)), void* where) throw() { return where; }

namespace {
struct SingletonDisposer : Disposer {
    SingletonDisposer(void* owner) {
        fn_030a59d4(this, owner, 3);
        vtable = data_101877d0;
    }
};
}

extern "C" void* fn_02a19120(void* heap) {
    if (data_10463748 == 0) {
        char* memory = static_cast<char*>(fn_0308e5b4(0xad0, heap, 4));
        data_1046374c = new (memory + 4) SingletonDisposer(heap);
        void* instance = memory;
        if (instance != 0) {
            instance = fn_02a18fa4(instance);
        }
        data_10463748 = instance;
    }
    return data_10463748;
}
