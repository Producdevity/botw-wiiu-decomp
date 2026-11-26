#include "botw/heap_manager.h"

extern "C" void* fn_0308e5b4(unsigned size, void* heap, int alignment);
extern "C" void* fn_03b3d64c(void* storage);
extern "C" const unsigned char data_10374f70[];
extern "C" void* data_1047ed28;
extern "C" Disposer* data_1047ed2c;

inline void* operator new(__typeof__(sizeof(0)), void* where) throw() { return where; }

namespace {
struct SingletonDisposer : Disposer {
    SingletonDisposer(void* owner) {
        fn_030a59d4(this, owner, 3);
        vtable = data_10374f70;
    }
};
}

extern "C" void* fn_03b3d840(void* heap) {
    if (data_1047ed28 == 0) {
        char* memory = static_cast<char*>(fn_0308e5b4(0x16c, heap, 4));
        data_1047ed2c = new (memory + 4) SingletonDisposer(heap);
        void* instance = memory;
        if (instance != 0) {
            instance = fn_03b3d64c(instance);
        }
        data_1047ed28 = instance;
    }
    return data_1047ed28;
}
