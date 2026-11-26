#include "botw/heap_manager.h"

extern "C" void* fn_0308e5b4(unsigned size, void* heap, int alignment);
extern "C" void* fn_02e88fd4(void* storage);
extern "C" const unsigned char data_10218758[];
extern "C" void* data_10469894;
extern "C" Disposer* data_10469898;

inline void* operator new(__typeof__(sizeof(0)), void* where) throw() { return where; }

namespace {
struct SingletonDisposer : Disposer {
    SingletonDisposer(void* owner) {
        fn_030a59d4(this, owner, 3);
        vtable = data_10218758;
    }
};
}

extern "C" void* fn_02e89044(void* heap) {
    if (data_10469894 == 0) {
        char* memory = static_cast<char*>(fn_0308e5b4(0x1c, heap, 4));
        data_10469898 = new (memory + 4) SingletonDisposer(heap);
        void* instance = memory;
        if (instance != 0) {
            instance = fn_02e88fd4(instance);
        }
        data_10469894 = instance;
    }
    return data_10469894;
}
