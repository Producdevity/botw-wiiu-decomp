#include "botw/runtime_tag_query.h"

using runtime_tag_query::Pointer;

extern "C" unsigned data_104887c4;
extern "C" RuntimeTag data_104887c8;
extern "C" const RuntimeVTable data_100539c0;
extern "C" unsigned data_104887cc;
extern "C" RuntimeTag data_104887d0;
extern "C" const RuntimeVTable data_10053a40;
extern "C" unsigned data_10485ecc;
extern "C" RuntimeTag data_10487120;
extern "C" const RuntimeVTable data_10053870;

typedef Pointer<&data_104887c4, &data_104887c8, &data_100539c0> Type0;
typedef Pointer<&data_104887cc, &data_104887d0, &data_10053a40> Type1;
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

extern "C" bool fn_0220bc10(const void*, const RuntimeTag* other) {
    return level0(other);
}
