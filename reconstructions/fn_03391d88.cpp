#include "botw/heap_manager.h"

extern "C" void* fn_0308e5b4(unsigned size, void* heap, int alignment);
extern "C" void* fn_03391c4c(void* storage);
extern "C" const unsigned char data_102b8ecc[];
extern "C" void* data_1046e138;
extern "C" Disposer* data_1046e13c;

inline void* operator new(__typeof__(sizeof(0)), void* where) throw() { return where; }

namespace {
struct SingletonDisposer : Disposer {
    SingletonDisposer(void* owner) {
        fn_030a59d4(this, owner, 3);
        vtable = data_102b8ecc;
    }
};
}

extern "C" void* fn_03391d88(void* heap) {
    if (data_1046e138 == 0) {
        char* memory = static_cast<char*>(fn_0308e5b4(0x1f8, heap, 8));
        data_1046e13c = new (memory + 28) SingletonDisposer(heap);
        void* instance = memory;
        if (instance != 0) {
            instance = fn_03391c4c(instance);
        }
        data_1046e138 = instance;
    }
    return data_1046e138;
}
