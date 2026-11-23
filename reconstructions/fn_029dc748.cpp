#include "botw/runtime_tag_query.h"

using runtime_tag_query::Pointer;

extern "C" unsigned data_10488980;
extern "C" RuntimeTag data_10488984;
extern "C" const RuntimeVTable data_101829c0;
extern "C" unsigned data_10488988;
extern "C" RuntimeTag data_1048898c;
extern "C" const RuntimeVTable data_101829d0;
extern "C" unsigned data_10485ecc;
extern "C" RuntimeTag data_10487120;
extern "C" const RuntimeVTable data_101829a0;

typedef Pointer<&data_10488980, &data_10488984, &data_101829c0> Type0;
typedef Pointer<&data_10488988, &data_1048898c, &data_101829d0> Type1;
typedef Pointer<&data_10485ecc, &data_10487120, &data_101829a0> Type2;

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

extern "C" bool fn_029dc748(const void*, const RuntimeTag* other) {
    return level0(other);
}
