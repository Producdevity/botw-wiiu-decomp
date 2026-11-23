#include "botw/runtime_tag_query.h"

using runtime_tag_query::Pointer;

extern "C" unsigned data_10489834;
extern "C" RuntimeTag data_10489838;
extern "C" const RuntimeVTable data_10075794;
extern "C" unsigned data_10487d50;
extern "C" RuntimeTag data_10487d54;
extern "C" const RuntimeVTable data_10075784;
extern "C" unsigned data_10485ed4;
extern "C" RuntimeTag data_10486d3c;
extern "C" const RuntimeVTable data_10075774;
extern "C" unsigned data_10485ed0;
extern "C" RuntimeTag data_10486d38;
extern "C" const RuntimeVTable data_10075764;

typedef Pointer<&data_10489834, &data_10489838, &data_10075794> Type0;
typedef Pointer<&data_10487d50, &data_10487d54, &data_10075784> Type1;
typedef Pointer<&data_10485ed4, &data_10486d3c, &data_10075774> Type2;
typedef Pointer<&data_10485ed0, &data_10486d38, &data_10075764> Type3;

static inline unsigned level3(const RuntimeTag* other) {
    return (other == Type3::get()) & 0xffu;
}

static inline unsigned level2(const RuntimeTag* other) {
    return other == Type2::get() ? 1u : level3(other) != 0;
}

static inline unsigned level1(const RuntimeTag* other) {
    return other == Type1::get() ? 1u : level2(other) != 0;
}

extern "C" bool fn_022c5c74(const void*, const RuntimeTag* other) {
    if (other == Type0::get())
        return true;
    bool result = level1(other);
    return result;
}
