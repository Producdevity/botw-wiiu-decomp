#include "botw/heap_manager.h"

extern "C" void* fn_0308e5b4(unsigned size, void* heap, int alignment);
extern "C" void* fn_02a16acc(void* storage);
extern "C" const unsigned char data_101875a4[];
extern "C" void* data_10463710;
extern "C" Disposer* data_10463714;

inline void* operator new(__typeof__(sizeof(0)), void* where) throw() { return where; }

namespace {
struct SingletonDisposer : Disposer {
    SingletonDisposer(void* owner) {
        fn_030a59d4(this, owner, 3);
        vtable = data_101875a4;
    }
};
}

extern "C" void* fn_02a16e10(void* heap) {
    if (data_10463710 == 0) {
        char* memory = static_cast<char*>(fn_0308e5b4(0x2ec0, heap, 4));
        data_10463714 = new (memory + 4) SingletonDisposer(heap);
        void* instance = memory;
        if (instance != 0) {
            instance = fn_02a16acc(instance);
        }
        data_10463710 = instance;
    }
    return data_10463710;
}
