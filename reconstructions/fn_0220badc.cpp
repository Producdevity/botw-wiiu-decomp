#include "botw/runtime_tag_query.h"

using runtime_tag_query::Pointer;

extern "C" unsigned data_10488b20;
extern "C" RuntimeTag data_10488b24;
extern "C" const RuntimeVTable data_10053970;
extern "C" unsigned data_10488b28;
extern "C" RuntimeTag data_10488b2c;
extern "C" const RuntimeVTable data_10053a40;
extern "C" unsigned data_10485ecc;
extern "C" RuntimeTag data_10487120;
extern "C" const RuntimeVTable data_10053870;

typedef Pointer<&data_10488b20, &data_10488b24, &data_10053970> Type0;
typedef Pointer<&data_10488b28, &data_10488b2c, &data_10053a40> Type1;
typedef Pointer<&data_10485ecc, &data_10487120, &data_10053870> Type2;

static inline unsigned level2(const RuntimeTag* other) {
    return (other == Type2::get()) & 0xffu;
}

static inline unsigned level1(const RuntimeTag* other) {
    if (other == Type1::get())
        return true;
    return level2(other);
}

static inline bool level0(const RuntimeTag* other) {
    if (other == Type0::get())
        return true;
    return level1(other) != 0;
}

extern "C" bool fn_0220badc(const void*, const RuntimeTag* other) {
    return level0(other);
}
