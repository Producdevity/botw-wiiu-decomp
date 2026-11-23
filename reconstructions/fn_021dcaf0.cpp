#include "botw/runtime_tag_query.h"

using runtime_tag_query::Pointer;

extern "C" unsigned data_10488714;
extern "C" RuntimeTag data_10488718;
extern "C" const RuntimeVTable data_100492c8;
extern "C" unsigned data_10486f4c;
extern "C" RuntimeTag data_10486f50;
extern "C" const RuntimeVTable data_100492b8;
extern "C" unsigned data_10485ed4;
extern "C" RuntimeTag data_10486d3c;
extern "C" const RuntimeVTable data_100492a8;
extern "C" unsigned data_10485ed0;
extern "C" RuntimeTag data_10486d38;
extern "C" const RuntimeVTable data_10049298;

typedef Pointer<&data_10488714, &data_10488718, &data_100492c8> Type0;
typedef Pointer<&data_10486f4c, &data_10486f50, &data_100492b8> Type1;
typedef Pointer<&data_10485ed4, &data_10486d3c, &data_100492a8> Type2;
typedef Pointer<&data_10485ed0, &data_10486d38, &data_10049298> Type3;

static inline unsigned level3(const RuntimeTag* other) {
    return (other == Type3::get()) & 0xffu;
}

static inline unsigned level2(const RuntimeTag* other) {
    return other == Type2::get() ? 1u : level3(other) != 0;
}

static inline unsigned level1(const RuntimeTag* other) {
    return other == Type1::get() ? 1u : level2(other) != 0;
}

extern "C" bool fn_021dcaf0(const void*, const RuntimeTag* other) {
    if (other == Type0::get())
        return true;
    bool result = level1(other);
    return result;
}
