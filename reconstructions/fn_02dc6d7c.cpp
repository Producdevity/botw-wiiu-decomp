#include "botw/heap_manager.h"

extern "C" void* fn_0308e5b4(unsigned size, void* heap, int alignment);
extern "C" void* fn_02dc6c40(void* storage);
extern "C" const unsigned char data_101ebd94[];
extern "C" void* data_1046407c;
extern "C" Disposer* data_10464080;

inline void* operator new(__typeof__(sizeof(0)), void* where) throw() { return where; }

namespace {
struct SingletonDisposer : Disposer {
    SingletonDisposer(void* owner) {
        fn_030a59d4(this, owner, 3);
        vtable = data_101ebd94;
    }
};
}

extern "C" void* fn_02dc6d7c(void* heap) {
    if (data_1046407c == 0) {
        char* memory = static_cast<char*>(fn_0308e5b4(0xec, heap, 4));
        data_10464080 = new (memory + 8) SingletonDisposer(heap);
        void* instance = memory;
        if (instance != 0) {
            instance = fn_02dc6c40(instance);
        }
        data_1046407c = instance;
    }
    return data_1046407c;
}
