#include "botw/runtime_tag_query.h"

using runtime_tag_query::Pointer;

extern "C" unsigned data_10495d60;
extern "C" RuntimeTag data_10495d5c;
extern "C" const RuntimeVTable data_10306be0;
extern "C" unsigned data_10490498;
extern "C" RuntimeTag data_10495d48;
extern "C" const RuntimeVTable data_10306bd0;
extern "C" unsigned data_10490494;
extern "C" RuntimeTag data_10495d40;
extern "C" const RuntimeVTable data_10306bc0;
extern "C" unsigned data_10490490;
extern "C" RuntimeTag data_104957dc;
extern "C" const RuntimeVTable data_10306b70;

typedef Pointer<&data_10495d60, &data_10495d5c, &data_10306be0> Type0;
typedef Pointer<&data_10490498, &data_10495d48, &data_10306bd0> Type1;
typedef Pointer<&data_10490494, &data_10495d40, &data_10306bc0> Type2;
typedef Pointer<&data_10490490, &data_104957dc, &data_10306b70> Type3;

static inline unsigned level3(const RuntimeTag* other) {
    return (other == Type3::get()) & 0xffu;
}

static inline unsigned level2(const RuntimeTag* other) {
    return other == Type2::get() ? 1u : level3(other) != 0;
}

static inline unsigned level1(const RuntimeTag* other) {
    return other == Type1::get() ? 1u : level2(other) != 0;
}

extern "C" bool fn_036eff94(const void*, const RuntimeTag* other) {
    if (other == Type0::get())
        return true;
    bool result = level1(other);
    return result;
}
