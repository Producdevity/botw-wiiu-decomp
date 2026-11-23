#include "botw/runtime_tag_query.h"

using runtime_tag_query::Pointer;

extern "C" unsigned data_1048a024;
extern "C" RuntimeTag data_1048a028;
extern "C" const RuntimeVTable data_1008c7c8;
extern "C" unsigned data_1048a01c;
extern "C" RuntimeTag data_1048a020;
extern "C" const RuntimeVTable data_1008c7b8;
extern "C" unsigned data_10485ed4;
extern "C" RuntimeTag data_10486d3c;
extern "C" const RuntimeVTable data_1008c7a8;
extern "C" unsigned data_10485ed0;
extern "C" RuntimeTag data_10486d38;
extern "C" const RuntimeVTable data_1008c798;

typedef Pointer<&data_1048a024, &data_1048a028, &data_1008c7c8> Type0;
typedef Pointer<&data_1048a01c, &data_1048a020, &data_1008c7b8> Type1;
typedef Pointer<&data_10485ed4, &data_10486d3c, &data_1008c7a8> Type2;
typedef Pointer<&data_10485ed0, &data_10486d38, &data_1008c798> Type3;

static inline unsigned level3(const RuntimeTag* other) {
    return (other == Type3::get()) & 0xffu;
}

static inline unsigned level2(const RuntimeTag* other) {
    return other == Type2::get() ? 1u : level3(other) != 0;
}

static inline unsigned level1(const RuntimeTag* other) {
    return other == Type1::get() ? 1u : level2(other) != 0;
}

extern "C" bool fn_0234fce0(const void*, const RuntimeTag* other) {
    if (other == Type0::get())
        return true;
    bool result = level1(other);
    return result;
}
