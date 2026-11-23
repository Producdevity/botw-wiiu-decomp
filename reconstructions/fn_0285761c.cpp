#include "botw/runtime_tag_query.h"

using runtime_tag_query::Pointer;

extern "C" unsigned data_1048d6e8;
extern "C" RuntimeTag data_1048d6ec;
extern "C" const RuntimeVTable data_101470a0;
extern "C" unsigned data_1048d6d0;
extern "C" RuntimeTag data_1048d6d4;
extern "C" const RuntimeVTable data_10147090;
extern "C" unsigned data_10485ed8;
extern "C" RuntimeTag data_10486e88;
extern "C" const RuntimeVTable data_10147080;
extern "C" unsigned data_10485ed0;
extern "C" RuntimeTag data_10486d38;
extern "C" const RuntimeVTable data_10147070;

typedef Pointer<&data_1048d6e8, &data_1048d6ec, &data_101470a0> Type0;
typedef Pointer<&data_1048d6d0, &data_1048d6d4, &data_10147090> Type1;
typedef Pointer<&data_10485ed8, &data_10486e88, &data_10147080> Type2;
typedef Pointer<&data_10485ed0, &data_10486d38, &data_10147070> Type3;

static inline unsigned level3(const RuntimeTag* other) {
    return (other == Type3::get()) & 0xffu;
}

static inline unsigned level2(const RuntimeTag* other) {
    return other == Type2::get() ? 1u : level3(other) != 0;
}

static inline unsigned level1(const RuntimeTag* other) {
    return other == Type1::get() ? 1u : level2(other) != 0;
}

extern "C" bool fn_0285761c(const void*, const RuntimeTag* other) {
    if (other == Type0::get())
        return true;
    bool result = level1(other);
    return result;
}
