#include "botw/runtime_tag_query.h"

using runtime_tag_query::Pointer;

extern "C" unsigned data_104885c8;
extern "C" RuntimeTag data_104885cc;
extern "C" const RuntimeVTable data_100446b0;
extern "C" unsigned data_104885c0;
extern "C" RuntimeTag data_104885c4;
extern "C" const RuntimeVTable data_100446a0;
extern "C" unsigned data_10485ed4;
extern "C" RuntimeTag data_10486d3c;
extern "C" const RuntimeVTable data_10044690;
extern "C" unsigned data_10485ed0;
extern "C" RuntimeTag data_10486d38;
extern "C" const RuntimeVTable data_10044680;

typedef Pointer<&data_104885c8, &data_104885cc, &data_100446b0> Type0;
typedef Pointer<&data_104885c0, &data_104885c4, &data_100446a0> Type1;
typedef Pointer<&data_10485ed4, &data_10486d3c, &data_10044690> Type2;
typedef Pointer<&data_10485ed0, &data_10486d38, &data_10044680> Type3;

static inline unsigned level3(const RuntimeTag* other) {
    return (other == Type3::get()) & 0xffu;
}

static inline unsigned level2(const RuntimeTag* other) {
    return other == Type2::get() ? 1u : level3(other) != 0;
}

static inline unsigned level1(const RuntimeTag* other) {
    return other == Type1::get() ? 1u : level2(other) != 0;
}

extern "C" bool fn_021c8e64(const void*, const RuntimeTag* other) {
    if (other == Type0::get())
        return true;
    bool result = level1(other);
    return result;
}
