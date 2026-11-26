#include "botw/heap_manager.h"

extern "C" void* fn_0308e5b4(unsigned size, void* heap, int alignment);
extern "C" void* fn_03add7b0(void* storage);
extern "C" const unsigned char data_1036cf6c[];
extern "C" void* data_1047ebc8;
extern "C" Disposer* data_1047ebcc;

inline void* operator new(__typeof__(sizeof(0)), void* where) throw() { return where; }

namespace {
struct SingletonDisposer : Disposer {
    SingletonDisposer(void* owner) {
        fn_030a59d4(this, owner, 3);
        vtable = data_1036cf6c;
    }
};
}

extern "C" void* fn_03add81c(void* heap) {
    if (data_1047ebc8 == 0) {
        char* memory = static_cast<char*>(fn_0308e5b4(0x264, heap, 4));
        data_1047ebcc = new (memory + 4) SingletonDisposer(heap);
        void* instance = memory;
        if (instance != 0) {
            instance = fn_03add7b0(instance);
        }
        data_1047ebc8 = instance;
    }
    return data_1047ebc8;
}
