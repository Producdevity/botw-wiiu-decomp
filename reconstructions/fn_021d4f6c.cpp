#include "botw/runtime_tag_query.h"

using runtime_tag_query::Pointer;

extern "C" unsigned data_1048865c;
extern "C" RuntimeTag data_10488660;
extern "C" const RuntimeVTable data_10046ec8;
extern "C" unsigned data_104875b8;
extern "C" RuntimeTag data_104875bc;
extern "C" const RuntimeVTable data_10046eb8;
extern "C" unsigned data_10485ed4;
extern "C" RuntimeTag data_10486d3c;
extern "C" const RuntimeVTable data_10046ea8;
extern "C" unsigned data_10485ed0;
extern "C" RuntimeTag data_10486d38;
extern "C" const RuntimeVTable data_10046e98;

typedef Pointer<&data_1048865c, &data_10488660, &data_10046ec8> Type0;
typedef Pointer<&data_104875b8, &data_104875bc, &data_10046eb8> Type1;
typedef Pointer<&data_10485ed4, &data_10486d3c, &data_10046ea8> Type2;
typedef Pointer<&data_10485ed0, &data_10486d38, &data_10046e98> Type3;

static inline unsigned level3(const RuntimeTag* other) {
    return (other == Type3::get()) & 0xffu;
}

static inline unsigned level2(const RuntimeTag* other) {
    return other == Type2::get() ? 1u : level3(other) != 0;
}

static inline unsigned level1(const RuntimeTag* other) {
    return other == Type1::get() ? 1u : level2(other) != 0;
}

extern "C" bool fn_021d4f6c(const void*, const RuntimeTag* other) {
    if (other == Type0::get())
        return true;
    bool result = level1(other);
    return result;
}
