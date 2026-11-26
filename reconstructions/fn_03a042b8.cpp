#include "botw/heap_manager.h"

extern "C" void* fn_0308e5b4(unsigned size, void* heap, int alignment);
extern "C" void* fn_03a041d0(void* storage);
extern "C" const unsigned char data_10356824[];
extern "C" void* data_1047e3f8;
extern "C" Disposer* data_1047e3fc;

inline void* operator new(__typeof__(sizeof(0)), void* where) throw() { return where; }

namespace {
struct SingletonDisposer : Disposer {
    SingletonDisposer(void* owner) {
        fn_030a59d4(this, owner, 3);
        vtable = data_10356824;
    }
};
}

extern "C" void* fn_03a042b8(void* heap) {
    if (data_1047e3f8 == 0) {
        char* memory = static_cast<char*>(fn_0308e5b4(0x60, heap, 4));
        data_1047e3fc = new (memory + 8) SingletonDisposer(heap);
        void* instance = memory;
        if (instance != 0) {
            instance = fn_03a041d0(instance);
        }
        data_1047e3f8 = instance;
    }
    return data_1047e3f8;
}
