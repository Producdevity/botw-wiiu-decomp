#include "botw/runtime_tag_query.h"

using runtime_tag_query::Pointer;

extern "C" unsigned data_10486e1c;
extern "C" RuntimeTag data_10486e20;
extern "C" const RuntimeVTable data_1000bb18;
extern "C" unsigned data_10486e14;
extern "C" RuntimeTag data_10486e18;
extern "C" const RuntimeVTable data_1000bb08;
extern "C" unsigned data_10485ed4;
extern "C" RuntimeTag data_10486d3c;
extern "C" const RuntimeVTable data_1000baf8;
extern "C" unsigned data_10485ed0;
extern "C" RuntimeTag data_10486d38;
extern "C" const RuntimeVTable data_1000bae8;

typedef Pointer<&data_10486e1c, &data_10486e20, &data_1000bb18> Type0;
typedef Pointer<&data_10486e14, &data_10486e18, &data_1000bb08> Type1;
typedef Pointer<&data_10485ed4, &data_10486d3c, &data_1000baf8> Type2;
typedef Pointer<&data_10485ed0, &data_10486d38, &data_1000bae8> Type3;

static inline unsigned level3(const RuntimeTag* other) {
    return (other == Type3::get()) & 0xffu;
}

static inline unsigned level2(const RuntimeTag* other) {
    return other == Type2::get() ? 1u : level3(other) != 0;
}

static inline unsigned level1(const RuntimeTag* other) {
    return other == Type1::get() ? 1u : level2(other) != 0;
}

extern "C" bool fn_020703c4(const void*, const RuntimeTag* other) {
    if (other == Type0::get())
        return true;
    bool result = level1(other);
    return result;
}
