#include "botw/runtime_tag_query.h"

using runtime_tag_query::Pointer;

extern "C" unsigned data_10489eec;
extern "C" RuntimeTag data_10489ef0;
extern "C" const RuntimeVTable data_100889fc;
extern "C" unsigned data_10489ecc;
extern "C" RuntimeTag data_10489ed0;
extern "C" const RuntimeVTable data_100889ec;
extern "C" unsigned data_10485ed4;
extern "C" RuntimeTag data_10486d3c;
extern "C" const RuntimeVTable data_100889dc;
extern "C" unsigned data_10485ed0;
extern "C" RuntimeTag data_10486d38;
extern "C" const RuntimeVTable data_100889cc;

typedef Pointer<&data_10489eec, &data_10489ef0, &data_100889fc> Type0;
typedef Pointer<&data_10489ecc, &data_10489ed0, &data_100889ec> Type1;
typedef Pointer<&data_10485ed4, &data_10486d3c, &data_100889dc> Type2;
typedef Pointer<&data_10485ed0, &data_10486d38, &data_100889cc> Type3;

static inline unsigned level3(const RuntimeTag* other) {
    return (other == Type3::get()) & 0xffu;
}

static inline unsigned level2(const RuntimeTag* other) {
    return other == Type2::get() ? 1u : level3(other) != 0;
}

static inline unsigned level1(const RuntimeTag* other) {
    return other == Type1::get() ? 1u : level2(other) != 0;
}

extern "C" bool fn_0233c680(const void*, const RuntimeTag* other) {
    if (other == Type0::get())
        return true;
    bool result = level1(other);
    return result;
}
