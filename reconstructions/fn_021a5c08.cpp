#include "botw/runtime_tag_query.h"

using runtime_tag_query::Pointer;

extern "C" unsigned data_10488394;
extern "C" RuntimeTag data_10488398;
extern "C" const RuntimeVTable data_1003e284;
extern "C" unsigned data_1048838c;
extern "C" RuntimeTag data_10488390;
extern "C" const RuntimeVTable data_1003e274;
extern "C" unsigned data_10485ed4;
extern "C" RuntimeTag data_10486d3c;
extern "C" const RuntimeVTable data_1003e264;
extern "C" unsigned data_10485ed0;
extern "C" RuntimeTag data_10486d38;
extern "C" const RuntimeVTable data_1003e254;

typedef Pointer<&data_10488394, &data_10488398, &data_1003e284> Type0;
typedef Pointer<&data_1048838c, &data_10488390, &data_1003e274> Type1;
typedef Pointer<&data_10485ed4, &data_10486d3c, &data_1003e264> Type2;
typedef Pointer<&data_10485ed0, &data_10486d38, &data_1003e254> Type3;

static inline unsigned level3(const RuntimeTag* other) {
    return (other == Type3::get()) & 0xffu;
}

static inline unsigned level2(const RuntimeTag* other) {
    return other == Type2::get() ? 1u : level3(other) != 0;
}

static inline unsigned level1(const RuntimeTag* other) {
    return other == Type1::get() ? 1u : level2(other) != 0;
}

extern "C" bool fn_021a5c08(const void*, const RuntimeTag* other) {
    if (other == Type0::get())
        return true;
    bool result = level1(other);
    return result;
}
