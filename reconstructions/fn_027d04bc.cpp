#include "botw/runtime_tag_query.h"

using runtime_tag_query::Pointer;

extern "C" unsigned data_1048cef4;
extern "C" RuntimeTag data_1048cef0;
extern "C" const RuntimeVTable data_10132c00;
extern "C" unsigned data_1048ceb4;
extern "C" RuntimeTag data_1048ceb0;
extern "C" const RuntimeVTable data_10132bc0;
extern "C" unsigned data_10485ed8;
extern "C" RuntimeTag data_10486e88;
extern "C" const RuntimeVTable data_10132bb0;
extern "C" unsigned data_10485ed0;
extern "C" RuntimeTag data_10486d38;
extern "C" const RuntimeVTable data_10132ba0;

typedef Pointer<&data_1048cef4, &data_1048cef0, &data_10132c00> Type0;
typedef Pointer<&data_1048ceb4, &data_1048ceb0, &data_10132bc0> Type1;
typedef Pointer<&data_10485ed8, &data_10486e88, &data_10132bb0> Type2;
typedef Pointer<&data_10485ed0, &data_10486d38, &data_10132ba0> Type3;

static inline unsigned level3(const RuntimeTag* other) {
    return (other == Type3::get()) & 0xffu;
}

static inline unsigned level2(const RuntimeTag* other) {
    return other == Type2::get() ? 1u : level3(other) != 0;
}

static inline unsigned level1(const RuntimeTag* other) {
    return other == Type1::get() ? 1u : level2(other) != 0;
}

extern "C" bool fn_027d04bc(const void*, const RuntimeTag* other) {
    if (other == Type0::get())
        return true;
    bool result = level1(other);
    return result;
}
