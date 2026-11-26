#include "botw/heap_manager.h"

extern "C" void* fn_0308e5b4(unsigned size, void* heap, int alignment);
extern "C" void* fn_03993064(void* storage);
extern "C" const unsigned char data_1034a9ec[];
extern "C" void* data_1047dc04;
extern "C" Disposer* data_1047dc08;

inline void* operator new(__typeof__(sizeof(0)), void* where) throw() { return where; }

namespace {
struct SingletonDisposer : Disposer {
    SingletonDisposer(void* owner) {
        fn_030a59d4(this, owner, 3);
        vtable = data_1034a9ec;
    }
};
}

extern "C" void* fn_03993370(void* heap) {
    if (data_1047dc04 == 0) {
        char* memory = static_cast<char*>(fn_0308e5b4(0x194, heap, 4));
        data_1047dc08 = new (memory + 4) SingletonDisposer(heap);
        void* instance = memory;
        if (instance != 0) {
            instance = fn_03993064(instance);
        }
        data_1047dc04 = instance;
    }
    return data_1047dc04;
}
