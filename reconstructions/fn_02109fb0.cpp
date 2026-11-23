#include "botw/runtime_tag_query.h"

using runtime_tag_query::Pointer;

extern "C" unsigned data_104878dc;
extern "C" RuntimeTag data_104878e0;
extern "C" const RuntimeVTable data_10022d18;
extern "C" unsigned data_104878d4;
extern "C" RuntimeTag data_104878d8;
extern "C" const RuntimeVTable data_10022d08;
extern "C" unsigned data_10485ed4;
extern "C" RuntimeTag data_10486d3c;
extern "C" const RuntimeVTable data_10022cf8;
extern "C" unsigned data_10485ed0;
extern "C" RuntimeTag data_10486d38;
extern "C" const RuntimeVTable data_10022ce8;

typedef Pointer<&data_104878dc, &data_104878e0, &data_10022d18> Type0;
typedef Pointer<&data_104878d4, &data_104878d8, &data_10022d08> Type1;
typedef Pointer<&data_10485ed4, &data_10486d3c, &data_10022cf8> Type2;
typedef Pointer<&data_10485ed0, &data_10486d38, &data_10022ce8> Type3;

static inline unsigned level3(const RuntimeTag* other) {
    return (other == Type3::get()) & 0xffu;
}

static inline unsigned level2(const RuntimeTag* other) {
    return other == Type2::get() ? 1u : level3(other) != 0;
}

static inline unsigned level1(const RuntimeTag* other) {
    return other == Type1::get() ? 1u : level2(other) != 0;
}

extern "C" bool fn_02109fb0(const void*, const RuntimeTag* other) {
    if (other == Type0::get())
        return true;
    bool result = level1(other);
    return result;
}
