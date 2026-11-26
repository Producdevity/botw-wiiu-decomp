#include "botw/heap_manager.h"

extern "C" void* fn_0308e5b4(unsigned size, void* heap, int alignment);
extern "C" int** fn_03932d08(int** storage);
extern "C" const unsigned char data_1033b9b4[];
extern "C" void* data_1047d740;
extern "C" Disposer* data_1047d744;

inline void* operator new(__typeof__(sizeof(0)), void* where) throw() { return where; }

namespace {
struct SingletonDisposer : Disposer {
    SingletonDisposer(void* owner) {
        fn_030a59d4(this, owner, 3);
        vtable = data_1033b9b4;
    }
};
}

extern "C" void* fn_03932d5c(void* heap) {
    if (data_1047d740 == 0) {
        char* memory = static_cast<char*>(fn_0308e5b4(0x44, heap, 4));
        data_1047d744 = new (memory + 4) SingletonDisposer(heap);
        void* instance = memory;
        if (instance != 0) {
            instance = fn_03932d08(static_cast<int**>(instance));
        }
        data_1047d740 = instance;
    }
    return data_1047d740;
}
