#include "botw/heap_manager.h"

extern "C" void* fn_0308e5b4(unsigned size, void* heap, int alignment);
extern "C" void* fn_02a2bd70(void* storage);
extern "C" const unsigned char data_10188398[];
extern "C" void* data_10463798;
extern "C" Disposer* data_1046379c;

inline void* operator new(__typeof__(sizeof(0)), void* where) throw() { return where; }

namespace {
struct SingletonDisposer : Disposer {
    SingletonDisposer(void* owner) {
        fn_030a59d4(this, owner, 3);
        vtable = data_10188398;
    }
};
}

extern "C" void* fn_02a2c034(void* heap) {
    if (data_10463798 == 0) {
        char* memory = static_cast<char*>(fn_0308e5b4(0x338, heap, 4));
        data_1046379c = new (memory + 12) SingletonDisposer(heap);
        void* instance = memory;
        if (instance != 0) {
            instance = fn_02a2bd70(instance);
        }
        data_10463798 = instance;
    }
    return data_10463798;
}
