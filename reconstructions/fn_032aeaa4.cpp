#include "botw/heap_manager.h"

extern "C" void* fn_0308e5b4(unsigned size, void* heap, int alignment);
extern "C" void* fn_032ae99c(void* storage);
extern "C" const unsigned char data_102a45a4[];
extern "C" void* data_1046d6ac;
extern "C" Disposer* data_1046d6b0;

inline void* operator new(__typeof__(sizeof(0)), void* where) throw() { return where; }

namespace {
struct SingletonDisposer : Disposer {
    SingletonDisposer(void* owner) {
        fn_030a59d4(this, owner, 3);
        vtable = data_102a45a4;
    }
};
}

extern "C" void* fn_032aeaa4(void* heap) {
    if (data_1046d6ac == 0) {
        char* memory = static_cast<char*>(fn_0308e5b4(0x13c, heap, 4));
        data_1046d6b0 = new (memory + 4) SingletonDisposer(heap);
        void* instance = memory;
        if (instance != 0) {
            instance = fn_032ae99c(instance);
        }
        data_1046d6ac = instance;
    }
    return data_1046d6ac;
}
