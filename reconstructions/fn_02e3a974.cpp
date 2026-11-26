#include "botw/heap_manager.h"

extern "C" void* fn_0308e5b4(unsigned size, void* heap, int alignment);
extern "C" void* fn_02e39e10(void* storage);
extern "C" const unsigned char data_10214f14[];
extern "C" void* data_10467c80;
extern "C" Disposer* data_10467c84;

inline void* operator new(__typeof__(sizeof(0)), void* where) throw() { return where; }

namespace {
struct SingletonDisposer : Disposer {
    SingletonDisposer(void* owner) {
        fn_030a59d4(this, owner, 3);
        vtable = data_10214f14;
    }
};
}

extern "C" void* fn_02e3a974(void* heap) {
    if (data_10467c80 == 0) {
        char* memory = static_cast<char*>(fn_0308e5b4(0x1c38, heap, 8));
        data_10467c84 = new (memory + 4) SingletonDisposer(heap);
        void* instance = memory;
        if (instance != 0) {
            instance = fn_02e39e10(instance);
        }
        data_10467c80 = instance;
    }
    return data_10467c80;
}
