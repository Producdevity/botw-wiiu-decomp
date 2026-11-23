#include "botw/runtime_tag_query.h"

using runtime_tag_query::Pointer;

extern "C" unsigned data_1048aa48;
extern "C" RuntimeTag data_1048aa4c;
extern "C" const RuntimeVTable data_100abf70;
extern "C" unsigned data_104879ac;
extern "C" RuntimeTag data_104879a8;
extern "C" const RuntimeVTable data_100abf60;
extern "C" unsigned data_10485ed4;
extern "C" RuntimeTag data_10486d3c;
extern "C" const RuntimeVTable data_100abf50;
extern "C" unsigned data_10485ed0;
extern "C" RuntimeTag data_10486d38;
extern "C" const RuntimeVTable data_100abf40;

typedef Pointer<&data_1048aa48, &data_1048aa4c, &data_100abf70> Type0;
typedef Pointer<&data_104879ac, &data_104879a8, &data_100abf60> Type1;
typedef Pointer<&data_10485ed4, &data_10486d3c, &data_100abf50> Type2;
typedef Pointer<&data_10485ed0, &data_10486d38, &data_100abf40> Type3;

static inline unsigned level3(const RuntimeTag* other) {
    return (other == Type3::get()) & 0xffu;
}

static inline unsigned level2(const RuntimeTag* other) {
    return other == Type2::get() ? 1u : level3(other) != 0;
}

static inline unsigned level1(const RuntimeTag* other) {
    return other == Type1::get() ? 1u : level2(other) != 0;
}

extern "C" bool fn_0240a50c(const void*, const RuntimeTag* other) {
    if (other == Type0::get())
        return true;
    bool result = level1(other);
    return result;
}
