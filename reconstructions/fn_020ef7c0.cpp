#include "botw/runtime_tag_query.h"

using runtime_tag_query::Pointer;

extern "C" unsigned data_10487724;
extern "C" RuntimeTag data_10487728;
extern "C" const RuntimeVTable data_1001def4;
extern "C" unsigned data_10487708;
extern "C" RuntimeTag data_1048770c;
extern "C" const RuntimeVTable data_1001dee4;
extern "C" unsigned data_10485ed4;
extern "C" RuntimeTag data_10486d3c;
extern "C" const RuntimeVTable data_1001ded4;
extern "C" unsigned data_10485ed0;
extern "C" RuntimeTag data_10486d38;
extern "C" const RuntimeVTable data_1001dec4;

typedef Pointer<&data_10487724, &data_10487728, &data_1001def4> Type0;
typedef Pointer<&data_10487708, &data_1048770c, &data_1001dee4> Type1;
typedef Pointer<&data_10485ed4, &data_10486d3c, &data_1001ded4> Type2;
typedef Pointer<&data_10485ed0, &data_10486d38, &data_1001dec4> Type3;

static inline unsigned level3(const RuntimeTag* other) {
    return (other == Type3::get()) & 0xffu;
}

static inline unsigned level2(const RuntimeTag* other) {
    return other == Type2::get() ? 1u : level3(other) != 0;
}

static inline unsigned level1(const RuntimeTag* other) {
    return other == Type1::get() ? 1u : level2(other) != 0;
}

extern "C" bool fn_020ef7c0(const void*, const RuntimeTag* other) {
    if (other == Type0::get())
        return true;
    bool result = level1(other);
    return result;
}
