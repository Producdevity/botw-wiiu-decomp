#include "botw/runtime_tag_query.h"

using runtime_tag_query::Pointer;

extern "C" unsigned data_10487464;
extern "C" RuntimeTag data_10497350;
extern "C" const RuntimeVTable data_10344024;
extern "C" unsigned data_10487448;
extern "C" RuntimeTag data_10496658;
extern "C" const RuntimeVTable data_10344014;
extern "C" unsigned data_104873f8;
extern "C" RuntimeTag data_10495dd4;
extern "C" const RuntimeVTable data_10344004;
extern "C" unsigned data_10486300;
extern "C" RuntimeTag data_10495dac;
extern "C" const RuntimeVTable data_10343ff4;

typedef Pointer<&data_10487464, &data_10497350, &data_10344024> Type0;
typedef Pointer<&data_10487448, &data_10496658, &data_10344014> Type1;
typedef Pointer<&data_104873f8, &data_10495dd4, &data_10344004> Type2;
typedef Pointer<&data_10486300, &data_10495dac, &data_10343ff4> Type3;

static inline unsigned level3(const RuntimeTag* other) {
    return (other == Type3::get()) & 0xffu;
}

static inline unsigned level2(const RuntimeTag* other) {
    return other == Type2::get() ? 1u : level3(other) != 0;
}

static inline unsigned level1(const RuntimeTag* other) {
    return other == Type1::get() ? 1u : level2(other) != 0;
}

extern "C" bool fn_03964e1c(const void*, const RuntimeTag* other) {
    if (other == Type0::get())
        return true;
    bool result = level1(other);
    return result;
}
