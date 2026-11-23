#include "botw/runtime_tag_query.h"

using runtime_tag_query::Pointer;

extern "C" unsigned data_10487928;
extern "C" RuntimeTag data_10487924;
extern "C" const RuntimeVTable data_10070198;
extern "C" unsigned data_10487920;
extern "C" RuntimeTag data_1048791c;
extern "C" const RuntimeVTable data_10070188;
extern "C" unsigned data_10485ed4;
extern "C" RuntimeTag data_10486d3c;
extern "C" const RuntimeVTable data_10070178;
extern "C" unsigned data_10485ed0;
extern "C" RuntimeTag data_10486d38;
extern "C" const RuntimeVTable data_10070168;

typedef Pointer<&data_10487928, &data_10487924, &data_10070198> Type0;
typedef Pointer<&data_10487920, &data_1048791c, &data_10070188> Type1;
typedef Pointer<&data_10485ed4, &data_10486d3c, &data_10070178> Type2;
typedef Pointer<&data_10485ed0, &data_10486d38, &data_10070168> Type3;

static inline unsigned level3(const RuntimeTag* other) {
    return (other == Type3::get()) & 0xffu;
}

static inline unsigned level2(const RuntimeTag* other) {
    return other == Type2::get() ? 1u : level3(other) != 0;
}

static inline unsigned level1(const RuntimeTag* other) {
    return other == Type1::get() ? 1u : level2(other) != 0;
}

extern "C" bool fn_022a041c(const void*, const RuntimeTag* other) {
    if (other == Type0::get())
        return true;
    bool result = level1(other);
    return result;
}
