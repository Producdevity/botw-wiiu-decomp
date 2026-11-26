#include "botw/heap_manager.h"

extern "C" void* fn_0308e5b4(unsigned size, void* heap, int alignment);
extern "C" void* fn_03424b9c(void* storage);
extern "C" const unsigned char data_102c35fc[];
extern "C" void* data_1046f5e8;
extern "C" Disposer* data_1046f5ec;

inline void* operator new(__typeof__(sizeof(0)), void* where) throw() { return where; }

namespace {
struct SingletonDisposer : Disposer {
    SingletonDisposer(void* owner) {
        fn_030a59d4(this, owner, 3);
        vtable = data_102c35fc;
    }
};
}

extern "C" void* fn_03424bec(void* heap) {
    if (data_1046f5e8 == 0) {
        char* memory = static_cast<char*>(fn_0308e5b4(0x20, heap, 4));
        data_1046f5ec = new (memory + 4) SingletonDisposer(heap);
        void* instance = memory;
        if (instance != 0) {
            instance = fn_03424b9c(instance);
        }
        data_1046f5e8 = instance;
    }
    return data_1046f5e8;
}
