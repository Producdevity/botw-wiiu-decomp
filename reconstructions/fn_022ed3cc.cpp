#include "botw/runtime_tag_query.h"

using runtime_tag_query::Pointer;

extern "C" unsigned data_104899f4;
extern "C" RuntimeTag data_104899f8;
extern "C" const RuntimeVTable data_1007ae80;
extern "C" unsigned data_104897e0;
extern "C" RuntimeTag data_104897dc;
extern "C" const RuntimeVTable data_1007ae70;
extern "C" unsigned data_10485ed4;
extern "C" RuntimeTag data_10486d3c;
extern "C" const RuntimeVTable data_1007ae38;
extern "C" unsigned data_10485ed0;
extern "C" RuntimeTag data_10486d38;
extern "C" const RuntimeVTable data_1007ae28;

typedef Pointer<&data_104899f4, &data_104899f8, &data_1007ae80> Type0;
typedef Pointer<&data_104897e0, &data_104897dc, &data_1007ae70> Type1;
typedef Pointer<&data_10485ed4, &data_10486d3c, &data_1007ae38> Type2;
typedef Pointer<&data_10485ed0, &data_10486d38, &data_1007ae28> Type3;

static inline unsigned level3(const RuntimeTag* other) {
    return (other == Type3::get()) & 0xffu;
}

static inline unsigned level2(const RuntimeTag* other) {
    return other == Type2::get() ? 1u : level3(other) != 0;
}

static inline unsigned level1(const RuntimeTag* other) {
    return other == Type1::get() ? 1u : level2(other) != 0;
}

extern "C" bool fn_022ed3cc(const void*, const RuntimeTag* other) {
    if (other == Type0::get())
        return true;
    bool result = level1(other);
    return result;
}
