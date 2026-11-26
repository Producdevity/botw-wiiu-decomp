#include "botw/heap_manager.h"

extern "C" void* fn_0308e5b4(unsigned size, void* heap, int alignment);
extern "C" void* fn_030c5d60(void* storage);
extern "C" const unsigned char data_1027b8ac[];
extern "C" void* data_1046c954;
extern "C" Disposer* data_1046c958;

inline void* operator new(__typeof__(sizeof(0)), void* where) throw() { return where; }

namespace {
struct SingletonDisposer : Disposer {
    SingletonDisposer(void* owner) {
        fn_030a59d4(this, owner, 3);
        vtable = data_1027b8ac;
    }
};
}

extern "C" void* fn_030c5e30(void* heap) {
    if (data_1046c954 == 0) {
        char* memory = static_cast<char*>(fn_0308e5b4(0x3c, heap, 4));
        data_1046c958 = new (memory + 4) SingletonDisposer(heap);
        void* instance = memory;
        if (instance != 0) {
            instance = fn_030c5d60(instance);
        }
        data_1046c954 = instance;
    }
    return data_1046c954;
}
