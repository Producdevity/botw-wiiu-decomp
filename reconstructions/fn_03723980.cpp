#include "botw/runtime_tag_query.h"

using runtime_tag_query::Pointer;

extern "C" unsigned data_10495e40;
extern "C" RuntimeTag data_10495e44;
extern "C" const RuntimeVTable data_1030c130;
extern "C" unsigned data_10485f00;
extern "C" RuntimeTag data_10491374;
extern "C" const RuntimeVTable data_1030bef8;
extern "C" unsigned data_10485ef8;
extern "C" RuntimeTag data_10491370;
extern "C" const RuntimeVTable data_1030bed8;
extern "C" unsigned data_10485ef4;
extern "C" RuntimeTag data_10491324;
extern "C" const RuntimeVTable data_1030bcc0;

typedef Pointer<&data_10495e40, &data_10495e44, &data_1030c130> Type0;
typedef Pointer<&data_10485f00, &data_10491374, &data_1030bef8> Type1;
typedef Pointer<&data_10485ef8, &data_10491370, &data_1030bed8> Type2;
typedef Pointer<&data_10485ef4, &data_10491324, &data_1030bcc0> Type3;

static inline unsigned level3(const RuntimeTag* other) {
    return (other == Type3::get()) & 0xffu;
}

static inline unsigned level2(const RuntimeTag* other) {
    return other == Type2::get() ? 1u : level3(other) != 0;
}

static inline unsigned level1(const RuntimeTag* other) {
    return other == Type1::get() ? 1u : level2(other) != 0;
}

extern "C" bool fn_03723980(const void*, const RuntimeTag* other) {
    if (other == Type0::get())
        return true;
    bool result = level1(other);
    return result;
}
