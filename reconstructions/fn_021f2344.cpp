#include "botw/runtime_tag_query.h"

using runtime_tag_query::Pointer;

extern "C" unsigned data_10488954;
extern "C" RuntimeTag data_10488950;
extern "C" const RuntimeVTable data_1004e65c;
extern "C" unsigned data_1048894c;
extern "C" RuntimeTag data_10488948;
extern "C" const RuntimeVTable data_1004e64c;
extern "C" unsigned data_10485ed4;
extern "C" RuntimeTag data_10486d3c;
extern "C" const RuntimeVTable data_1004e63c;
extern "C" unsigned data_10485ed0;
extern "C" RuntimeTag data_10486d38;
extern "C" const RuntimeVTable data_1004e62c;

typedef Pointer<&data_10488954, &data_10488950, &data_1004e65c> Type0;
typedef Pointer<&data_1048894c, &data_10488948, &data_1004e64c> Type1;
typedef Pointer<&data_10485ed4, &data_10486d3c, &data_1004e63c> Type2;
typedef Pointer<&data_10485ed0, &data_10486d38, &data_1004e62c> Type3;

static inline unsigned level3(const RuntimeTag* other) {
    return (other == Type3::get()) & 0xffu;
}

static inline unsigned level2(const RuntimeTag* other) {
    return other == Type2::get() ? 1u : level3(other) != 0;
}

static inline unsigned level1(const RuntimeTag* other) {
    return other == Type1::get() ? 1u : level2(other) != 0;
}

extern "C" bool fn_021f2344(const void*, const RuntimeTag* other) {
    if (other == Type0::get())
        return true;
    bool result = level1(other);
    return result;
}
