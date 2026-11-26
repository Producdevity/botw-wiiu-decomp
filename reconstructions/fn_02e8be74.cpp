#include "botw/heap_manager.h"

extern "C" void* fn_0308e5b4(unsigned size, void* heap, int alignment);
extern "C" void* fn_02e8bd48(void* storage);
extern "C" const unsigned char data_10218cc8[];
extern "C" void* data_104698c8;
extern "C" Disposer* data_104698cc;

inline void* operator new(__typeof__(sizeof(0)), void* where) throw() { return where; }

namespace {
struct SingletonDisposer : Disposer {
    SingletonDisposer(void* owner) {
        fn_030a59d4(this, owner, 3);
        vtable = data_10218cc8;
    }
};
}

extern "C" void* fn_02e8be74(void* heap) {
    if (data_104698c8 == 0) {
        char* memory = static_cast<char*>(fn_0308e5b4(0x148, heap, 4));
        data_104698cc = new (memory + 4) SingletonDisposer(heap);
        void* instance = memory;
        if (instance != 0) {
            instance = fn_02e8bd48(instance);
        }
        data_104698c8 = instance;
    }
    return data_104698c8;
}
