#include "botw/runtime_tag_query.h"

using runtime_tag_query::Pointer;

extern "C" unsigned data_1048745c;
extern "C" RuntimeTag data_1049666c;
extern "C" const RuntimeVTable data_10328948;
extern "C" unsigned data_10487448;
extern "C" RuntimeTag data_10496658;
extern "C" const RuntimeVTable data_10328938;
extern "C" unsigned data_104873f8;
extern "C" RuntimeTag data_10495dd4;
extern "C" const RuntimeVTable data_10328928;
extern "C" unsigned data_10486300;
extern "C" RuntimeTag data_10495dac;
extern "C" const RuntimeVTable data_10328918;

typedef Pointer<&data_1048745c, &data_1049666c, &data_10328948> Type0;
typedef Pointer<&data_10487448, &data_10496658, &data_10328938> Type1;
typedef Pointer<&data_104873f8, &data_10495dd4, &data_10328928> Type2;
typedef Pointer<&data_10486300, &data_10495dac, &data_10328918> Type3;

static inline unsigned level3(const RuntimeTag* other) {
    return (other == Type3::get()) & 0xffu;
}

static inline unsigned level2(const RuntimeTag* other) {
    return other == Type2::get() ? 1u : level3(other) != 0;
}

static inline unsigned level1(const RuntimeTag* other) {
    return other == Type1::get() ? 1u : level2(other) != 0;
}

extern "C" bool fn_038660b4(const void*, const RuntimeTag* other) {
    if (other == Type0::get())
        return true;
    bool result = level1(other);
    return result;
}
