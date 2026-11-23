#include "botw/runtime_tag_query.h"

using runtime_tag_query::Pointer;

extern "C" unsigned data_10487250;
extern "C" RuntimeTag data_1048724c;
extern "C" const RuntimeVTable data_10014448;
extern "C" unsigned data_1048688c;
extern "C" RuntimeTag data_104868f0;
extern "C" const RuntimeVTable data_10014438;
extern "C" unsigned data_10485cd8;
extern "C" RuntimeTag data_10485cdc;
extern "C" const RuntimeVTable data_10014400;
extern "C" unsigned data_10485cd0;
extern "C" RuntimeTag data_10485cd4;
extern "C" const RuntimeVTable data_100143f0;

typedef Pointer<&data_10487250, &data_1048724c, &data_10014448> Type0;
typedef Pointer<&data_1048688c, &data_104868f0, &data_10014438> Type1;
typedef Pointer<&data_10485cd8, &data_10485cdc, &data_10014400> Type2;
typedef Pointer<&data_10485cd0, &data_10485cd4, &data_100143f0> Type3;

static inline unsigned level3(const RuntimeTag* other) {
    return (other == Type3::get()) & 0xffu;
}

static inline unsigned level2(const RuntimeTag* other) {
    return other == Type2::get() ? 1u : level3(other) != 0;
}

static inline unsigned level1(const RuntimeTag* other) {
    return other == Type1::get() ? 1u : level2(other) != 0;
}

extern "C" bool fn_020b0ba4(const void*, const RuntimeTag* other) {
    if (other == Type0::get())
        return true;
    bool result = level1(other);
    return result;
}
