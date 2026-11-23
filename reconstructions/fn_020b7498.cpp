#include "botw/runtime_tag_query.h"

using runtime_tag_query::Pointer;

extern "C" unsigned data_104872d8;
extern "C" RuntimeTag data_104872d4;
extern "C" const RuntimeVTable data_1001565c;
extern "C" unsigned data_104872d0;
extern "C" RuntimeTag data_104872cc;
extern "C" const RuntimeVTable data_1001564c;
extern "C" unsigned data_10485ed4;
extern "C" RuntimeTag data_10486d3c;
extern "C" const RuntimeVTable data_1001563c;
extern "C" unsigned data_10485ed0;
extern "C" RuntimeTag data_10486d38;
extern "C" const RuntimeVTable data_1001562c;

typedef Pointer<&data_104872d8, &data_104872d4, &data_1001565c> Type0;
typedef Pointer<&data_104872d0, &data_104872cc, &data_1001564c> Type1;
typedef Pointer<&data_10485ed4, &data_10486d3c, &data_1001563c> Type2;
typedef Pointer<&data_10485ed0, &data_10486d38, &data_1001562c> Type3;

static inline unsigned level3(const RuntimeTag* other) {
    return (other == Type3::get()) & 0xffu;
}

static inline unsigned level2(const RuntimeTag* other) {
    return other == Type2::get() ? 1u : level3(other) != 0;
}

static inline unsigned level1(const RuntimeTag* other) {
    return other == Type1::get() ? 1u : level2(other) != 0;
}

extern "C" bool fn_020b7498(const void*, const RuntimeTag* other) {
    if (other == Type0::get())
        return true;
    bool result = level1(other);
    return result;
}
