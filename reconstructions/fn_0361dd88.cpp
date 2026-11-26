#include "botw/heap_manager.h"

extern "C" void* fn_0308e5b4(unsigned size, void* heap, int alignment);
extern "C" void* fn_0361dd24(void* storage);
extern "C" const unsigned char data_102fc3fc[];
extern "C" void* data_1047b428;
extern "C" Disposer* data_1047b42c;

inline void* operator new(__typeof__(sizeof(0)), void* where) throw() { return where; }

namespace {
struct SingletonDisposer : Disposer {
    SingletonDisposer(void* owner) {
        fn_030a59d4(this, owner, 3);
        vtable = data_102fc3fc;
    }
};
}

extern "C" void* fn_0361dd88(void* heap) {
    if (data_1047b428 == 0) {
        char* memory = static_cast<char*>(fn_0308e5b4(0x30, heap, 4));
        data_1047b42c = new (memory + 4) SingletonDisposer(heap);
        void* instance = memory;
        if (instance != 0) {
            instance = fn_0361dd24(instance);
        }
        data_1047b428 = instance;
    }
    return data_1047b428;
}
