#include "botw/heap_manager.h"

extern "C" void* fn_0308e5b4(unsigned size, void* heap, int alignment);
extern "C" void* fn_031a9314(void* storage);
extern "C" const unsigned char data_1028d690[];
extern "C" void* data_1046d2dc;
extern "C" Disposer* data_1046d2e4;

inline void* operator new(__typeof__(sizeof(0)), void* where) throw() { return where; }

namespace {
struct SingletonDisposer : Disposer {
    SingletonDisposer(void* owner) {
        fn_030a59d4(this, owner, 3);
        vtable = data_1028d690;
    }
};
}

extern "C" void* fn_031a9404(void* heap) {
    if (data_1046d2dc == 0) {
        char* memory = static_cast<char*>(fn_0308e5b4(0xd4, heap, 4));
        data_1046d2e4 = new (memory + 4) SingletonDisposer(heap);
        void* instance = memory;
        if (instance != 0) {
            instance = fn_031a9314(instance);
        }
        data_1046d2dc = instance;
    }
    return data_1046d2dc;
}
