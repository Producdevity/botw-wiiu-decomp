#include "botw/runtime_tag_query.h"

using runtime_tag_query::Pointer;

extern "C" unsigned data_10491600;
extern "C" RuntimeTag data_10491604;
extern "C" const RuntimeVTable data_10215278;
extern "C" unsigned data_10485ef8;
extern "C" RuntimeTag data_10491370;
extern "C" const RuntimeVTable data_10215080;
extern "C" unsigned data_10485ef4;
extern "C" RuntimeTag data_10491324;
extern "C" const RuntimeVTable data_10214f50;

typedef Pointer<&data_10491600, &data_10491604, &data_10215278> Type0;
typedef Pointer<&data_10485ef8, &data_10491370, &data_10215080> Type1;
typedef Pointer<&data_10485ef4, &data_10491324, &data_10214f50> Type2;

static inline unsigned level2(const RuntimeTag* other) {
    return (other == Type2::get()) & 0xffu;
}

static inline unsigned level1(const RuntimeTag* other) {
    if (other == Type1::get())
        return true;
    return level2(other);
}

static inline bool level0(const RuntimeTag* other) {
    if (other == Type0::get())
        return true;
    return level1(other) != 0;
}

extern "C" bool fn_02e4a2d8(const void*, const RuntimeTag* other) {
    return level0(other);
}
