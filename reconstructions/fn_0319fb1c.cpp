#include "botw/heap_manager.h"

extern "C" void* fn_0308e5b4(unsigned size, void* heap, int alignment);
extern "C" void* fn_0319fa00(void* storage);
extern "C" const unsigned char data_1028c8b0[];
extern "C" void* data_1046d21c;
extern "C" Disposer* data_1046d220;

inline void* operator new(__typeof__(sizeof(0)), void* where) throw() { return where; }

namespace {
struct SingletonDisposer : Disposer {
    SingletonDisposer(void* owner) {
        fn_030a59d4(this, owner, 3);
        vtable = data_1028c8b0;
    }
};
}

extern "C" void* fn_0319fb1c(void* heap) {
    if (data_1046d21c == 0) {
        char* memory = static_cast<char*>(fn_0308e5b4(0xbf8, heap, 4));
        data_1046d220 = new (memory + 400) SingletonDisposer(heap);
        void* instance = memory;
        if (instance != 0) {
            instance = fn_0319fa00(instance);
        }
        data_1046d21c = instance;
    }
    return data_1046d21c;
}
