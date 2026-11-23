#include "botw/runtime_tag_query.h"

using runtime_tag_query::Pointer;

extern "C" unsigned data_1048abb0;
extern "C" RuntimeTag data_1048abac;
extern "C" const RuntimeVTable data_100b012c;
extern "C" unsigned data_104892e0;
extern "C" RuntimeTag data_104892e4;
extern "C" const RuntimeVTable data_100b011c;
extern "C" unsigned data_10485ed4;
extern "C" RuntimeTag data_10486d3c;
extern "C" const RuntimeVTable data_100b010c;
extern "C" unsigned data_10485ed0;
extern "C" RuntimeTag data_10486d38;
extern "C" const RuntimeVTable data_100b00fc;

typedef Pointer<&data_1048abb0, &data_1048abac, &data_100b012c> Type0;
typedef Pointer<&data_104892e0, &data_104892e4, &data_100b011c> Type1;
typedef Pointer<&data_10485ed4, &data_10486d3c, &data_100b010c> Type2;
typedef Pointer<&data_10485ed0, &data_10486d38, &data_100b00fc> Type3;

static inline unsigned level3(const RuntimeTag* other) {
    return (other == Type3::get()) & 0xffu;
}

static inline unsigned level2(const RuntimeTag* other) {
    return other == Type2::get() ? 1u : level3(other) != 0;
}

static inline unsigned level1(const RuntimeTag* other) {
    return other == Type1::get() ? 1u : level2(other) != 0;
}

extern "C" bool fn_0241fb44(const void*, const RuntimeTag* other) {
    if (other == Type0::get())
        return true;
    bool result = level1(other);
    return result;
}
