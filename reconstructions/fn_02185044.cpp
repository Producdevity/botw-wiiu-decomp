#include "botw/runtime_tag_query.h"

using runtime_tag_query::Pointer;

extern "C" unsigned data_10488170;
extern "C" RuntimeTag data_10488174;
extern "C" const RuntimeVTable data_10038dfc;
extern "C" unsigned data_10488168;
extern "C" RuntimeTag data_1048816c;
extern "C" const RuntimeVTable data_10038dec;
extern "C" unsigned data_10485ed4;
extern "C" RuntimeTag data_10486d3c;
extern "C" const RuntimeVTable data_10038db4;
extern "C" unsigned data_10485ed0;
extern "C" RuntimeTag data_10486d38;
extern "C" const RuntimeVTable data_10038da4;

typedef Pointer<&data_10488170, &data_10488174, &data_10038dfc> Type0;
typedef Pointer<&data_10488168, &data_1048816c, &data_10038dec> Type1;
typedef Pointer<&data_10485ed4, &data_10486d3c, &data_10038db4> Type2;
typedef Pointer<&data_10485ed0, &data_10486d38, &data_10038da4> Type3;

static inline unsigned level3(const RuntimeTag* other) {
    return (other == Type3::get()) & 0xffu;
}

static inline unsigned level2(const RuntimeTag* other) {
    return other == Type2::get() ? 1u : level3(other) != 0;
}

static inline unsigned level1(const RuntimeTag* other) {
    return other == Type1::get() ? 1u : level2(other) != 0;
}

extern "C" bool fn_02185044(const void*, const RuntimeTag* other) {
    if (other == Type0::get())
        return true;
    bool result = level1(other);
    return result;
}
