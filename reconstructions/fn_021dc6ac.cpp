#include "botw/runtime_tag_query.h"

using runtime_tag_query::Pointer;

extern "C" unsigned data_1048870c;
extern "C" RuntimeTag data_10488710;
extern "C" const RuntimeVTable data_1004910c;
extern "C" unsigned data_104886fc;
extern "C" RuntimeTag data_10488700;
extern "C" const RuntimeVTable data_100490fc;
extern "C" unsigned data_10485ed4;
extern "C" RuntimeTag data_10486d3c;
extern "C" const RuntimeVTable data_100490ec;
extern "C" unsigned data_10485ed0;
extern "C" RuntimeTag data_10486d38;
extern "C" const RuntimeVTable data_100490dc;

typedef Pointer<&data_1048870c, &data_10488710, &data_1004910c> Type0;
typedef Pointer<&data_104886fc, &data_10488700, &data_100490fc> Type1;
typedef Pointer<&data_10485ed4, &data_10486d3c, &data_100490ec> Type2;
typedef Pointer<&data_10485ed0, &data_10486d38, &data_100490dc> Type3;

static inline unsigned level3(const RuntimeTag* other) {
    return (other == Type3::get()) & 0xffu;
}

static inline unsigned level2(const RuntimeTag* other) {
    return other == Type2::get() ? 1u : level3(other) != 0;
}

static inline unsigned level1(const RuntimeTag* other) {
    return other == Type1::get() ? 1u : level2(other) != 0;
}

extern "C" bool fn_021dc6ac(const void*, const RuntimeTag* other) {
    if (other == Type0::get())
        return true;
    bool result = level1(other);
    return result;
}
