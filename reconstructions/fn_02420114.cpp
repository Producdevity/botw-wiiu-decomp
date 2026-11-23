#include "botw/runtime_tag_query.h"

using runtime_tag_query::Pointer;

extern "C" unsigned data_1048abb4;
extern "C" RuntimeTag data_1048abb8;
extern "C" const RuntimeVTable data_100b029c;
extern "C" unsigned data_104892e0;
extern "C" RuntimeTag data_104892e4;
extern "C" const RuntimeVTable data_100b028c;
extern "C" unsigned data_10485ed4;
extern "C" RuntimeTag data_10486d3c;
extern "C" const RuntimeVTable data_100b027c;
extern "C" unsigned data_10485ed0;
extern "C" RuntimeTag data_10486d38;
extern "C" const RuntimeVTable data_100b026c;

typedef Pointer<&data_1048abb4, &data_1048abb8, &data_100b029c> Type0;
typedef Pointer<&data_104892e0, &data_104892e4, &data_100b028c> Type1;
typedef Pointer<&data_10485ed4, &data_10486d3c, &data_100b027c> Type2;
typedef Pointer<&data_10485ed0, &data_10486d38, &data_100b026c> Type3;

static inline unsigned level3(const RuntimeTag* other) {
    return (other == Type3::get()) & 0xffu;
}

static inline unsigned level2(const RuntimeTag* other) {
    return other == Type2::get() ? 1u : level3(other) != 0;
}

static inline unsigned level1(const RuntimeTag* other) {
    return other == Type1::get() ? 1u : level2(other) != 0;
}

extern "C" bool fn_02420114(const void*, const RuntimeTag* other) {
    if (other == Type0::get())
        return true;
    bool result = level1(other);
    return result;
}
