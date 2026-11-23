#include "botw/runtime_tag_query.h"

using runtime_tag_query::Pointer;

extern "C" unsigned data_104876c8;
extern "C" RuntimeTag data_104876c4;
extern "C" const RuntimeVTable data_1001d218;
extern "C" unsigned data_104876a4;
extern "C" RuntimeTag data_104876a0;
extern "C" const RuntimeVTable data_1001d1f8;
extern "C" unsigned data_10485ed4;
extern "C" RuntimeTag data_10486d3c;
extern "C" const RuntimeVTable data_1001d1e8;
extern "C" unsigned data_10485ed0;
extern "C" RuntimeTag data_10486d38;
extern "C" const RuntimeVTable data_1001d1d8;

typedef Pointer<&data_104876c8, &data_104876c4, &data_1001d218> Type0;
typedef Pointer<&data_104876a4, &data_104876a0, &data_1001d1f8> Type1;
typedef Pointer<&data_10485ed4, &data_10486d3c, &data_1001d1e8> Type2;
typedef Pointer<&data_10485ed0, &data_10486d38, &data_1001d1d8> Type3;

static inline unsigned level3(const RuntimeTag* other) {
    return (other == Type3::get()) & 0xffu;
}

static inline unsigned level2(const RuntimeTag* other) {
    return other == Type2::get() ? 1u : level3(other) != 0;
}

static inline unsigned level1(const RuntimeTag* other) {
    return other == Type1::get() ? 1u : level2(other) != 0;
}

extern "C" bool fn_020ea378(const void*, const RuntimeTag* other) {
    if (other == Type0::get())
        return true;
    bool result = level1(other);
    return result;
}
