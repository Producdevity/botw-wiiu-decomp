#include "botw/runtime_tag_query.h"

using runtime_tag_query::Pointer;

extern "C" unsigned data_1048827c;
extern "C" RuntimeTag data_10488280;
extern "C" const RuntimeVTable data_1003b45c;
extern "C" unsigned data_10486efc;
extern "C" RuntimeTag data_10486f00;
extern "C" const RuntimeVTable data_1003b44c;
extern "C" unsigned data_10485ed4;
extern "C" RuntimeTag data_10486d3c;
extern "C" const RuntimeVTable data_1003b43c;
extern "C" unsigned data_10485ed0;
extern "C" RuntimeTag data_10486d38;
extern "C" const RuntimeVTable data_1003b42c;

typedef Pointer<&data_1048827c, &data_10488280, &data_1003b45c> Type0;
typedef Pointer<&data_10486efc, &data_10486f00, &data_1003b44c> Type1;
typedef Pointer<&data_10485ed4, &data_10486d3c, &data_1003b43c> Type2;
typedef Pointer<&data_10485ed0, &data_10486d38, &data_1003b42c> Type3;

static inline unsigned level3(const RuntimeTag* other) {
    return (other == Type3::get()) & 0xffu;
}

static inline unsigned level2(const RuntimeTag* other) {
    return other == Type2::get() ? 1u : level3(other) != 0;
}

static inline unsigned level1(const RuntimeTag* other) {
    return other == Type1::get() ? 1u : level2(other) != 0;
}

extern "C" bool fn_02195468(const void*, const RuntimeTag* other) {
    if (other == Type0::get())
        return true;
    bool result = level1(other);
    return result;
}
