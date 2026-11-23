#ifndef BOTW_FAST_MUTEX_SECTION_H
#define BOTW_FAST_MUTEX_SECTION_H

#include "botw/heap_manager.h"

// Disposer-registered wrapper around a 44-byte Coreinit mutex.
struct FastMutexSection {
    Disposer disposer;
    unsigned char mutex[44];
};
typedef char FastMutexSectionSize[sizeof(FastMutexSection) == 60 ? 1 : -1];

extern "C" FastMutexSection* fn_030bb49c(FastMutexSection* storage);

#endif
