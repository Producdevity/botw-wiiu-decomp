#include "botw/proc_accessor.h"
#include "botw/runtime_tag_query.h"

using runtime_tag_query::Token;

extern "C" unsigned data_10485cd8;
extern "C" RuntimeTag data_10485cdc;
extern "C" const RuntimeVTable data_101e28d4;

typedef Token<&data_10485cd8, &data_10485cdc, &data_101e28d4> ProcType;

namespace {
struct Base;
typedef bool (*DerivedQuery)(const Base* object, const RuntimeTag* type);

struct Base {
    unsigned char prefix[232];
    const RuntimeVTable* vtable;
};

struct ProcHandle {
    unsigned char unknown_00[0x34];
    void* context;
    int index;
    unsigned char checked;
};
typedef char ProcHandleSize[sizeof(ProcHandle) == 0x40 ? 1 : -1];

inline bool is_proc(const Base* object) {
    const RuntimeTag* type = &ProcType::get();
    return object != 0 && reinterpret_cast<DerivedQuery>(reinterpret_cast<void* const*>(object->vtable)[3])(object, type);
}
}

extern "C" ProcHandle* data_10463f38;
extern "C" void* fn_0378d87c(void* context);
extern "C" void* fn_0378d8dc(void* context, int index, unsigned char checked);
extern "C" void fn_030bb69c(void* state);

namespace {
struct ScopedLock {
    void* lock;
    ScopedLock(void* context) : lock(fn_0378d87c(context)) {}
    ~ScopedLock() { if (lock) fn_030bb69c(lock); }
};
}

extern "C" bool fn_02d41c94(ProcAccessor* accessor) {
    ProcHandle* handle = data_10463f38;
    if (!handle)
        return false;
    if (handle->index != -1) {
        ScopedLock lock(handle->context);
        Base* object = static_cast<Base*>(fn_0378d8dc(handle->context, handle->index, handle->checked));
        if (object) {
            Base* proc = is_proc(object) ? object : 0;
            fn_031f9dc0(accessor, proc);
        }
    } else {
        fn_031f9dc0(accessor, 0);
    }
    return accessor->proc != 0;
}
