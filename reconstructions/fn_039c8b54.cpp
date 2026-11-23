#include "botw/runtime_tag_query.h"

using runtime_tag_query::Pointer;

extern "C" unsigned data_104974b4;
extern "C" RuntimeTag data_104974b8;
extern "C" const RuntimeVTable data_10350acc;
extern "C" unsigned data_10485ef8;
extern "C" RuntimeTag data_10491370;
extern "C" const RuntimeVTable data_10350954;
extern "C" unsigned data_10485ef4;
extern "C" RuntimeTag data_10491324;
extern "C" const RuntimeVTable data_103505d4;

typedef Pointer<&data_104974b4, &data_104974b8, &data_10350acc> Type0;
typedef Pointer<&data_10485ef8, &data_10491370, &data_10350954> Type1;
typedef Pointer<&data_10485ef4, &data_10491324, &data_103505d4> Type2;

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

extern "C" bool fn_039c8b54(const void*, const RuntimeTag* other) {
    return level0(other);
}
