#include "botw/heap_manager.h"

extern "C" void* fn_0308e5b4(unsigned size, void* heap, int alignment);
extern "C" void* fn_03585c80(void* storage);
extern "C" const unsigned char data_102e59a0[];
extern "C" void* data_104722a8;
extern "C" Disposer* data_104722ac;

inline void* operator new(__typeof__(sizeof(0)), void* where) throw() { return where; }

namespace {
struct SingletonDisposer : Disposer {
    SingletonDisposer(void* owner) {
        fn_030a59d4(this, owner, 3);
        vtable = data_102e59a0;
    }
};
}

extern "C" void* fn_03585eb8(void* heap) {
    if (data_104722a8 == 0) {
        char* memory = static_cast<char*>(fn_0308e5b4(0x190, heap, 4));
        data_104722ac = new (memory + 4) SingletonDisposer(heap);
        void* instance = memory;
        if (instance != 0) {
            instance = fn_03585c80(instance);
        }
        data_104722a8 = instance;
    }
    return data_104722a8;
}
