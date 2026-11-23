#include "botw/runtime_tag_query.h"

using runtime_tag_query::Pointer;

extern "C" unsigned data_10488a5c;
extern "C" RuntimeTag data_10488a60;
extern "C" const RuntimeVTable data_100510e4;
extern "C" unsigned data_1048888c;
extern "C" RuntimeTag data_10488890;
extern "C" const RuntimeVTable data_100510d4;
extern "C" unsigned data_10485ed4;
extern "C" RuntimeTag data_10486d3c;
extern "C" const RuntimeVTable data_100510c4;
extern "C" unsigned data_10485ed0;
extern "C" RuntimeTag data_10486d38;
extern "C" const RuntimeVTable data_100510b4;

typedef Pointer<&data_10488a5c, &data_10488a60, &data_100510e4> Type0;
typedef Pointer<&data_1048888c, &data_10488890, &data_100510d4> Type1;
typedef Pointer<&data_10485ed4, &data_10486d3c, &data_100510c4> Type2;
typedef Pointer<&data_10485ed0, &data_10486d38, &data_100510b4> Type3;

static inline unsigned level3(const RuntimeTag* other) {
    return (other == Type3::get()) & 0xffu;
}

static inline unsigned level2(const RuntimeTag* other) {
    return other == Type2::get() ? 1u : level3(other) != 0;
}

static inline unsigned level1(const RuntimeTag* other) {
    return other == Type1::get() ? 1u : level2(other) != 0;
}

extern "C" bool fn_021fee00(const void*, const RuntimeTag* other) {
    if (other == Type0::get())
        return true;
    bool result = level1(other);
    return result;
}
