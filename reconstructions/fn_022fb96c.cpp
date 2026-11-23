#include "botw/runtime_tag_query.h"

using runtime_tag_query::Pointer;

extern "C" unsigned data_10489af4;
extern "C" RuntimeTag data_10489af8;
extern "C" const RuntimeVTable data_1007d280;
extern "C" unsigned data_10487558;
extern "C" RuntimeTag data_1048755c;
extern "C" const RuntimeVTable data_1007d270;
extern "C" unsigned data_10485ed4;
extern "C" RuntimeTag data_10486d3c;
extern "C" const RuntimeVTable data_1007d260;
extern "C" unsigned data_10485ed0;
extern "C" RuntimeTag data_10486d38;
extern "C" const RuntimeVTable data_1007d250;

typedef Pointer<&data_10489af4, &data_10489af8, &data_1007d280> Type0;
typedef Pointer<&data_10487558, &data_1048755c, &data_1007d270> Type1;
typedef Pointer<&data_10485ed4, &data_10486d3c, &data_1007d260> Type2;
typedef Pointer<&data_10485ed0, &data_10486d38, &data_1007d250> Type3;

static inline unsigned level3(const RuntimeTag* other) {
    return (other == Type3::get()) & 0xffu;
}

static inline unsigned level2(const RuntimeTag* other) {
    return other == Type2::get() ? 1u : level3(other) != 0;
}

static inline unsigned level1(const RuntimeTag* other) {
    return other == Type1::get() ? 1u : level2(other) != 0;
}

extern "C" bool fn_022fb96c(const void*, const RuntimeTag* other) {
    if (other == Type0::get())
        return true;
    bool result = level1(other);
    return result;
}
