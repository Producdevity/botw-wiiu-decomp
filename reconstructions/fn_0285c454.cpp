#include "botw/runtime_tag_query.h"

using runtime_tag_query::Pointer;

extern "C" unsigned data_1048d720;
extern "C" RuntimeTag data_1048d724;
extern "C" const RuntimeVTable data_10147ddc;
extern "C" unsigned data_1048d718;
extern "C" RuntimeTag data_1048d71c;
extern "C" const RuntimeVTable data_10147dcc;
extern "C" unsigned data_10485ed8;
extern "C" RuntimeTag data_10486e88;
extern "C" const RuntimeVTable data_10147dbc;
extern "C" unsigned data_10485ed0;
extern "C" RuntimeTag data_10486d38;
extern "C" const RuntimeVTable data_10147dac;

typedef Pointer<&data_1048d720, &data_1048d724, &data_10147ddc> Type0;
typedef Pointer<&data_1048d718, &data_1048d71c, &data_10147dcc> Type1;
typedef Pointer<&data_10485ed8, &data_10486e88, &data_10147dbc> Type2;
typedef Pointer<&data_10485ed0, &data_10486d38, &data_10147dac> Type3;

static inline unsigned level3(const RuntimeTag* other) {
    return (other == Type3::get()) & 0xffu;
}

static inline unsigned level2(const RuntimeTag* other) {
    return other == Type2::get() ? 1u : level3(other) != 0;
}

static inline unsigned level1(const RuntimeTag* other) {
    return other == Type1::get() ? 1u : level2(other) != 0;
}

extern "C" bool fn_0285c454(const void*, const RuntimeTag* other) {
    if (other == Type0::get())
        return true;
    bool result = level1(other);
    return result;
}
