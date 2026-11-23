#include "botw/runtime_tag_query.h"

using runtime_tag_query::Pointer;

extern "C" unsigned data_10488230;
extern "C" RuntimeTag data_1048822c;
extern "C" const RuntimeVTable data_1003ab9c;
extern "C" unsigned data_10486efc;
extern "C" RuntimeTag data_10486f00;
extern "C" const RuntimeVTable data_1003ab8c;
extern "C" unsigned data_10485ed4;
extern "C" RuntimeTag data_10486d3c;
extern "C" const RuntimeVTable data_1003ab6c;
extern "C" unsigned data_10485ed0;
extern "C" RuntimeTag data_10486d38;
extern "C" const RuntimeVTable data_1003ab5c;

typedef Pointer<&data_10488230, &data_1048822c, &data_1003ab9c> Type0;
typedef Pointer<&data_10486efc, &data_10486f00, &data_1003ab8c> Type1;
typedef Pointer<&data_10485ed4, &data_10486d3c, &data_1003ab6c> Type2;
typedef Pointer<&data_10485ed0, &data_10486d38, &data_1003ab5c> Type3;

static inline unsigned level3(const RuntimeTag* other) {
    return (other == Type3::get()) & 0xffu;
}

static inline unsigned level2(const RuntimeTag* other) {
    return other == Type2::get() ? 1u : level3(other) != 0;
}

static inline unsigned level1(const RuntimeTag* other) {
    return other == Type1::get() ? 1u : level2(other) != 0;
}

extern "C" bool fn_02190530(const void*, const RuntimeTag* other) {
    if (other == Type0::get())
        return true;
    bool result = level1(other);
    return result;
}
