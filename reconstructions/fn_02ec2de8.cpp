#include "botw/heap_manager.h"

extern "C" void* fn_0308e5b4(unsigned size, void* heap, int alignment);
extern "C" void* fn_02ec2c38(void* storage);
extern "C" const unsigned char data_1021c01c[];
extern "C" void* data_10469a30;
extern "C" Disposer* data_10469a34;

inline void* operator new(__typeof__(sizeof(0)), void* where) throw() { return where; }

namespace {
struct SingletonDisposer : Disposer {
    SingletonDisposer(void* owner) {
        fn_030a59d4(this, owner, 3);
        vtable = data_1021c01c;
    }
};
}

extern "C" void* fn_02ec2de8(void* heap) {
    if (data_10469a30 == 0) {
        char* memory = static_cast<char*>(fn_0308e5b4(0x138, heap, 4));
        data_10469a34 = new (memory + 8) SingletonDisposer(heap);
        void* instance = memory;
        if (instance != 0) {
            instance = fn_02ec2c38(instance);
        }
        data_10469a30 = instance;
    }
    return data_10469a30;
}
