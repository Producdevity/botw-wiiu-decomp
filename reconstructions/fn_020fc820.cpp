#include "botw/runtime_tag_query.h"

using runtime_tag_query::Pointer;

extern "C" unsigned data_1048780c;
extern "C" RuntimeTag data_10487810;
extern "C" const RuntimeVTable data_10020394;
extern "C" unsigned data_10487130;
extern "C" RuntimeTag data_10487158;
extern "C" const RuntimeVTable data_1002035c;
extern "C" unsigned data_10485ed4;
extern "C" RuntimeTag data_10486d3c;
extern "C" const RuntimeVTable data_1002034c;
extern "C" unsigned data_10485ed0;
extern "C" RuntimeTag data_10486d38;
extern "C" const RuntimeVTable data_1002033c;

typedef Pointer<&data_1048780c, &data_10487810, &data_10020394> Type0;
typedef Pointer<&data_10487130, &data_10487158, &data_1002035c> Type1;
typedef Pointer<&data_10485ed4, &data_10486d3c, &data_1002034c> Type2;
typedef Pointer<&data_10485ed0, &data_10486d38, &data_1002033c> Type3;

static inline unsigned level3(const RuntimeTag* other) {
    return (other == Type3::get()) & 0xffu;
}

static inline unsigned level2(const RuntimeTag* other) {
    return other == Type2::get() ? 1u : level3(other) != 0;
}

static inline unsigned level1(const RuntimeTag* other) {
    return other == Type1::get() ? 1u : level2(other) != 0;
}

extern "C" bool fn_020fc820(const void*, const RuntimeTag* other) {
    if (other == Type0::get())
        return true;
    bool result = level1(other);
    return result;
}
