#include "botw/runtime_tag_query.h"

using runtime_tag_query::Pointer;

extern "C" unsigned data_10488ac4;
extern "C" RuntimeTag data_10488ac8;
extern "C" const RuntimeVTable data_10052980;
extern "C" unsigned data_104887e8;
extern "C" RuntimeTag data_104887e4;
extern "C" const RuntimeVTable data_10052970;
extern "C" unsigned data_10485ed4;
extern "C" RuntimeTag data_10486d3c;
extern "C" const RuntimeVTable data_10052960;
extern "C" unsigned data_10485ed0;
extern "C" RuntimeTag data_10486d38;
extern "C" const RuntimeVTable data_10052950;

typedef Pointer<&data_10488ac4, &data_10488ac8, &data_10052980> Type0;
typedef Pointer<&data_104887e8, &data_104887e4, &data_10052970> Type1;
typedef Pointer<&data_10485ed4, &data_10486d3c, &data_10052960> Type2;
typedef Pointer<&data_10485ed0, &data_10486d38, &data_10052950> Type3;

static inline unsigned level3(const RuntimeTag* other) {
    return (other == Type3::get()) & 0xffu;
}

static inline unsigned level2(const RuntimeTag* other) {
    return other == Type2::get() ? 1u : level3(other) != 0;
}

static inline unsigned level1(const RuntimeTag* other) {
    return other == Type1::get() ? 1u : level2(other) != 0;
}

extern "C" bool fn_02205e98(const void*, const RuntimeTag* other) {
    if (other == Type0::get())
        return true;
    bool result = level1(other);
    return result;
}
