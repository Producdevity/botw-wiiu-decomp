#include "botw/runtime_tag_query.h"

using runtime_tag_query::Pointer;

extern "C" unsigned data_1048d79c;
extern "C" RuntimeTag data_1048d798;
extern "C" const RuntimeVTable data_10149f24;
extern "C" unsigned data_1048c358;
extern "C" RuntimeTag data_1048c354;
extern "C" const RuntimeVTable data_10149f04;
extern "C" unsigned data_10485ed8;
extern "C" RuntimeTag data_10486e88;
extern "C" const RuntimeVTable data_10149ef4;
extern "C" unsigned data_10485ed0;
extern "C" RuntimeTag data_10486d38;
extern "C" const RuntimeVTable data_10149ee4;

typedef Pointer<&data_1048d79c, &data_1048d798, &data_10149f24> Type0;
typedef Pointer<&data_1048c358, &data_1048c354, &data_10149f04> Type1;
typedef Pointer<&data_10485ed8, &data_10486e88, &data_10149ef4> Type2;
typedef Pointer<&data_10485ed0, &data_10486d38, &data_10149ee4> Type3;

static inline unsigned level3(const RuntimeTag* other) {
    return (other == Type3::get()) & 0xffu;
}

static inline unsigned level2(const RuntimeTag* other) {
    return other == Type2::get() ? 1u : level3(other) != 0;
}

static inline unsigned level1(const RuntimeTag* other) {
    return other == Type1::get() ? 1u : level2(other) != 0;
}

extern "C" bool fn_0286e0f0(const void*, const RuntimeTag* other) {
    if (other == Type0::get())
        return true;
    bool result = level1(other);
    return result;
}
