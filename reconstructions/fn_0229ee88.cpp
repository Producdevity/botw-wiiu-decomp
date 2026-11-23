#include "botw/runtime_tag_query.h"

using runtime_tag_query::Pointer;

extern "C" unsigned data_104895b8;
extern "C" RuntimeTag data_104895bc;
extern "C" const RuntimeVTable data_1006fd38;
extern "C" unsigned data_104874d8;
extern "C" RuntimeTag data_104874dc;
extern "C" const RuntimeVTable data_1006fd28;
extern "C" unsigned data_10485ed4;
extern "C" RuntimeTag data_10486d3c;
extern "C" const RuntimeVTable data_1006fd18;
extern "C" unsigned data_10485ed0;
extern "C" RuntimeTag data_10486d38;
extern "C" const RuntimeVTable data_1006fd08;

typedef Pointer<&data_104895b8, &data_104895bc, &data_1006fd38> Type0;
typedef Pointer<&data_104874d8, &data_104874dc, &data_1006fd28> Type1;
typedef Pointer<&data_10485ed4, &data_10486d3c, &data_1006fd18> Type2;
typedef Pointer<&data_10485ed0, &data_10486d38, &data_1006fd08> Type3;

static inline unsigned level3(const RuntimeTag* other) {
    return (other == Type3::get()) & 0xffu;
}

static inline unsigned level2(const RuntimeTag* other) {
    return other == Type2::get() ? 1u : level3(other) != 0;
}

static inline unsigned level1(const RuntimeTag* other) {
    return other == Type1::get() ? 1u : level2(other) != 0;
}

extern "C" bool fn_0229ee88(const void*, const RuntimeTag* other) {
    if (other == Type0::get())
        return true;
    bool result = level1(other);
    return result;
}
