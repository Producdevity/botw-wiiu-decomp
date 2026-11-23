#include "botw/runtime_tag_query.h"

using runtime_tag_query::Pointer;

extern "C" unsigned data_10487b54;
extern "C" RuntimeTag data_10488774;
extern "C" const RuntimeVTable data_10062d50;
extern "C" unsigned data_10487b50;
extern "C" RuntimeTag data_10488778;
extern "C" const RuntimeVTable data_10062d20;
extern "C" unsigned data_10485ecc;
extern "C" RuntimeTag data_10487120;
extern "C" const RuntimeVTable data_10062cb0;

typedef Pointer<&data_10487b54, &data_10488774, &data_10062d50> Type0;
typedef Pointer<&data_10487b50, &data_10488778, &data_10062d20> Type1;
typedef Pointer<&data_10485ecc, &data_10487120, &data_10062cb0> Type2;

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

extern "C" bool fn_022562dc(const void*, const RuntimeTag* other) {
    return level0(other);
}
