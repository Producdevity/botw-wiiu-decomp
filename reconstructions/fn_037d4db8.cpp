#include "botw/heap_manager.h"

extern "C" void* fn_0308e5b4(unsigned size, void* heap, int alignment);
extern "C" void* fn_037d4c90(void* storage);
extern "C" const unsigned char data_1031d5cc[];
extern "C" void* data_1047c350;
extern "C" Disposer* data_1047c354;

inline void* operator new(__typeof__(sizeof(0)), void* where) throw() { return where; }

namespace {
struct SingletonDisposer : Disposer {
    SingletonDisposer(void* owner) {
        fn_030a59d4(this, owner, 3);
        vtable = data_1031d5cc;
    }
};
}

extern "C" void* fn_037d4db8(void* heap) {
    if (data_1047c350 == 0) {
        char* memory = static_cast<char*>(fn_0308e5b4(0xc4, heap, 4));
        data_1047c354 = new (memory + 4) SingletonDisposer(heap);
        void* instance = memory;
        if (instance != 0) {
            instance = fn_037d4c90(instance);
        }
        data_1047c350 = instance;
    }
    return data_1047c350;
}
