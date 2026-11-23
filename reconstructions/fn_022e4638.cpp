#include "botw/runtime_tag_query.h"

using runtime_tag_query::Pointer;

extern "C" unsigned data_1048995c;
extern "C" RuntimeTag data_10489960;
extern "C" const RuntimeVTable data_10079730;
extern "C" unsigned data_1048994c;
extern "C" RuntimeTag data_10489950;
extern "C" const RuntimeVTable data_10079720;
extern "C" unsigned data_10485ed4;
extern "C" RuntimeTag data_10486d3c;
extern "C" const RuntimeVTable data_10079710;
extern "C" unsigned data_10485ed0;
extern "C" RuntimeTag data_10486d38;
extern "C" const RuntimeVTable data_10079700;

typedef Pointer<&data_1048995c, &data_10489960, &data_10079730> Type0;
typedef Pointer<&data_1048994c, &data_10489950, &data_10079720> Type1;
typedef Pointer<&data_10485ed4, &data_10486d3c, &data_10079710> Type2;
typedef Pointer<&data_10485ed0, &data_10486d38, &data_10079700> Type3;

static inline unsigned level3(const RuntimeTag* other) {
    return (other == Type3::get()) & 0xffu;
}

static inline unsigned level2(const RuntimeTag* other) {
    return other == Type2::get() ? 1u : level3(other) != 0;
}

static inline unsigned level1(const RuntimeTag* other) {
    return other == Type1::get() ? 1u : level2(other) != 0;
}

extern "C" bool fn_022e4638(const void*, const RuntimeTag* other) {
    if (other == Type0::get())
        return true;
    bool result = level1(other);
    return result;
}
