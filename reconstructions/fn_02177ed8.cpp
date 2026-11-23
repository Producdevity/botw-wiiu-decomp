#include "botw/runtime_tag_query.h"

using runtime_tag_query::Pointer;

extern "C" unsigned data_10488090;
extern "C" RuntimeTag data_10488094;
extern "C" const RuntimeVTable data_10036468;
extern "C" unsigned data_10487eb8;
extern "C" RuntimeTag data_10487ebc;
extern "C" const RuntimeVTable data_10036458;
extern "C" unsigned data_10485ed4;
extern "C" RuntimeTag data_10486d3c;
extern "C" const RuntimeVTable data_10036448;
extern "C" unsigned data_10485ed0;
extern "C" RuntimeTag data_10486d38;
extern "C" const RuntimeVTable data_10036438;

typedef Pointer<&data_10488090, &data_10488094, &data_10036468> Type0;
typedef Pointer<&data_10487eb8, &data_10487ebc, &data_10036458> Type1;
typedef Pointer<&data_10485ed4, &data_10486d3c, &data_10036448> Type2;
typedef Pointer<&data_10485ed0, &data_10486d38, &data_10036438> Type3;

static inline unsigned level3(const RuntimeTag* other) {
    return (other == Type3::get()) & 0xffu;
}

static inline unsigned level2(const RuntimeTag* other) {
    return other == Type2::get() ? 1u : level3(other) != 0;
}

static inline unsigned level1(const RuntimeTag* other) {
    return other == Type1::get() ? 1u : level2(other) != 0;
}

extern "C" bool fn_02177ed8(const void*, const RuntimeTag* other) {
    if (other == Type0::get())
        return true;
    bool result = level1(other);
    return result;
}
