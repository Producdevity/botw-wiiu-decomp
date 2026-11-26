#include "botw/heap_manager.h"

extern "C" void* fn_0308e5b4(unsigned size, void* heap, int alignment);
extern "C" void* fn_03b40250(void* storage);
extern "C" const unsigned char data_10377df8[];
extern "C" void* data_1047ed58;
extern "C" Disposer* data_1047ed5c;

inline void* operator new(__typeof__(sizeof(0)), void* where) throw() { return where; }

namespace {
struct SingletonDisposer : Disposer {
    SingletonDisposer(void* owner) {
        fn_030a59d4(this, owner, 3);
        vtable = data_10377df8;
    }
};
}

extern "C" void* fn_03b40314(void* heap) {
    if (data_1047ed58 == 0) {
        char* memory = static_cast<char*>(fn_0308e5b4(0x584, heap, 4));
        data_1047ed5c = new (memory + 4) SingletonDisposer(heap);
        void* instance = memory;
        if (instance != 0) {
            instance = fn_03b40250(instance);
        }
        data_1047ed58 = instance;
    }
    return data_1047ed58;
}
