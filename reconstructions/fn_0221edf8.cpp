#include "botw/runtime_tag_query.h"

using runtime_tag_query::Pointer;

extern "C" unsigned data_10488db8;
extern "C" RuntimeTag data_10488db4;
extern "C" const RuntimeVTable data_100592dc;
extern "C" unsigned data_10488db0;
extern "C" RuntimeTag data_10488dac;
extern "C" const RuntimeVTable data_100592cc;
extern "C" unsigned data_10485ed4;
extern "C" RuntimeTag data_10486d3c;
extern "C" const RuntimeVTable data_100592bc;
extern "C" unsigned data_10485ed0;
extern "C" RuntimeTag data_10486d38;
extern "C" const RuntimeVTable data_100592ac;

typedef Pointer<&data_10488db8, &data_10488db4, &data_100592dc> Type0;
typedef Pointer<&data_10488db0, &data_10488dac, &data_100592cc> Type1;
typedef Pointer<&data_10485ed4, &data_10486d3c, &data_100592bc> Type2;
typedef Pointer<&data_10485ed0, &data_10486d38, &data_100592ac> Type3;

static inline unsigned level3(const RuntimeTag* other) {
    return (other == Type3::get()) & 0xffu;
}

static inline unsigned level2(const RuntimeTag* other) {
    return other == Type2::get() ? 1u : level3(other) != 0;
}

static inline unsigned level1(const RuntimeTag* other) {
    return other == Type1::get() ? 1u : level2(other) != 0;
}

extern "C" bool fn_0221edf8(const void*, const RuntimeTag* other) {
    if (other == Type0::get())
        return true;
    bool result = level1(other);
    return result;
}
