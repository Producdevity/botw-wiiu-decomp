#include "botw/heap_manager.h"

extern "C" void* fn_0308e5b4(unsigned size, void* heap, int alignment);
extern "C" void* fn_039a29f4(void* storage);
extern "C" const unsigned char data_1034b8a0[];
extern "C" void* data_1047dc38;
extern "C" Disposer* data_1047dc3c;

inline void* operator new(__typeof__(sizeof(0)), void* where) throw() { return where; }

namespace {
struct SingletonDisposer : Disposer {
    SingletonDisposer(void* owner) {
        fn_030a59d4(this, owner, 3);
        vtable = data_1034b8a0;
    }
};
}

extern "C" void* fn_039a2b48(void* heap) {
    if (data_1047dc38 == 0) {
        char* memory = static_cast<char*>(fn_0308e5b4(0x200, heap, 4));
        data_1047dc3c = new (memory + 4) SingletonDisposer(heap);
        void* instance = memory;
        if (instance != 0) {
            instance = fn_039a29f4(instance);
        }
        data_1047dc38 = instance;
    }
    return data_1047dc38;
}
