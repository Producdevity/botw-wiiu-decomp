#include "botw/runtime_tag_query.h"

using runtime_tag_query::Pointer;

extern "C" unsigned data_10486f24;
extern "C" RuntimeTag data_10486f28;
extern "C" const RuntimeVTable data_1000da14;
extern "C" unsigned data_10486f1c;
extern "C" RuntimeTag data_10486f20;
extern "C" const RuntimeVTable data_1000da04;
extern "C" unsigned data_10485ed4;
extern "C" RuntimeTag data_10486d3c;
extern "C" const RuntimeVTable data_1000d9f4;
extern "C" unsigned data_10485ed0;
extern "C" RuntimeTag data_10486d38;
extern "C" const RuntimeVTable data_1000d9e4;

typedef Pointer<&data_10486f24, &data_10486f28, &data_1000da14> Type0;
typedef Pointer<&data_10486f1c, &data_10486f20, &data_1000da04> Type1;
typedef Pointer<&data_10485ed4, &data_10486d3c, &data_1000d9f4> Type2;
typedef Pointer<&data_10485ed0, &data_10486d38, &data_1000d9e4> Type3;

static inline unsigned level3(const RuntimeTag* other) {
    return (other == Type3::get()) & 0xffu;
}

static inline unsigned level2(const RuntimeTag* other) {
    return other == Type2::get() ? 1u : level3(other) != 0;
}

static inline unsigned level1(const RuntimeTag* other) {
    return other == Type1::get() ? 1u : level2(other) != 0;
}

extern "C" bool fn_0207a8a8(const void*, const RuntimeTag* other) {
    if (other == Type0::get())
        return true;
    bool result = level1(other);
    return result;
}
