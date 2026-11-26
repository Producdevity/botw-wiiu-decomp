#include "botw/heap_manager.h"

extern "C" void* fn_0308e5b4(unsigned size, void* heap, int alignment);
extern "C" void* fn_0340cba4(void* storage);
extern "C" const unsigned char data_102c0e30[];
extern "C" void* data_1046f488;
extern "C" Disposer* data_1046f48c;

inline void* operator new(__typeof__(sizeof(0)), void* where) throw() { return where; }

namespace {
struct SingletonDisposer : Disposer {
    SingletonDisposer(void* owner) {
        fn_030a59d4(this, owner, 3);
        vtable = data_102c0e30;
    }
};
}

extern "C" void* fn_0340ccb8(void* heap) {
    if (data_1046f488 == 0) {
        char* memory = static_cast<char*>(fn_0308e5b4(0x23c, heap, 4));
        data_1046f48c = new (memory + 4) SingletonDisposer(heap);
        void* instance = memory;
        if (instance != 0) {
            instance = fn_0340cba4(instance);
        }
        data_1046f488 = instance;
    }
    return data_1046f488;
}
