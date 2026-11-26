#include "botw/heap_manager.h"

extern "C" void* fn_0308e5b4(unsigned size, void* heap, int alignment);
extern "C" void* fn_03b3f114(void* storage);
extern "C" const unsigned char data_103751d8[];
extern "C" void* data_1047ed38;
extern "C" Disposer* data_1047ed3c;

inline void* operator new(__typeof__(sizeof(0)), void* where) throw() { return where; }

namespace {
struct SingletonDisposer : Disposer {
    SingletonDisposer(void* owner) {
        fn_030a59d4(this, owner, 3);
        vtable = data_103751d8;
    }
};
}

extern "C" void* fn_03b3f294(void* heap) {
    if (data_1047ed38 == 0) {
        char* memory = static_cast<char*>(fn_0308e5b4(0x15c, heap, 4));
        data_1047ed3c = new (memory + 4) SingletonDisposer(heap);
        void* instance = memory;
        if (instance != 0) {
            instance = fn_03b3f114(instance);
        }
        data_1047ed38 = instance;
    }
    return data_1047ed38;
}
