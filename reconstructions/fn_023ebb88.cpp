#include "botw/runtime_tag_query.h"

using runtime_tag_query::Pointer;

extern "C" unsigned data_1048a860;
extern "C" RuntimeTag data_1048a864;
extern "C" const RuntimeVTable data_100a727c;
extern "C" unsigned data_1048a85c;
extern "C" RuntimeTag data_1048a858;
extern "C" const RuntimeVTable data_100a726c;
extern "C" unsigned data_10485ed4;
extern "C" RuntimeTag data_10486d3c;
extern "C" const RuntimeVTable data_100a725c;
extern "C" unsigned data_10485ed0;
extern "C" RuntimeTag data_10486d38;
extern "C" const RuntimeVTable data_100a724c;

typedef Pointer<&data_1048a860, &data_1048a864, &data_100a727c> Type0;
typedef Pointer<&data_1048a85c, &data_1048a858, &data_100a726c> Type1;
typedef Pointer<&data_10485ed4, &data_10486d3c, &data_100a725c> Type2;
typedef Pointer<&data_10485ed0, &data_10486d38, &data_100a724c> Type3;

static inline unsigned level3(const RuntimeTag* other) {
    return (other == Type3::get()) & 0xffu;
}

static inline unsigned level2(const RuntimeTag* other) {
    return other == Type2::get() ? 1u : level3(other) != 0;
}

static inline unsigned level1(const RuntimeTag* other) {
    return other == Type1::get() ? 1u : level2(other) != 0;
}

extern "C" bool fn_023ebb88(const void*, const RuntimeTag* other) {
    if (other == Type0::get())
        return true;
    bool result = level1(other);
    return result;
}
