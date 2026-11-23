#include "botw/runtime_tag_query.h"

using runtime_tag_query::Pointer;

extern "C" unsigned data_1048a034;
extern "C" RuntimeTag data_1048a038;
extern "C" const RuntimeVTable data_1008cd9c;
extern "C" unsigned data_1048a01c;
extern "C" RuntimeTag data_1048a020;
extern "C" const RuntimeVTable data_1008cd8c;
extern "C" unsigned data_10485ed4;
extern "C" RuntimeTag data_10486d3c;
extern "C" const RuntimeVTable data_1008cd7c;
extern "C" unsigned data_10485ed0;
extern "C" RuntimeTag data_10486d38;
extern "C" const RuntimeVTable data_1008cd6c;

typedef Pointer<&data_1048a034, &data_1048a038, &data_1008cd9c> Type0;
typedef Pointer<&data_1048a01c, &data_1048a020, &data_1008cd8c> Type1;
typedef Pointer<&data_10485ed4, &data_10486d3c, &data_1008cd7c> Type2;
typedef Pointer<&data_10485ed0, &data_10486d38, &data_1008cd6c> Type3;

static inline unsigned level3(const RuntimeTag* other) {
    return (other == Type3::get()) & 0xffu;
}

static inline unsigned level2(const RuntimeTag* other) {
    return other == Type2::get() ? 1u : level3(other) != 0;
}

static inline unsigned level1(const RuntimeTag* other) {
    return other == Type1::get() ? 1u : level2(other) != 0;
}

extern "C" bool fn_02353e10(const void*, const RuntimeTag* other) {
    if (other == Type0::get())
        return true;
    bool result = level1(other);
    return result;
}
