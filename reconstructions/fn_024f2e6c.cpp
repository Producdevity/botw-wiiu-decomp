#include "botw/runtime_tag_query.h"

using runtime_tag_query::Pointer;

extern "C" unsigned data_1048b450;
extern "C" RuntimeTag data_1048b454;
extern "C" const RuntimeVTable data_100ce910;
extern "C" unsigned data_1048b448;
extern "C" RuntimeTag data_1048b44c;
extern "C" const RuntimeVTable data_100ce900;
extern "C" unsigned data_10485ed8;
extern "C" RuntimeTag data_10486e88;
extern "C" const RuntimeVTable data_100ce8f0;
extern "C" unsigned data_10485ed0;
extern "C" RuntimeTag data_10486d38;
extern "C" const RuntimeVTable data_100ce8e0;

typedef Pointer<&data_1048b450, &data_1048b454, &data_100ce910> Type0;
typedef Pointer<&data_1048b448, &data_1048b44c, &data_100ce900> Type1;
typedef Pointer<&data_10485ed8, &data_10486e88, &data_100ce8f0> Type2;
typedef Pointer<&data_10485ed0, &data_10486d38, &data_100ce8e0> Type3;

static inline unsigned level3(const RuntimeTag* other) {
    return (other == Type3::get()) & 0xffu;
}

static inline unsigned level2(const RuntimeTag* other) {
    return other == Type2::get() ? 1u : level3(other) != 0;
}

static inline unsigned level1(const RuntimeTag* other) {
    return other == Type1::get() ? 1u : level2(other) != 0;
}

extern "C" bool fn_024f2e6c(const void*, const RuntimeTag* other) {
    if (other == Type0::get())
        return true;
    bool result = level1(other);
    return result;
}
