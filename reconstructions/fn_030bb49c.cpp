#include "botw/heap_manager.h"

extern "C" void* fn_0308e578(unsigned size);
extern "C" void fn_04211384(void* buffer, unsigned int size);
extern "C" void fn_0434c250(void* mutex, const char* name);
extern "C" const unsigned char data_1027ab94[];

struct FastMutexSection {
    Disposer disposer;
    unsigned char mutex[44];
};
typedef char FastMutexSectionSize[sizeof(FastMutexSection) == 60 ? 1 : -1];

extern "C" FastMutexSection* fn_030bb49c(FastMutexSection* storage) {
    if (storage || (storage = static_cast<FastMutexSection*>(fn_0308e578(sizeof(FastMutexSection))))) {
        fn_030a594c(&storage->disposer);
        storage->disposer.vtable = data_1027ab94;
        fn_04211384(storage->mutex, sizeof(storage->mutex));
        fn_0434c250(storage->mutex, 0);
    }
    return storage;
}
