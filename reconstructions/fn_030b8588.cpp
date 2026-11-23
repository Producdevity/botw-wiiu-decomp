#include "botw/runtime_tag_query.h"

using runtime_tag_query::Pointer;

extern "C" unsigned data_104924b8;
extern "C" RuntimeTag data_104924bc;
extern "C" const RuntimeVTable data_1027a74c;
extern "C" unsigned data_10485ef8;
extern "C" RuntimeTag data_10491370;
extern "C" const RuntimeVTable data_1027a6ec;
extern "C" unsigned data_10485ef4;
extern "C" RuntimeTag data_10491324;
extern "C" const RuntimeVTable data_1027a674;

typedef Pointer<&data_104924b8, &data_104924bc, &data_1027a74c> Type0;
typedef Pointer<&data_10485ef8, &data_10491370, &data_1027a6ec> Type1;
typedef Pointer<&data_10485ef4, &data_10491324, &data_1027a674> Type2;

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

extern "C" bool fn_030b8588(const void*, const RuntimeTag* other) {
    return level0(other);
}
