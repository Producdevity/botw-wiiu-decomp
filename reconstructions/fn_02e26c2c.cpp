#include "botw/heap_manager.h"

extern "C" void* fn_0308e5b4(unsigned size, void* heap, int alignment);
extern "C" void* fn_02e264f4(void* storage);
extern "C" const unsigned char data_10212c94[];
extern "C" void* data_10467bd8;
extern "C" Disposer* data_10467bdc;

inline void* operator new(__typeof__(sizeof(0)), void* where) throw() { return where; }

namespace {
struct SingletonDisposer : Disposer {
    SingletonDisposer(void* owner) {
        fn_030a59d4(this, owner, 3);
        vtable = data_10212c94;
    }
};
}

extern "C" void* fn_02e26c2c(void* heap) {
    if (data_10467bd8 == 0) {
        char* memory = static_cast<char*>(fn_0308e5b4(0x1040, heap, 4));
        data_10467bdc = new (memory + 12) SingletonDisposer(heap);
        void* instance = memory;
        if (instance != 0) {
            instance = fn_02e264f4(instance);
        }
        data_10467bd8 = instance;
    }
    return data_10467bd8;
}
