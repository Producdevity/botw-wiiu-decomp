#include "botw/heap_manager.h"

extern "C" void* fn_0308e5b4(unsigned size, void* heap, int alignment);
extern "C" void* fn_0384b3ac(void* storage);
extern "C" const unsigned char data_103265d8[];
extern "C" void* data_1047c720;
extern "C" Disposer* data_1047c724;

inline void* operator new(__typeof__(sizeof(0)), void* where) throw() { return where; }

namespace {
struct SingletonDisposer : Disposer {
    SingletonDisposer(void* owner) {
        fn_030a59d4(this, owner, 3);
        vtable = data_103265d8;
    }
};
}

extern "C" void* fn_0384b55c(void* heap) {
    if (data_1047c720 == 0) {
        char* memory = static_cast<char*>(fn_0308e5b4(0x170, heap, 4));
        data_1047c724 = new (memory + 4) SingletonDisposer(heap);
        void* instance = memory;
        if (instance != 0) {
            instance = fn_0384b3ac(instance);
        }
        data_1047c720 = instance;
    }
    return data_1047c720;
}
