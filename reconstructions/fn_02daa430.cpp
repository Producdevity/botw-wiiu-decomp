#include "botw/heap_manager.h"

extern "C" void* fn_0308e5b4(unsigned size, void* heap, int alignment);
extern "C" void* fn_02daa3a0(void* storage);
extern "C" const unsigned char data_101e91f0[];
extern "C" void* data_10463fe8;
extern "C" Disposer* data_10463fec;

inline void* operator new(__typeof__(sizeof(0)), void* where) throw() { return where; }

namespace {
struct SingletonDisposer : Disposer {
    SingletonDisposer(void* owner) {
        fn_030a59d4(this, owner, 3);
        vtable = data_101e91f0;
    }
};
}

extern "C" void* fn_02daa430(void* heap) {
    if (data_10463fe8 == 0) {
        char* memory = static_cast<char*>(fn_0308e5b4(0x80, heap, 8));
        data_10463fec = new (memory + 4) SingletonDisposer(heap);
        void* instance = memory;
        if (instance != 0) {
            instance = fn_02daa3a0(instance);
        }
        data_10463fe8 = instance;
    }
    return data_10463fe8;
}
