#include "botw/heap_manager.h"

extern "C" void* fn_0308e5b4(unsigned size, void* heap, int alignment);
extern "C" void* fn_03200420(void* storage);
extern "C" const unsigned char data_102974d8[];
extern "C" void* data_1046d5b0;
extern "C" Disposer* data_1046d5b4;

inline void* operator new(__typeof__(sizeof(0)), void* where) throw() { return where; }

namespace {
struct SingletonDisposer : Disposer {
    SingletonDisposer(void* owner) {
        fn_030a59d4(this, owner, 3);
        vtable = data_102974d8;
    }
};
}

extern "C" void* fn_03200950(void* heap) {
    if (data_1046d5b0 == 0) {
        char* memory = static_cast<char*>(fn_0308e5b4(0x858, heap, 4));
        data_1046d5b4 = new (memory + 16) SingletonDisposer(heap);
        void* instance = memory;
        if (instance != 0) {
            instance = fn_03200420(instance);
        }
        data_1046d5b0 = instance;
    }
    return data_1046d5b0;
}
