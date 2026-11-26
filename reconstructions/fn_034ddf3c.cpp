#include "botw/heap_manager.h"

extern "C" void* fn_0308e5b4(unsigned size, void* heap, int alignment);
extern "C" void* fn_034ddeec(void* storage);
extern "C" const unsigned char data_102ce0f8[];
extern "C" void* data_1046fefc;
extern "C" Disposer* data_1046ff00;

inline void* operator new(__typeof__(sizeof(0)), void* where) throw() { return where; }

namespace {
struct SingletonDisposer : Disposer {
    SingletonDisposer(void* owner) {
        fn_030a59d4(this, owner, 3);
        vtable = data_102ce0f8;
    }
};
}

extern "C" void* fn_034ddf3c(void* heap) {
    if (data_1046fefc == 0) {
        char* memory = static_cast<char*>(fn_0308e5b4(0x20, heap, 4));
        data_1046ff00 = new (memory + 4) SingletonDisposer(heap);
        void* instance = memory;
        if (instance != 0) {
            instance = fn_034ddeec(instance);
        }
        data_1046fefc = instance;
    }
    return data_1046fefc;
}
