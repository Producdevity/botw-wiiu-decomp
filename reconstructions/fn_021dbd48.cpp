#include "botw/runtime_tag_query.h"

using runtime_tag_query::Pointer;

extern "C" unsigned data_104886f4;
extern "C" RuntimeTag data_104886f8;
extern "C" const RuntimeVTable data_10048dd8;
extern "C" unsigned data_10486f4c;
extern "C" RuntimeTag data_10486f50;
extern "C" const RuntimeVTable data_10048da0;
extern "C" unsigned data_10485ed4;
extern "C" RuntimeTag data_10486d3c;
extern "C" const RuntimeVTable data_10048d90;
extern "C" unsigned data_10485ed0;
extern "C" RuntimeTag data_10486d38;
extern "C" const RuntimeVTable data_10048d80;

typedef Pointer<&data_104886f4, &data_104886f8, &data_10048dd8> Type0;
typedef Pointer<&data_10486f4c, &data_10486f50, &data_10048da0> Type1;
typedef Pointer<&data_10485ed4, &data_10486d3c, &data_10048d90> Type2;
typedef Pointer<&data_10485ed0, &data_10486d38, &data_10048d80> Type3;

static inline unsigned level3(const RuntimeTag* other) {
    return (other == Type3::get()) & 0xffu;
}

static inline unsigned level2(const RuntimeTag* other) {
    return other == Type2::get() ? 1u : level3(other) != 0;
}

static inline unsigned level1(const RuntimeTag* other) {
    return other == Type1::get() ? 1u : level2(other) != 0;
}

extern "C" bool fn_021dbd48(const void*, const RuntimeTag* other) {
    if (other == Type0::get())
        return true;
    bool result = level1(other);
    return result;
}
