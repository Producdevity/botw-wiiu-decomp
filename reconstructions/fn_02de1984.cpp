#include "botw/heap_manager.h"

extern "C" void* fn_0308e5b4(unsigned size, void* heap, int alignment);
extern "C" void* fn_02de1704(void* storage);
extern "C" const unsigned char data_101ee200[];
extern "C" void* data_104640c0;
extern "C" Disposer* data_104640c4;

inline void* operator new(__typeof__(sizeof(0)), void* where) throw() { return where; }

namespace {
struct SingletonDisposer : Disposer {
    SingletonDisposer(void* owner) {
        fn_030a59d4(this, owner, 3);
        vtable = data_101ee200;
    }
};
}

extern "C" void* fn_02de1984(void* heap) {
    if (data_104640c0 == 0) {
        char* memory = static_cast<char*>(fn_0308e5b4(0x714, heap, 4));
        data_104640c4 = new (memory + 1428) SingletonDisposer(heap);
        void* instance = memory;
        if (instance != 0) {
            instance = fn_02de1704(instance);
        }
        data_104640c0 = instance;
    }
    return data_104640c0;
}
