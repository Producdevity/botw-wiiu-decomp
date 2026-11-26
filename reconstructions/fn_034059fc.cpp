#include "botw/heap_manager.h"

extern "C" void* fn_0308e5b4(unsigned size, void* heap, int alignment);
extern "C" void* fn_034051f0(void* storage);
extern "C" const unsigned char data_102c0954[];
extern "C" void* data_1046f428;
extern "C" Disposer* data_1046f42c;

inline void* operator new(__typeof__(sizeof(0)), void* where) throw() { return where; }

namespace {
struct SingletonDisposer : Disposer {
    SingletonDisposer(void* owner) {
        fn_030a59d4(this, owner, 3);
        vtable = data_102c0954;
    }
};
}

extern "C" void* fn_034059fc(void* heap) {
    if (data_1046f428 == 0) {
        char* memory = static_cast<char*>(fn_0308e5b4(0xc90, heap, 4));
        data_1046f42c = new (memory + 144) SingletonDisposer(heap);
        void* instance = memory;
        if (instance != 0) {
            instance = fn_034051f0(instance);
        }
        data_1046f428 = instance;
    }
    return data_1046f428;
}
