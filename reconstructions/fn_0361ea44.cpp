#include "botw/heap_manager.h"

extern "C" void* fn_0308e5b4(unsigned size, void* heap, int alignment);
extern "C" void* fn_0361e914(void* storage);
extern "C" const unsigned char data_102fc744[];
extern "C" void* data_1047b43c;
extern "C" Disposer* data_1047b440;

inline void* operator new(__typeof__(sizeof(0)), void* where) throw() { return where; }

namespace {
struct SingletonDisposer : Disposer {
    SingletonDisposer(void* owner) {
        fn_030a59d4(this, owner, 3);
        vtable = data_102fc744;
    }
};
}

extern "C" void* fn_0361ea44(void* heap) {
    if (data_1047b43c == 0) {
        char* memory = static_cast<char*>(fn_0308e5b4(0x128, heap, 4));
        data_1047b440 = new (memory + 4) SingletonDisposer(heap);
        void* instance = memory;
        if (instance != 0) {
            instance = fn_0361e914(instance);
        }
        data_1047b43c = instance;
    }
    return data_1047b43c;
}
