#include "botw/runtime_tag_query.h"

using runtime_tag_query::Pointer;

extern "C" unsigned data_1048bb80;
extern "C" RuntimeTag data_1048bb84;
extern "C" const RuntimeVTable data_100e5dbc;
extern "C" unsigned data_1048bb78;
extern "C" RuntimeTag data_1048bb7c;
extern "C" const RuntimeVTable data_100e5dac;
extern "C" unsigned data_10485ed8;
extern "C" RuntimeTag data_10486e88;
extern "C" const RuntimeVTable data_100e5d9c;
extern "C" unsigned data_10485ed0;
extern "C" RuntimeTag data_10486d38;
extern "C" const RuntimeVTable data_100e5d8c;

typedef Pointer<&data_1048bb80, &data_1048bb84, &data_100e5dbc> Type0;
typedef Pointer<&data_1048bb78, &data_1048bb7c, &data_100e5dac> Type1;
typedef Pointer<&data_10485ed8, &data_10486e88, &data_100e5d9c> Type2;
typedef Pointer<&data_10485ed0, &data_10486d38, &data_100e5d8c> Type3;

static inline unsigned level3(const RuntimeTag* other) {
    return (other == Type3::get()) & 0xffu;
}

static inline unsigned level2(const RuntimeTag* other) {
    return other == Type2::get() ? 1u : level3(other) != 0;
}

static inline unsigned level1(const RuntimeTag* other) {
    return other == Type1::get() ? 1u : level2(other) != 0;
}

extern "C" bool fn_02588738(const void*, const RuntimeTag* other) {
    if (other == Type0::get())
        return true;
    bool result = level1(other);
    return result;
}
