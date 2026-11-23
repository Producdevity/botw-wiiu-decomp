#include "botw/runtime_tag_query.h"

using runtime_tag_query::Pointer;

extern "C" unsigned data_1048aac8;
extern "C" RuntimeTag data_1048aac4;
extern "C" const RuntimeVTable data_100ad750;
extern "C" unsigned data_104875b8;
extern "C" RuntimeTag data_104875bc;
extern "C" const RuntimeVTable data_100ad740;
extern "C" unsigned data_10485ed4;
extern "C" RuntimeTag data_10486d3c;
extern "C" const RuntimeVTable data_100ad730;
extern "C" unsigned data_10485ed0;
extern "C" RuntimeTag data_10486d38;
extern "C" const RuntimeVTable data_100ad720;

typedef Pointer<&data_1048aac8, &data_1048aac4, &data_100ad750> Type0;
typedef Pointer<&data_104875b8, &data_104875bc, &data_100ad740> Type1;
typedef Pointer<&data_10485ed4, &data_10486d3c, &data_100ad730> Type2;
typedef Pointer<&data_10485ed0, &data_10486d38, &data_100ad720> Type3;

static inline unsigned level3(const RuntimeTag* other) {
    return (other == Type3::get()) & 0xffu;
}

static inline unsigned level2(const RuntimeTag* other) {
    return other == Type2::get() ? 1u : level3(other) != 0;
}

static inline unsigned level1(const RuntimeTag* other) {
    return other == Type1::get() ? 1u : level2(other) != 0;
}

extern "C" bool fn_02412538(const void*, const RuntimeTag* other) {
    if (other == Type0::get())
        return true;
    bool result = level1(other);
    return result;
}
