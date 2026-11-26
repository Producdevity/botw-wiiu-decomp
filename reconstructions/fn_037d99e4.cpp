#include "botw/heap_manager.h"

extern "C" void* fn_0308e5b4(unsigned size, void* heap, int alignment);
extern "C" int** fn_037d9990(int** storage);
extern "C" const unsigned char data_1031e038[];
extern "C" void* data_1047c370;
extern "C" Disposer* data_1047c374;

inline void* operator new(__typeof__(sizeof(0)), void* where) throw() { return where; }

namespace {
struct SingletonDisposer : Disposer {
    SingletonDisposer(void* owner) {
        fn_030a59d4(this, owner, 3);
        vtable = data_1031e038;
    }
};
}

extern "C" void* fn_037d99e4(void* heap) {
    if (data_1047c370 == 0) {
        char* memory = static_cast<char*>(fn_0308e5b4(0x78, heap, 8));
        data_1047c374 = new (memory + 104) SingletonDisposer(heap);
        void* instance = memory;
        if (instance != 0) {
            instance = fn_037d9990(static_cast<int**>(instance));
        }
        data_1047c370 = instance;
    }
    return data_1047c370;
}
