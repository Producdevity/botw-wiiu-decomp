#include "botw/runtime_tag_query.h"

using runtime_tag_query::Pointer;

extern "C" unsigned data_1048a368;
extern "C" RuntimeTag data_1048a36c;
extern "C" const RuntimeVTable data_1009672c;
extern "C" unsigned data_10486d68;
extern "C" RuntimeTag data_10486d6c;
extern "C" const RuntimeVTable data_1009671c;
extern "C" unsigned data_10485ed4;
extern "C" RuntimeTag data_10486d3c;
extern "C" const RuntimeVTable data_1009670c;
extern "C" unsigned data_10485ed0;
extern "C" RuntimeTag data_10486d38;
extern "C" const RuntimeVTable data_100966fc;

typedef Pointer<&data_1048a368, &data_1048a36c, &data_1009672c> Type0;
typedef Pointer<&data_10486d68, &data_10486d6c, &data_1009671c> Type1;
typedef Pointer<&data_10485ed4, &data_10486d3c, &data_1009670c> Type2;
typedef Pointer<&data_10485ed0, &data_10486d38, &data_100966fc> Type3;

static inline unsigned level3(const RuntimeTag* other) {
    return (other == Type3::get()) & 0xffu;
}

static inline unsigned level2(const RuntimeTag* other) {
    return other == Type2::get() ? 1u : level3(other) != 0;
}

static inline unsigned level1(const RuntimeTag* other) {
    return other == Type1::get() ? 1u : level2(other) != 0;
}

extern "C" bool fn_0238dad8(const void*, const RuntimeTag* other) {
    if (other == Type0::get())
        return true;
    bool result = level1(other);
    return result;
}
