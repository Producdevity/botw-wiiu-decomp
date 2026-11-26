#include "botw/heap_manager.h"

extern "C" void* fn_0308e5b4(unsigned size, void* heap, int alignment);
extern "C" void* fn_02a14aa8(void* storage);
extern "C" const unsigned char data_10187490[];
extern "C" void* data_10463708;
extern "C" Disposer* data_1046370c;

inline void* operator new(__typeof__(sizeof(0)), void* where) throw() { return where; }

namespace {
struct SingletonDisposer : Disposer {
    SingletonDisposer(void* owner) {
        fn_030a59d4(this, owner, 3);
        vtable = data_10187490;
    }
};
}

extern "C" void* fn_02a14db8(void* heap) {
    if (data_10463708 == 0) {
        char* memory = static_cast<char*>(fn_0308e5b4(0x304, heap, 4));
        data_1046370c = new (memory + 4) SingletonDisposer(heap);
        void* instance = memory;
        if (instance != 0) {
            instance = fn_02a14aa8(instance);
        }
        data_10463708 = instance;
    }
    return data_10463708;
}
