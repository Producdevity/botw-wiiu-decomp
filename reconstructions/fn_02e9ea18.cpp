#include "botw/heap_manager.h"

extern "C" void* fn_0308e5b4(unsigned size, void* heap, int alignment);
extern "C" void* fn_02e9dd64(void* storage);
extern "C" const unsigned char data_1021b460[];
extern "C" void* data_104698f8;
extern "C" Disposer* data_104698fc;

inline void* operator new(__typeof__(sizeof(0)), void* where) throw() { return where; }

namespace {
struct SingletonDisposer : Disposer {
    SingletonDisposer(void* owner) {
        fn_030a59d4(this, owner, 3);
        vtable = data_1021b460;
    }
};
}

extern "C" void* fn_02e9ea18(void* heap) {
    if (data_104698f8 == 0) {
        char* memory = static_cast<char*>(fn_0308e5b4(0x31fc, heap, 4));
        data_104698fc = new (memory + 4) SingletonDisposer(heap);
        void* instance = memory;
        if (instance != 0) {
            instance = fn_02e9dd64(instance);
        }
        data_104698f8 = instance;
    }
    return data_104698f8;
}
