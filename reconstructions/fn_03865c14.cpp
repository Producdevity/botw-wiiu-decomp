#include "botw/runtime_tag_query.h"

using runtime_tag_query::Pointer;

extern "C" unsigned data_104873ec;
extern "C" RuntimeTag data_10495dcc;
extern "C" const RuntimeVTable data_10328778;
extern "C" unsigned data_104873e8;
extern "C" RuntimeTag data_10495dc8;
extern "C" const RuntimeVTable data_10328768;
extern "C" unsigned data_104873e4;
extern "C" RuntimeTag data_10495dc4;
extern "C" const RuntimeVTable data_10328758;
extern "C" unsigned data_10486300;
extern "C" RuntimeTag data_10495dac;
extern "C" const RuntimeVTable data_10328748;

typedef Pointer<&data_104873ec, &data_10495dcc, &data_10328778> Type0;
typedef Pointer<&data_104873e8, &data_10495dc8, &data_10328768> Type1;
typedef Pointer<&data_104873e4, &data_10495dc4, &data_10328758> Type2;
typedef Pointer<&data_10486300, &data_10495dac, &data_10328748> Type3;

static inline unsigned level3(const RuntimeTag* other) {
    return (other == Type3::get()) & 0xffu;
}

static inline unsigned level2(const RuntimeTag* other) {
    return other == Type2::get() ? 1u : level3(other) != 0;
}

static inline unsigned level1(const RuntimeTag* other) {
    return other == Type1::get() ? 1u : level2(other) != 0;
}

extern "C" bool fn_03865c14(const void*, const RuntimeTag* other) {
    if (other == Type0::get())
        return true;
    bool result = level1(other);
    return result;
}
