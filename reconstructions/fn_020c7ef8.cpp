#include "botw/runtime_tag_query.h"

using runtime_tag_query::Pointer;

extern "C" unsigned data_104874c0;
extern "C" RuntimeTag data_104874c4;
extern "C" const RuntimeVTable data_10017fd8;
extern "C" unsigned data_104874b0;
extern "C" RuntimeTag data_104874bc;
extern "C" const RuntimeVTable data_10017fc8;
extern "C" unsigned data_10485ed4;
extern "C" RuntimeTag data_10486d3c;
extern "C" const RuntimeVTable data_10017fb8;
extern "C" unsigned data_10485ed0;
extern "C" RuntimeTag data_10486d38;
extern "C" const RuntimeVTable data_10017fa8;

typedef Pointer<&data_104874c0, &data_104874c4, &data_10017fd8> Type0;
typedef Pointer<&data_104874b0, &data_104874bc, &data_10017fc8> Type1;
typedef Pointer<&data_10485ed4, &data_10486d3c, &data_10017fb8> Type2;
typedef Pointer<&data_10485ed0, &data_10486d38, &data_10017fa8> Type3;

static inline unsigned level3(const RuntimeTag* other) {
    return (other == Type3::get()) & 0xffu;
}

static inline unsigned level2(const RuntimeTag* other) {
    return other == Type2::get() ? 1u : level3(other) != 0;
}

static inline unsigned level1(const RuntimeTag* other) {
    return other == Type1::get() ? 1u : level2(other) != 0;
}

extern "C" bool fn_020c7ef8(const void*, const RuntimeTag* other) {
    if (other == Type0::get())
        return true;
    bool result = level1(other);
    return result;
}
