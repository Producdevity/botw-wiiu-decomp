#include "botw/heap_manager.h"

extern "C" void* fn_0308e5b4(unsigned size, void* heap, int alignment);
extern "C" void* fn_03b87384(void* storage);
extern "C" const unsigned char data_103c59e0[];
extern "C" void* data_1047f018;
extern "C" Disposer* data_1047f020;

inline void* operator new(__typeof__(sizeof(0)), void* where) throw() { return where; }

namespace {
struct SingletonDisposer : Disposer {
    SingletonDisposer(void* owner) {
        fn_030a59d4(this, owner, 3);
        vtable = data_103c59e0;
    }
};
}

extern "C" void* fn_03b8741c(void* heap) {
    if (data_1047f018 == 0) {
        char* memory = static_cast<char*>(fn_0308e5b4(0x1e38, heap, 8));
        data_1047f020 = new (memory + 1728) SingletonDisposer(heap);
        void* instance = memory;
        if (instance != 0) {
            instance = fn_03b87384(instance);
        }
        data_1047f018 = instance;
    }
    return data_1047f018;
}
