#include "botw/runtime_tag_query.h"

using runtime_tag_query::Pointer;

extern "C" unsigned data_10487838;
extern "C" RuntimeTag data_10487834;
extern "C" const RuntimeVTable data_100209d8;
extern "C" unsigned data_104875b8;
extern "C" RuntimeTag data_104875bc;
extern "C" const RuntimeVTable data_100209c8;
extern "C" unsigned data_10485ed4;
extern "C" RuntimeTag data_10486d3c;
extern "C" const RuntimeVTable data_100209b8;
extern "C" unsigned data_10485ed0;
extern "C" RuntimeTag data_10486d38;
extern "C" const RuntimeVTable data_100209a8;

typedef Pointer<&data_10487838, &data_10487834, &data_100209d8> Type0;
typedef Pointer<&data_104875b8, &data_104875bc, &data_100209c8> Type1;
typedef Pointer<&data_10485ed4, &data_10486d3c, &data_100209b8> Type2;
typedef Pointer<&data_10485ed0, &data_10486d38, &data_100209a8> Type3;

static inline unsigned level3(const RuntimeTag* other) {
    return (other == Type3::get()) & 0xffu;
}

static inline unsigned level2(const RuntimeTag* other) {
    return other == Type2::get() ? 1u : level3(other) != 0;
}

static inline unsigned level1(const RuntimeTag* other) {
    return other == Type1::get() ? 1u : level2(other) != 0;
}

extern "C" bool fn_020feec0(const void*, const RuntimeTag* other) {
    if (other == Type0::get())
        return true;
    bool result = level1(other);
    return result;
}
