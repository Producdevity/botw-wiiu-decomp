#include "botw/runtime_tag_query.h"

using runtime_tag_query::Pointer;

extern "C" unsigned data_1048a70c;
extern "C" RuntimeTag data_1048a710;
extern "C" const RuntimeVTable data_100a172c;
extern "C" unsigned data_1048a704;
extern "C" RuntimeTag data_1048a708;
extern "C" const RuntimeVTable data_100a170c;
extern "C" unsigned data_10485ed4;
extern "C" RuntimeTag data_10486d3c;
extern "C" const RuntimeVTable data_100a1694;
extern "C" unsigned data_10485ed0;
extern "C" RuntimeTag data_10486d38;
extern "C" const RuntimeVTable data_100a1684;

typedef Pointer<&data_1048a70c, &data_1048a710, &data_100a172c> Type0;
typedef Pointer<&data_1048a704, &data_1048a708, &data_100a170c> Type1;
typedef Pointer<&data_10485ed4, &data_10486d3c, &data_100a1694> Type2;
typedef Pointer<&data_10485ed0, &data_10486d38, &data_100a1684> Type3;

static inline unsigned level3(const RuntimeTag* other) {
    return (other == Type3::get()) & 0xffu;
}

static inline unsigned level2(const RuntimeTag* other) {
    return other == Type2::get() ? 1u : level3(other) != 0;
}

static inline unsigned level1(const RuntimeTag* other) {
    return other == Type1::get() ? 1u : level2(other) != 0;
}

extern "C" bool fn_023c6814(const void*, const RuntimeTag* other) {
    if (other == Type0::get())
        return true;
    bool result = level1(other);
    return result;
}
