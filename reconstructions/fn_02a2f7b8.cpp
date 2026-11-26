#include "botw/heap_manager.h"

extern "C" void* fn_0308e5b4(unsigned size, void* heap, int alignment);
extern "C" void* fn_02a2f67c(void* storage);
extern "C" const unsigned char data_1018842c[];
extern "C" void* data_104637ac;
extern "C" Disposer* data_104637b0;

inline void* operator new(__typeof__(sizeof(0)), void* where) throw() { return where; }

namespace {
struct SingletonDisposer : Disposer {
    SingletonDisposer(void* owner) {
        fn_030a59d4(this, owner, 3);
        vtable = data_1018842c;
    }
};
}

extern "C" void* fn_02a2f7b8(void* heap) {
    if (data_104637ac == 0) {
        char* memory = static_cast<char*>(fn_0308e5b4(0x3c4, heap, 4));
        data_104637b0 = new (memory + 4) SingletonDisposer(heap);
        void* instance = memory;
        if (instance != 0) {
            instance = fn_02a2f67c(instance);
        }
        data_104637ac = instance;
    }
    return data_104637ac;
}
