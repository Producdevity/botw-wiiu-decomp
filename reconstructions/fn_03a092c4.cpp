#include "botw/heap_manager.h"

extern "C" void* fn_0308e5b4(unsigned size, void* heap, int alignment);
extern "C" void* fn_03a09168(void* storage);
extern "C" const unsigned char data_10356cd0[];
extern "C" void* data_1047e400;
extern "C" Disposer* data_1047e404;

inline void* operator new(__typeof__(sizeof(0)), void* where) throw() { return where; }

namespace {
struct SingletonDisposer : Disposer {
    SingletonDisposer(void* owner) {
        fn_030a59d4(this, owner, 3);
        vtable = data_10356cd0;
    }
};
}

extern "C" void* fn_03a092c4(void* heap) {
    if (data_1047e400 == 0) {
        char* memory = static_cast<char*>(fn_0308e5b4(0x1484, heap, 4));
        data_1047e404 = new (memory + 4) SingletonDisposer(heap);
        void* instance = memory;
        if (instance != 0) {
            instance = fn_03a09168(instance);
        }
        data_1047e400 = instance;
    }
    return data_1047e400;
}
