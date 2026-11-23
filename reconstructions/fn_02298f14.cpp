#include "botw/runtime_tag_query.h"

using runtime_tag_query::Pointer;

extern "C" unsigned data_104894e8;
extern "C" RuntimeTag data_104894ec;
extern "C" const RuntimeVTable data_1006e3f0;
extern "C" unsigned data_104894e0;
extern "C" RuntimeTag data_104894e4;
extern "C" const RuntimeVTable data_1006e3e0;
extern "C" unsigned data_10485ed4;
extern "C" RuntimeTag data_10486d3c;
extern "C" const RuntimeVTable data_1006e3d0;
extern "C" unsigned data_10485ed0;
extern "C" RuntimeTag data_10486d38;
extern "C" const RuntimeVTable data_1006e3c0;

typedef Pointer<&data_104894e8, &data_104894ec, &data_1006e3f0> Type0;
typedef Pointer<&data_104894e0, &data_104894e4, &data_1006e3e0> Type1;
typedef Pointer<&data_10485ed4, &data_10486d3c, &data_1006e3d0> Type2;
typedef Pointer<&data_10485ed0, &data_10486d38, &data_1006e3c0> Type3;

static inline unsigned level3(const RuntimeTag* other) {
    return (other == Type3::get()) & 0xffu;
}

static inline unsigned level2(const RuntimeTag* other) {
    return other == Type2::get() ? 1u : level3(other) != 0;
}

static inline unsigned level1(const RuntimeTag* other) {
    return other == Type1::get() ? 1u : level2(other) != 0;
}

extern "C" bool fn_02298f14(const void*, const RuntimeTag* other) {
    if (other == Type0::get())
        return true;
    bool result = level1(other);
    return result;
}
