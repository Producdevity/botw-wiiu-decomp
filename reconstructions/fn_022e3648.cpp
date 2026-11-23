#include "botw/runtime_tag_query.h"

using runtime_tag_query::Pointer;

extern "C" unsigned data_104877e8;
extern "C" RuntimeTag data_104877e4;
extern "C" const RuntimeVTable data_100792e8;
extern "C" unsigned data_104877e0;
extern "C" RuntimeTag data_104877dc;
extern "C" const RuntimeVTable data_100792b8;
extern "C" unsigned data_10485ecc;
extern "C" RuntimeTag data_10487120;
extern "C" const RuntimeVTable data_10079268;

typedef Pointer<&data_104877e8, &data_104877e4, &data_100792e8> Type0;
typedef Pointer<&data_104877e0, &data_104877dc, &data_100792b8> Type1;
typedef Pointer<&data_10485ecc, &data_10487120, &data_10079268> Type2;

static inline bool level2(const RuntimeTag* other) {
    return (other == Type2::get()) & 0xffu;
}

static inline unsigned level1(const RuntimeTag* other) {
    if (other == Type1::get())
        return true;
    return level2(other);
}

static inline bool level0(const RuntimeTag* other) {
    if (Type0::is(other))
        return true;
    return level1(other);
}

extern "C" bool fn_022e3648(const void*, const RuntimeTag* other) {
    return level0(other);
}
