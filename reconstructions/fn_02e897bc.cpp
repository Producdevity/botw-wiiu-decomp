#include "botw/heap_manager.h"

extern "C" void* fn_0308e5b4(unsigned size, void* heap, int alignment);
extern "C" void* fn_02e8968c(void* storage);
extern "C" const unsigned char data_10218810[];
extern "C" void* data_1046989c;
extern "C" Disposer* data_104698a0;

inline void* operator new(__typeof__(sizeof(0)), void* where) throw() { return where; }

namespace {
struct SingletonDisposer : Disposer {
    SingletonDisposer(void* owner) {
        fn_030a59d4(this, owner, 3);
        vtable = data_10218810;
    }
};
}

extern "C" void* fn_02e897bc(void* heap) {
    if (data_1046989c == 0) {
        char* memory = static_cast<char*>(fn_0308e5b4(0x60, heap, 4));
        data_104698a0 = new (memory + 4) SingletonDisposer(heap);
        void* instance = memory;
        if (instance != 0) {
            instance = fn_02e8968c(instance);
        }
        data_1046989c = instance;
    }
    return data_1046989c;
}
