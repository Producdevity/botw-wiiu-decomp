#include "botw/runtime_tag_query.h"

using runtime_tag_query::Pointer;

extern "C" unsigned data_1048fd10;
extern "C" RuntimeTag data_104925e0;
extern "C" const RuntimeVTable data_10281a20;
extern "C" unsigned data_1048fd0c;
extern "C" RuntimeTag data_104925dc;
extern "C" const RuntimeVTable data_10281a10;
extern "C" unsigned data_10485ed4;
extern "C" RuntimeTag data_10486d3c;
extern "C" const RuntimeVTable data_10281a00;
extern "C" unsigned data_10485ed0;
extern "C" RuntimeTag data_10486d38;
extern "C" const RuntimeVTable data_102819f0;

typedef Pointer<&data_1048fd10, &data_104925e0, &data_10281a20> Type0;
typedef Pointer<&data_1048fd0c, &data_104925dc, &data_10281a10> Type1;
typedef Pointer<&data_10485ed4, &data_10486d3c, &data_10281a00> Type2;
typedef Pointer<&data_10485ed0, &data_10486d38, &data_102819f0> Type3;

static inline unsigned level3(const RuntimeTag* other) {
    return (other == Type3::get()) & 0xffu;
}

static inline unsigned level2(const RuntimeTag* other) {
    return other == Type2::get() ? 1u : level3(other) != 0;
}

static inline unsigned level1(const RuntimeTag* other) {
    return other == Type1::get() ? 1u : level2(other) != 0;
}

extern "C" bool fn_031146e0(const void*, const RuntimeTag* other) {
    if (other == Type0::get())
        return true;
    bool result = level1(other);
    return result;
}
