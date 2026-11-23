#include "botw/runtime_tag_query.h"

using runtime_tag_query::Pointer;

extern "C" unsigned data_1048b588;
extern "C" RuntimeTag data_1048b58c;
extern "C" const RuntimeVTable data_100d3078;
extern "C" unsigned data_1048b260;
extern "C" RuntimeTag data_1048b25c;
extern "C" const RuntimeVTable data_100d3068;
extern "C" unsigned data_10485ed8;
extern "C" RuntimeTag data_10486e88;
extern "C" const RuntimeVTable data_100d3058;
extern "C" unsigned data_10485ed0;
extern "C" RuntimeTag data_10486d38;
extern "C" const RuntimeVTable data_100d3048;

typedef Pointer<&data_1048b588, &data_1048b58c, &data_100d3078> Type0;
typedef Pointer<&data_1048b260, &data_1048b25c, &data_100d3068> Type1;
typedef Pointer<&data_10485ed8, &data_10486e88, &data_100d3058> Type2;
typedef Pointer<&data_10485ed0, &data_10486d38, &data_100d3048> Type3;

static inline unsigned level3(const RuntimeTag* other) {
    return (other == Type3::get()) & 0xffu;
}

static inline unsigned level2(const RuntimeTag* other) {
    return other == Type2::get() ? 1u : level3(other) != 0;
}

static inline unsigned level1(const RuntimeTag* other) {
    return other == Type1::get() ? 1u : level2(other) != 0;
}

extern "C" bool fn_0250c550(const void*, const RuntimeTag* other) {
    if (other == Type0::get())
        return true;
    bool result = level1(other);
    return result;
}
