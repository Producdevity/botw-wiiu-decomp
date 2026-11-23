#include "botw/runtime_tag_query.h"

using runtime_tag_query::Pointer;

extern "C" unsigned data_10488a84;
extern "C" RuntimeTag data_10488a88;
extern "C" const RuntimeVTable data_10051d84;
extern "C" unsigned data_104888e4;
extern "C" RuntimeTag data_104888e8;
extern "C" const RuntimeVTable data_10051d74;
extern "C" unsigned data_10485ed4;
extern "C" RuntimeTag data_10486d3c;
extern "C" const RuntimeVTable data_10051d64;
extern "C" unsigned data_10485ed0;
extern "C" RuntimeTag data_10486d38;
extern "C" const RuntimeVTable data_10051d54;

typedef Pointer<&data_10488a84, &data_10488a88, &data_10051d84> Type0;
typedef Pointer<&data_104888e4, &data_104888e8, &data_10051d74> Type1;
typedef Pointer<&data_10485ed4, &data_10486d3c, &data_10051d64> Type2;
typedef Pointer<&data_10485ed0, &data_10486d38, &data_10051d54> Type3;

static inline unsigned level3(const RuntimeTag* other) {
    return (other == Type3::get()) & 0xffu;
}

static inline unsigned level2(const RuntimeTag* other) {
    return other == Type2::get() ? 1u : level3(other) != 0;
}

static inline unsigned level1(const RuntimeTag* other) {
    return other == Type1::get() ? 1u : level2(other) != 0;
}

extern "C" bool fn_022028c8(const void*, const RuntimeTag* other) {
    if (other == Type0::get())
        return true;
    bool result = level1(other);
    return result;
}
