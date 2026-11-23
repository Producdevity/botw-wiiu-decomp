#include "botw/runtime_tag_query.h"

using runtime_tag_query::Pointer;

extern "C" unsigned data_104876bc;
extern "C" RuntimeTag data_104876c0;
extern "C" const RuntimeVTable data_1001d048;
extern "C" unsigned data_104876a4;
extern "C" RuntimeTag data_104876a0;
extern "C" const RuntimeVTable data_1001d038;
extern "C" unsigned data_10485ed4;
extern "C" RuntimeTag data_10486d3c;
extern "C" const RuntimeVTable data_1001d028;
extern "C" unsigned data_10485ed0;
extern "C" RuntimeTag data_10486d38;
extern "C" const RuntimeVTable data_1001d018;

typedef Pointer<&data_104876bc, &data_104876c0, &data_1001d048> Type0;
typedef Pointer<&data_104876a4, &data_104876a0, &data_1001d038> Type1;
typedef Pointer<&data_10485ed4, &data_10486d3c, &data_1001d028> Type2;
typedef Pointer<&data_10485ed0, &data_10486d38, &data_1001d018> Type3;

static inline unsigned level3(const RuntimeTag* other) {
    return (other == Type3::get()) & 0xffu;
}

static inline unsigned level2(const RuntimeTag* other) {
    return other == Type2::get() ? 1u : level3(other) != 0;
}

static inline unsigned level1(const RuntimeTag* other) {
    return other == Type1::get() ? 1u : level2(other) != 0;
}

extern "C" bool fn_020e9050(const void*, const RuntimeTag* other) {
    if (other == Type0::get())
        return true;
    bool result = level1(other);
    return result;
}
