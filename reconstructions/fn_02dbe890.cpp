#include "botw/runtime_tag_query.h"

using runtime_tag_query::Pointer;

extern "C" unsigned data_10491394;
extern "C" RuntimeTag data_10491398;
extern "C" const RuntimeVTable data_101ea8e4;
extern "C" unsigned data_10485f00;
extern "C" RuntimeTag data_10491374;
extern "C" const RuntimeVTable data_101ea8c4;
extern "C" unsigned data_10485ef8;
extern "C" RuntimeTag data_10491370;
extern "C" const RuntimeVTable data_101ea8a4;
extern "C" unsigned data_10485ef4;
extern "C" RuntimeTag data_10491324;
extern "C" const RuntimeVTable data_101ea7c4;

typedef Pointer<&data_10491394, &data_10491398, &data_101ea8e4> Type0;
typedef Pointer<&data_10485f00, &data_10491374, &data_101ea8c4> Type1;
typedef Pointer<&data_10485ef8, &data_10491370, &data_101ea8a4> Type2;
typedef Pointer<&data_10485ef4, &data_10491324, &data_101ea7c4> Type3;

static inline unsigned level3(const RuntimeTag* other) {
    return (other == Type3::get()) & 0xffu;
}

static inline unsigned level2(const RuntimeTag* other) {
    return other == Type2::get() ? 1u : level3(other) != 0;
}

static inline unsigned level1(const RuntimeTag* other) {
    return other == Type1::get() ? 1u : level2(other) != 0;
}

extern "C" bool fn_02dbe890(const void*, const RuntimeTag* other) {
    if (other == Type0::get())
        return true;
    bool result = level1(other);
    return result;
}
