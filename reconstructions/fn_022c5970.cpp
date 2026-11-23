#include "botw/runtime_tag_query.h"

using runtime_tag_query::Pointer;

extern "C" unsigned data_1048982c;
extern "C" RuntimeTag data_10489830;
extern "C" const RuntimeVTable data_10075648;
extern "C" unsigned data_10489824;
extern "C" RuntimeTag data_10489828;
extern "C" const RuntimeVTable data_10075638;
extern "C" unsigned data_10485ed4;
extern "C" RuntimeTag data_10486d3c;
extern "C" const RuntimeVTable data_10075628;
extern "C" unsigned data_10485ed0;
extern "C" RuntimeTag data_10486d38;
extern "C" const RuntimeVTable data_10075618;

typedef Pointer<&data_1048982c, &data_10489830, &data_10075648> Type0;
typedef Pointer<&data_10489824, &data_10489828, &data_10075638> Type1;
typedef Pointer<&data_10485ed4, &data_10486d3c, &data_10075628> Type2;
typedef Pointer<&data_10485ed0, &data_10486d38, &data_10075618> Type3;

static inline unsigned level3(const RuntimeTag* other) {
    return (other == Type3::get()) & 0xffu;
}

static inline unsigned level2(const RuntimeTag* other) {
    return other == Type2::get() ? 1u : level3(other) != 0;
}

static inline unsigned level1(const RuntimeTag* other) {
    return other == Type1::get() ? 1u : level2(other) != 0;
}

extern "C" bool fn_022c5970(const void*, const RuntimeTag* other) {
    if (other == Type0::get())
        return true;
    bool result = level1(other);
    return result;
}
