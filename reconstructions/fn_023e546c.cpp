#include "botw/runtime_tag_query.h"

using runtime_tag_query::Pointer;

extern "C" unsigned data_1048a81c;
extern "C" RuntimeTag data_1048a818;
extern "C" const RuntimeVTable data_100a5f1c;
extern "C" unsigned data_1048a814;
extern "C" RuntimeTag data_1048a810;
extern "C" const RuntimeVTable data_100a5f0c;
extern "C" unsigned data_10485ed4;
extern "C" RuntimeTag data_10486d3c;
extern "C" const RuntimeVTable data_100a5efc;
extern "C" unsigned data_10485ed0;
extern "C" RuntimeTag data_10486d38;
extern "C" const RuntimeVTable data_100a5eec;

typedef Pointer<&data_1048a81c, &data_1048a818, &data_100a5f1c> Type0;
typedef Pointer<&data_1048a814, &data_1048a810, &data_100a5f0c> Type1;
typedef Pointer<&data_10485ed4, &data_10486d3c, &data_100a5efc> Type2;
typedef Pointer<&data_10485ed0, &data_10486d38, &data_100a5eec> Type3;

static inline unsigned level3(const RuntimeTag* other) {
    return (other == Type3::get()) & 0xffu;
}

static inline unsigned level2(const RuntimeTag* other) {
    return other == Type2::get() ? 1u : level3(other) != 0;
}

static inline unsigned level1(const RuntimeTag* other) {
    return other == Type1::get() ? 1u : level2(other) != 0;
}

extern "C" bool fn_023e546c(const void*, const RuntimeTag* other) {
    if (other == Type0::get())
        return true;
    bool result = level1(other);
    return result;
}
