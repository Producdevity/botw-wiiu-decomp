#include "botw/heap_manager.h"

extern "C" void* fn_0308e5b4(unsigned size, void* heap, int alignment);
extern "C" void* fn_030a2ca8(void* storage);
extern "C" const unsigned char data_10260918[];
extern "C" void* data_1046c888;
extern "C" Disposer* data_1046c88c;

inline void* operator new(__typeof__(sizeof(0)), void* where) throw() { return where; }

namespace {
struct SingletonDisposer : Disposer {
    SingletonDisposer(void* owner) {
        fn_030a59d4(this, owner, 3);
        vtable = data_10260918;
    }
};
}

extern "C" void* fn_030a2ce8(void* heap) {
    if (data_1046c888 == 0) {
        char* memory = static_cast<char*>(fn_0308e5b4(0x51c, heap, 4));
        data_1046c88c = new (memory + 4) SingletonDisposer(heap);
        void* instance = memory;
        if (instance != 0) {
            instance = fn_030a2ca8(instance);
        }
        data_1046c888 = instance;
    }
    return data_1046c888;
}
