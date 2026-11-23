#include "botw/runtime_tag_query.h"

using runtime_tag_query::Pointer;

extern "C" unsigned data_10495414;
extern "C" RuntimeTag data_10495418;
extern "C" const RuntimeVTable data_102e6d9c;
extern "C" unsigned data_10485f00;
extern "C" RuntimeTag data_10491374;
extern "C" const RuntimeVTable data_102e6c4c;
extern "C" unsigned data_10485ef8;
extern "C" RuntimeTag data_10491370;
extern "C" const RuntimeVTable data_102e6c2c;
extern "C" unsigned data_10485ef4;
extern "C" RuntimeTag data_10491324;
extern "C" const RuntimeVTable data_102e6ba4;

typedef Pointer<&data_10495414, &data_10495418, &data_102e6d9c> Type0;
typedef Pointer<&data_10485f00, &data_10491374, &data_102e6c4c> Type1;
typedef Pointer<&data_10485ef8, &data_10491370, &data_102e6c2c> Type2;
typedef Pointer<&data_10485ef4, &data_10491324, &data_102e6ba4> Type3;

static inline unsigned level3(const RuntimeTag* other) {
    return (other == Type3::get()) & 0xffu;
}

static inline unsigned level2(const RuntimeTag* other) {
    return other == Type2::get() ? 1u : level3(other) != 0;
}

static inline unsigned level1(const RuntimeTag* other) {
    return other == Type1::get() ? 1u : level2(other) != 0;
}

extern "C" bool fn_03594e8c(const void*, const RuntimeTag* other) {
    if (other == Type0::get())
        return true;
    bool result = level1(other);
    return result;
}
