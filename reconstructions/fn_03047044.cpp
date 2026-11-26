#include "botw/heap_manager.h"

extern "C" void* fn_0308e5b4(unsigned size, void* heap, int alignment);
extern "C" void* fn_03046fc8(void* storage);
extern "C" const unsigned char data_10259b64[];
extern "C" void* data_1046bd94;
extern "C" Disposer* data_1046bd98;

inline void* operator new(__typeof__(sizeof(0)), void* where) throw() { return where; }

namespace {
struct SingletonDisposer : Disposer {
    SingletonDisposer(void* owner) {
        fn_030a59d4(this, owner, 3);
        vtable = data_10259b64;
    }
};
}

extern "C" void* fn_03047044(void* heap) {
    if (data_1046bd94 == 0) {
        char* memory = static_cast<char*>(fn_0308e5b4(0x1ac, heap, 4));
        data_1046bd98 = new (memory + 4) SingletonDisposer(heap);
        void* instance = memory;
        if (instance != 0) {
            instance = fn_03046fc8(instance);
        }
        data_1046bd94 = instance;
    }
    return data_1046bd94;
}
