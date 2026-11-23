#include "botw/runtime_tag_query.h"

using runtime_tag_query::Pointer;

extern "C" unsigned data_10486e40;
extern "C" RuntimeTag data_1048766c;
extern "C" const RuntimeVTable data_1029fd58;
extern "C" unsigned data_10486e3c;
extern "C" RuntimeTag data_10487328;
extern "C" const RuntimeVTable data_1029fd48;
extern "C" unsigned data_10485cd8;
extern "C" RuntimeTag data_10485cdc;
extern "C" const RuntimeVTable data_1029fd38;
extern "C" unsigned data_10485cd0;
extern "C" RuntimeTag data_10485cd4;
extern "C" const RuntimeVTable data_1029fd28;

typedef Pointer<&data_10486e40, &data_1048766c, &data_1029fd58> Type0;
typedef Pointer<&data_10486e3c, &data_10487328, &data_1029fd48> Type1;
typedef Pointer<&data_10485cd8, &data_10485cdc, &data_1029fd38> Type2;
typedef Pointer<&data_10485cd0, &data_10485cd4, &data_1029fd28> Type3;

static inline unsigned level3(const RuntimeTag* other) {
    return (other == Type3::get()) & 0xffu;
}

static inline unsigned level2(const RuntimeTag* other) {
    return other == Type2::get() ? 1u : level3(other) != 0;
}

static inline unsigned level1(const RuntimeTag* other) {
    return other == Type1::get() ? 1u : level2(other) != 0;
}

extern "C" bool fn_03282954(const void*, const RuntimeTag* other) {
    if (other == Type0::get())
        return true;
    bool result = level1(other);
    return result;
}
