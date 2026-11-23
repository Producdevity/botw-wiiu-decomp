#include "botw/runtime_tag_query.h"

using runtime_tag_query::Pointer;

extern "C" unsigned data_10487654;
extern "C" RuntimeTag data_10487658;
extern "C" const RuntimeVTable data_1001c070;
extern "C" unsigned data_10486d78;
extern "C" RuntimeTag data_10486e2c;
extern "C" const RuntimeVTable data_1001c050;
extern "C" unsigned data_10485ed4;
extern "C" RuntimeTag data_10486d3c;
extern "C" const RuntimeVTable data_1001c040;
extern "C" unsigned data_10485ed0;
extern "C" RuntimeTag data_10486d38;
extern "C" const RuntimeVTable data_1001c030;

typedef Pointer<&data_10487654, &data_10487658, &data_1001c070> Type0;
typedef Pointer<&data_10486d78, &data_10486e2c, &data_1001c050> Type1;
typedef Pointer<&data_10485ed4, &data_10486d3c, &data_1001c040> Type2;
typedef Pointer<&data_10485ed0, &data_10486d38, &data_1001c030> Type3;

static inline unsigned level3(const RuntimeTag* other) {
    return (other == Type3::get()) & 0xffu;
}

static inline unsigned level2(const RuntimeTag* other) {
    return other == Type2::get() ? 1u : level3(other) != 0;
}

static inline unsigned level1(const RuntimeTag* other) {
    return other == Type1::get() ? 1u : level2(other) != 0;
}

extern "C" bool fn_020deec0(const void*, const RuntimeTag* other) {
    if (other == Type0::get())
        return true;
    bool result = level1(other);
    return result;
}
