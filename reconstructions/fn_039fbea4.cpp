#include "botw/heap_manager.h"

extern "C" void* fn_0308e5b4(unsigned size, void* heap, int alignment);
extern "C" void* fn_039fbb74(void* storage);
extern "C" const unsigned char data_1035582c[];
extern "C" void* data_1047e3f0;
extern "C" Disposer* data_1047e3f4;

inline void* operator new(__typeof__(sizeof(0)), void* where) throw() { return where; }

namespace {
struct SingletonDisposer : Disposer {
    SingletonDisposer(void* owner) {
        fn_030a59d4(this, owner, 3);
        vtable = data_1035582c;
    }
};
}

extern "C" void* fn_039fbea4(void* heap) {
    if (data_1047e3f0 == 0) {
        char* memory = static_cast<char*>(fn_0308e5b4(0x6e88, heap, 8));
        data_1047e3f4 = new (memory + 4) SingletonDisposer(heap);
        void* instance = memory;
        if (instance != 0) {
            instance = fn_039fbb74(instance);
        }
        data_1047e3f0 = instance;
    }
    return data_1047e3f0;
}
