#include "botw/runtime_tag_query.h"

using runtime_tag_query::Pointer;

extern "C" unsigned data_104888f4;
extern "C" RuntimeTag data_104888f8;
extern "C" const RuntimeVTable data_1004dba0;
extern "C" unsigned data_104888e4;
extern "C" RuntimeTag data_104888e8;
extern "C" const RuntimeVTable data_1004db90;
extern "C" unsigned data_10485ed4;
extern "C" RuntimeTag data_10486d3c;
extern "C" const RuntimeVTable data_1004db80;
extern "C" unsigned data_10485ed0;
extern "C" RuntimeTag data_10486d38;
extern "C" const RuntimeVTable data_1004db70;

typedef Pointer<&data_104888f4, &data_104888f8, &data_1004dba0> Type0;
typedef Pointer<&data_104888e4, &data_104888e8, &data_1004db90> Type1;
typedef Pointer<&data_10485ed4, &data_10486d3c, &data_1004db80> Type2;
typedef Pointer<&data_10485ed0, &data_10486d38, &data_1004db70> Type3;

static inline unsigned level3(const RuntimeTag* other) {
    return (other == Type3::get()) & 0xffu;
}

static inline unsigned level2(const RuntimeTag* other) {
    return other == Type2::get() ? 1u : level3(other) != 0;
}

static inline unsigned level1(const RuntimeTag* other) {
    return other == Type1::get() ? 1u : level2(other) != 0;
}

extern "C" bool fn_021edd54(const void*, const RuntimeTag* other) {
    if (other == Type0::get())
        return true;
    bool result = level1(other);
    return result;
}
