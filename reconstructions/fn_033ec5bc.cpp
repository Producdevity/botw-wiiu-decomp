#include "botw/heap_manager.h"

extern "C" void* fn_0308e5b4(unsigned size, void* heap, int alignment);
extern "C" void* fn_033ec4e8(void* storage);
extern "C" const unsigned char data_102be968[];
extern "C" void* data_1046f37c;
extern "C" Disposer* data_1046f380;

inline void* operator new(__typeof__(sizeof(0)), void* where) throw() { return where; }

namespace {
struct SingletonDisposer : Disposer {
    SingletonDisposer(void* owner) {
        fn_030a59d4(this, owner, 3);
        vtable = data_102be968;
    }
};
}

extern "C" void* fn_033ec5bc(void* heap) {
    if (data_1046f37c == 0) {
        char* memory = static_cast<char*>(fn_0308e5b4(0x40, heap, 4));
        data_1046f380 = new (memory + 16) SingletonDisposer(heap);
        void* instance = memory;
        if (instance != 0) {
            instance = fn_033ec4e8(instance);
        }
        data_1046f37c = instance;
    }
    return data_1046f37c;
}
