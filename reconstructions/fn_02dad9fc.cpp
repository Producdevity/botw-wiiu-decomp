#include "botw/heap_manager.h"

extern "C" void* fn_0308e5b4(unsigned size, void* heap, int alignment);
extern "C" void* fn_02dad024(void* storage);
extern "C" const unsigned char data_101e9928[];
extern "C" void* data_10463ffc;
extern "C" Disposer* data_10464000;

inline void* operator new(__typeof__(sizeof(0)), void* where) throw() { return where; }

namespace {
struct SingletonDisposer : Disposer {
    SingletonDisposer(void* owner) {
        fn_030a59d4(this, owner, 3);
        vtable = data_101e9928;
    }
};
}

extern "C" void* fn_02dad9fc(void* heap) {
    if (data_10463ffc == 0) {
        char* memory = static_cast<char*>(fn_0308e5b4(0x2e40, heap, 4));
        data_10464000 = new (memory + 8) SingletonDisposer(heap);
        void* instance = memory;
        if (instance != 0) {
            instance = fn_02dad024(instance);
        }
        data_10463ffc = instance;
    }
    return data_10463ffc;
}
