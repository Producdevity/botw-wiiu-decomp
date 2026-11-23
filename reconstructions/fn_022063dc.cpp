#include "botw/runtime_tag_query.h"

using runtime_tag_query::Pointer;

extern "C" unsigned data_10488acc;
extern "C" RuntimeTag data_10488ad0;
extern "C" const RuntimeVTable data_10052ad0;
extern "C" unsigned data_10487c80;
extern "C" RuntimeTag data_10487c84;
extern "C" const RuntimeVTable data_10052ac0;
extern "C" unsigned data_10485ed4;
extern "C" RuntimeTag data_10486d3c;
extern "C" const RuntimeVTable data_10052ab0;
extern "C" unsigned data_10485ed0;
extern "C" RuntimeTag data_10486d38;
extern "C" const RuntimeVTable data_10052aa0;

typedef Pointer<&data_10488acc, &data_10488ad0, &data_10052ad0> Type0;
typedef Pointer<&data_10487c80, &data_10487c84, &data_10052ac0> Type1;
typedef Pointer<&data_10485ed4, &data_10486d3c, &data_10052ab0> Type2;
typedef Pointer<&data_10485ed0, &data_10486d38, &data_10052aa0> Type3;

static inline unsigned level3(const RuntimeTag* other) {
    return (other == Type3::get()) & 0xffu;
}

static inline unsigned level2(const RuntimeTag* other) {
    return other == Type2::get() ? 1u : level3(other) != 0;
}

static inline unsigned level1(const RuntimeTag* other) {
    return other == Type1::get() ? 1u : level2(other) != 0;
}

extern "C" bool fn_022063dc(const void*, const RuntimeTag* other) {
    if (other == Type0::get())
        return true;
    bool result = level1(other);
    return result;
}
