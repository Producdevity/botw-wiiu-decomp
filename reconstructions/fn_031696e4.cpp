#include "botw/heap_manager.h"

extern "C" void* fn_0308e5b4(unsigned size, void* heap, int alignment);
extern "C" void* fn_031692b8(void* storage);
extern "C" const unsigned char data_1028a818[];
extern "C" void* data_1046ce34;
extern "C" Disposer* data_1046ce38;

inline void* operator new(__typeof__(sizeof(0)), void* where) throw() { return where; }

namespace {
struct SingletonDisposer : Disposer {
    SingletonDisposer(void* owner) {
        fn_030a59d4(this, owner, 3);
        vtable = data_1028a818;
    }
};
}

extern "C" void* fn_031696e4(void* heap) {
    if (data_1046ce34 == 0) {
        char* memory = static_cast<char*>(fn_0308e5b4(0x2f8, heap, 4));
        data_1046ce38 = new (memory + 4) SingletonDisposer(heap);
        void* instance = memory;
        if (instance != 0) {
            instance = fn_031692b8(instance);
        }
        data_1046ce34 = instance;
    }
    return data_1046ce34;
}
