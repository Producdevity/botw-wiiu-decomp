#include "botw/runtime_tag_query.h"

using runtime_tag_query::Pointer;

extern "C" unsigned data_104883f4;
extern "C" RuntimeTag data_104883f8;
extern "C" const RuntimeVTable data_1003f47c;
extern "C" unsigned data_104883ec;
extern "C" RuntimeTag data_104883f0;
extern "C" const RuntimeVTable data_1003f46c;
extern "C" unsigned data_10485ed4;
extern "C" RuntimeTag data_10486d3c;
extern "C" const RuntimeVTable data_1003f45c;
extern "C" unsigned data_10485ed0;
extern "C" RuntimeTag data_10486d38;
extern "C" const RuntimeVTable data_1003f44c;

typedef Pointer<&data_104883f4, &data_104883f8, &data_1003f47c> Type0;
typedef Pointer<&data_104883ec, &data_104883f0, &data_1003f46c> Type1;
typedef Pointer<&data_10485ed4, &data_10486d3c, &data_1003f45c> Type2;
typedef Pointer<&data_10485ed0, &data_10486d38, &data_1003f44c> Type3;

static inline unsigned level3(const RuntimeTag* other) {
    return (other == Type3::get()) & 0xffu;
}

static inline unsigned level2(const RuntimeTag* other) {
    return other == Type2::get() ? 1u : level3(other) != 0;
}

static inline unsigned level1(const RuntimeTag* other) {
    return other == Type1::get() ? 1u : level2(other) != 0;
}

extern "C" bool fn_021ac8c0(const void*, const RuntimeTag* other) {
    if (other == Type0::get())
        return true;
    bool result = level1(other);
    return result;
}
