#include "botw/runtime_tag_query.h"

using runtime_tag_query::Pointer;

extern "C" unsigned data_1048a144;
extern "C" RuntimeTag data_1048a148;
extern "C" const RuntimeVTable data_1008fe60;
extern "C" unsigned data_10487128;
extern "C" RuntimeTag data_10487124;
extern "C" const RuntimeVTable data_1008fe38;
extern "C" unsigned data_10485ed4;
extern "C" RuntimeTag data_10486d3c;
extern "C" const RuntimeVTable data_1008fe10;
extern "C" unsigned data_10485ed0;
extern "C" RuntimeTag data_10486d38;
extern "C" const RuntimeVTable data_1008fe00;

typedef Pointer<&data_1048a144, &data_1048a148, &data_1008fe60> Type0;
typedef Pointer<&data_10487128, &data_10487124, &data_1008fe38> Type1;
typedef Pointer<&data_10485ed4, &data_10486d3c, &data_1008fe10> Type2;
typedef Pointer<&data_10485ed0, &data_10486d38, &data_1008fe00> Type3;

static inline unsigned level3(const RuntimeTag* other) {
    return (other == Type3::get()) & 0xffu;
}

static inline unsigned level2(const RuntimeTag* other) {
    return other == Type2::get() ? 1u : level3(other) != 0;
}

static inline unsigned level1(const RuntimeTag* other) {
    return other == Type1::get() ? 1u : level2(other) != 0;
}

extern "C" bool fn_02363f60(const void*, const RuntimeTag* other) {
    if (other == Type0::get())
        return true;
    bool result = level1(other);
    return result;
}
