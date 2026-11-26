#include "botw/heap_manager.h"

extern "C" void* fn_0308e5b4(unsigned size, void* heap, int alignment);
extern "C" void* fn_0317890c(void* storage);
extern "C" const unsigned char data_1028b360[];
extern "C" void* data_1046ce60;
extern "C" Disposer* data_1046ce64;

inline void* operator new(__typeof__(sizeof(0)), void* where) throw() { return where; }

namespace {
struct SingletonDisposer : Disposer {
    SingletonDisposer(void* owner) {
        fn_030a59d4(this, owner, 3);
        vtable = data_1028b360;
    }
};
}

extern "C" void* fn_03178b04(void* heap) {
    if (data_1046ce60 == 0) {
        char* memory = static_cast<char*>(fn_0308e5b4(0xc8, heap, 4));
        data_1046ce64 = new (memory + 4) SingletonDisposer(heap);
        void* instance = memory;
        if (instance != 0) {
            instance = fn_0317890c(instance);
        }
        data_1046ce60 = instance;
    }
    return data_1046ce60;
}
