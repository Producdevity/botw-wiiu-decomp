#include "botw/runtime_tag_query.h"

using runtime_tag_query::Pointer;

extern "C" unsigned data_1048999c;
extern "C" RuntimeTag data_104899a0;
extern "C" const RuntimeVTable data_101c8c34;
extern "C" unsigned data_10487130;
extern "C" RuntimeTag data_10487158;
extern "C" const RuntimeVTable data_101c8c24;
extern "C" unsigned data_10485ed4;
extern "C" RuntimeTag data_10486d3c;
extern "C" const RuntimeVTable data_101c8c14;
extern "C" unsigned data_10485ed0;
extern "C" RuntimeTag data_10486d38;
extern "C" const RuntimeVTable data_101c8c04;

typedef Pointer<&data_1048999c, &data_104899a0, &data_101c8c34> Type0;
typedef Pointer<&data_10487130, &data_10487158, &data_101c8c24> Type1;
typedef Pointer<&data_10485ed4, &data_10486d3c, &data_101c8c14> Type2;
typedef Pointer<&data_10485ed0, &data_10486d38, &data_101c8c04> Type3;

static inline unsigned level3(const RuntimeTag* other) {
    return (other == Type3::get()) & 0xffu;
}

static inline unsigned level2(const RuntimeTag* other) {
    return other == Type2::get() ? 1u : level3(other) != 0;
}

static inline unsigned level1(const RuntimeTag* other) {
    return other == Type1::get() ? 1u : level2(other) != 0;
}

extern "C" bool fn_02c647f0(const void*, const RuntimeTag* other) {
    if (other == Type0::get())
        return true;
    bool result = level1(other);
    return result;
}
