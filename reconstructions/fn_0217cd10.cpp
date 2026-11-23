#include "botw/runtime_tag_query.h"

using runtime_tag_query::Pointer;

extern "C" unsigned data_10488108;
extern "C" RuntimeTag data_1048810c;
extern "C" const RuntimeVTable data_10037228;
extern "C" unsigned data_104873dc;
extern "C" RuntimeTag data_104873e0;
extern "C" const RuntimeVTable data_10037218;
extern "C" unsigned data_10485ed4;
extern "C" RuntimeTag data_10486d3c;
extern "C" const RuntimeVTable data_10037208;
extern "C" unsigned data_10485ed0;
extern "C" RuntimeTag data_10486d38;
extern "C" const RuntimeVTable data_100371f8;

typedef Pointer<&data_10488108, &data_1048810c, &data_10037228> Type0;
typedef Pointer<&data_104873dc, &data_104873e0, &data_10037218> Type1;
typedef Pointer<&data_10485ed4, &data_10486d3c, &data_10037208> Type2;
typedef Pointer<&data_10485ed0, &data_10486d38, &data_100371f8> Type3;

static inline unsigned level3(const RuntimeTag* other) {
    return (other == Type3::get()) & 0xffu;
}

static inline unsigned level2(const RuntimeTag* other) {
    return other == Type2::get() ? 1u : level3(other) != 0;
}

static inline unsigned level1(const RuntimeTag* other) {
    return other == Type1::get() ? 1u : level2(other) != 0;
}

extern "C" bool fn_0217cd10(const void*, const RuntimeTag* other) {
    if (other == Type0::get())
        return true;
    bool result = level1(other);
    return result;
}
