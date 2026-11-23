#include "botw/runtime_tag_query.h"

using runtime_tag_query::Pointer;

extern "C" unsigned data_10487520;
extern "C" RuntimeTag data_10487524;
extern "C" const RuntimeVTable data_10075268;
extern "C" unsigned data_10487130;
extern "C" RuntimeTag data_10487158;
extern "C" const RuntimeVTable data_10075258;
extern "C" unsigned data_10485ed4;
extern "C" RuntimeTag data_10486d3c;
extern "C" const RuntimeVTable data_10075248;
extern "C" unsigned data_10485ed0;
extern "C" RuntimeTag data_10486d38;
extern "C" const RuntimeVTable data_10075238;

typedef Pointer<&data_10487520, &data_10487524, &data_10075268> Type0;
typedef Pointer<&data_10487130, &data_10487158, &data_10075258> Type1;
typedef Pointer<&data_10485ed4, &data_10486d3c, &data_10075248> Type2;
typedef Pointer<&data_10485ed0, &data_10486d38, &data_10075238> Type3;

static inline unsigned level3(const RuntimeTag* other) {
    return (other == Type3::get()) & 0xffu;
}

static inline unsigned level2(const RuntimeTag* other) {
    return other == Type2::get() ? 1u : level3(other) != 0;
}

static inline unsigned level1(const RuntimeTag* other) {
    return other == Type1::get() ? 1u : level2(other) != 0;
}

extern "C" bool fn_022c51c8(const void*, const RuntimeTag* other) {
    if (other == Type0::get())
        return true;
    bool result = level1(other);
    return result;
}
