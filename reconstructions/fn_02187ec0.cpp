#include "botw/runtime_tag_query.h"

using runtime_tag_query::Pointer;

extern "C" unsigned data_10488190;
extern "C" RuntimeTag data_10488194;
extern "C" const RuntimeVTable data_1003950c;
extern "C" unsigned data_10488180;
extern "C" RuntimeTag data_10488184;
extern "C" const RuntimeVTable data_100394fc;
extern "C" unsigned data_10485ed4;
extern "C" RuntimeTag data_10486d3c;
extern "C" const RuntimeVTable data_100394d4;
extern "C" unsigned data_10485ed0;
extern "C" RuntimeTag data_10486d38;
extern "C" const RuntimeVTable data_100394c4;

typedef Pointer<&data_10488190, &data_10488194, &data_1003950c> Type0;
typedef Pointer<&data_10488180, &data_10488184, &data_100394fc> Type1;
typedef Pointer<&data_10485ed4, &data_10486d3c, &data_100394d4> Type2;
typedef Pointer<&data_10485ed0, &data_10486d38, &data_100394c4> Type3;

static inline unsigned level3(const RuntimeTag* other) {
    return (other == Type3::get()) & 0xffu;
}

static inline unsigned level2(const RuntimeTag* other) {
    return other == Type2::get() ? 1u : level3(other) != 0;
}

static inline unsigned level1(const RuntimeTag* other) {
    return other == Type1::get() ? 1u : level2(other) != 0;
}

extern "C" bool fn_02187ec0(const void*, const RuntimeTag* other) {
    if (other == Type0::get())
        return true;
    bool result = level1(other);
    return result;
}
