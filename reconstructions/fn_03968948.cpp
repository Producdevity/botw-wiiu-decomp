#include "botw/runtime_tag_query.h"

using runtime_tag_query::Pointer;

extern "C" unsigned data_10487420;
extern "C" RuntimeTag data_10497380;
extern "C" const RuntimeVTable data_103451fc;
extern "C" unsigned data_10487404;
extern "C" RuntimeTag data_1049667c;
extern "C" const RuntimeVTable data_103451ec;
extern "C" unsigned data_104873f8;
extern "C" RuntimeTag data_10495dd4;
extern "C" const RuntimeVTable data_103451dc;
extern "C" unsigned data_10486300;
extern "C" RuntimeTag data_10495dac;
extern "C" const RuntimeVTable data_103451cc;

typedef Pointer<&data_10487420, &data_10497380, &data_103451fc> Type0;
typedef Pointer<&data_10487404, &data_1049667c, &data_103451ec> Type1;
typedef Pointer<&data_104873f8, &data_10495dd4, &data_103451dc> Type2;
typedef Pointer<&data_10486300, &data_10495dac, &data_103451cc> Type3;

static inline unsigned level3(const RuntimeTag* other) {
    return (other == Type3::get()) & 0xffu;
}

static inline unsigned level2(const RuntimeTag* other) {
    return other == Type2::get() ? 1u : level3(other) != 0;
}

static inline unsigned level1(const RuntimeTag* other) {
    return other == Type1::get() ? 1u : level2(other) != 0;
}

extern "C" bool fn_03968948(const void*, const RuntimeTag* other) {
    if (other == Type0::get())
        return true;
    bool result = level1(other);
    return result;
}
