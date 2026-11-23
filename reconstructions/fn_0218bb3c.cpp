#include "botw/runtime_tag_query.h"

using runtime_tag_query::Pointer;

extern "C" unsigned data_104881dc;
extern "C" RuntimeTag data_104881d8;
extern "C" const RuntimeVTable data_10039f1c;
extern "C" unsigned data_104881d4;
extern "C" RuntimeTag data_104881d0;
extern "C" const RuntimeVTable data_10039ee4;
extern "C" unsigned data_10485ed4;
extern "C" RuntimeTag data_10486d3c;
extern "C" const RuntimeVTable data_10039ed4;
extern "C" unsigned data_10485ed0;
extern "C" RuntimeTag data_10486d38;
extern "C" const RuntimeVTable data_10039ec4;

typedef Pointer<&data_104881dc, &data_104881d8, &data_10039f1c> Type0;
typedef Pointer<&data_104881d4, &data_104881d0, &data_10039ee4> Type1;
typedef Pointer<&data_10485ed4, &data_10486d3c, &data_10039ed4> Type2;
typedef Pointer<&data_10485ed0, &data_10486d38, &data_10039ec4> Type3;

static inline unsigned level3(const RuntimeTag* other) {
    return (other == Type3::get()) & 0xffu;
}

static inline unsigned level2(const RuntimeTag* other) {
    return other == Type2::get() ? 1u : level3(other) != 0;
}

static inline unsigned level1(const RuntimeTag* other) {
    return other == Type1::get() ? 1u : level2(other) != 0;
}

extern "C" bool fn_0218bb3c(const void*, const RuntimeTag* other) {
    if (other == Type0::get())
        return true;
    bool result = level1(other);
    return result;
}
