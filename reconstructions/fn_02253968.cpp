#include "botw/runtime_tag_query.h"

using runtime_tag_query::Pointer;

extern "C" unsigned data_10489060;
extern "C" RuntimeTag data_10489064;
extern "C" const RuntimeVTable data_100625e0;
extern "C" unsigned data_10489048;
extern "C" RuntimeTag data_1048904c;
extern "C" const RuntimeVTable data_100625d0;
extern "C" unsigned data_10485ed4;
extern "C" RuntimeTag data_10486d3c;
extern "C" const RuntimeVTable data_100625c0;
extern "C" unsigned data_10485ed0;
extern "C" RuntimeTag data_10486d38;
extern "C" const RuntimeVTable data_100625b0;

typedef Pointer<&data_10489060, &data_10489064, &data_100625e0> Type0;
typedef Pointer<&data_10489048, &data_1048904c, &data_100625d0> Type1;
typedef Pointer<&data_10485ed4, &data_10486d3c, &data_100625c0> Type2;
typedef Pointer<&data_10485ed0, &data_10486d38, &data_100625b0> Type3;

static inline unsigned level3(const RuntimeTag* other) {
    return (other == Type3::get()) & 0xffu;
}

static inline unsigned level2(const RuntimeTag* other) {
    return other == Type2::get() ? 1u : level3(other) != 0;
}

static inline unsigned level1(const RuntimeTag* other) {
    return other == Type1::get() ? 1u : level2(other) != 0;
}

extern "C" bool fn_02253968(const void*, const RuntimeTag* other) {
    if (other == Type0::get())
        return true;
    bool result = level1(other);
    return result;
}
