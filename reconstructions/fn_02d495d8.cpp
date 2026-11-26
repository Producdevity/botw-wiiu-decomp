#include "botw/heap_manager.h"

extern "C" void* fn_0308e5b4(unsigned size, void* heap, int alignment);
extern "C" void* fn_02d493ac(void* storage);
extern "C" const unsigned char data_101e486c[];
extern "C" void* data_10463f38;
extern "C" Disposer* data_10463f3c;

inline void* operator new(__typeof__(sizeof(0)), void* where) throw() { return where; }

namespace {
struct SingletonDisposer : Disposer {
    SingletonDisposer(void* owner) {
        fn_030a59d4(this, owner, 3);
        vtable = data_101e486c;
    }
};
}

extern "C" void* fn_02d495d8(void* heap) {
    if (data_10463f38 == 0) {
        char* memory = static_cast<char*>(fn_0308e5b4(0x364, heap, 4));
        data_10463f3c = new (memory + 4) SingletonDisposer(heap);
        void* instance = memory;
        if (instance != 0) {
            instance = fn_02d493ac(instance);
        }
        data_10463f38 = instance;
    }
    return data_10463f38;
}
