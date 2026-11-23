#include "botw/runtime_tag_query.h"

using runtime_tag_query::Pointer;

extern "C" unsigned data_1048bcf8;
extern "C" RuntimeTag data_1048bcfc;
extern "C" const RuntimeVTable data_100eb998;
extern "C" unsigned data_1048bcf0;
extern "C" RuntimeTag data_1048bcf4;
extern "C" const RuntimeVTable data_100eb988;
extern "C" unsigned data_10485ed8;
extern "C" RuntimeTag data_10486e88;
extern "C" const RuntimeVTable data_100eb978;
extern "C" unsigned data_10485ed0;
extern "C" RuntimeTag data_10486d38;
extern "C" const RuntimeVTable data_100eb968;

typedef Pointer<&data_1048bcf8, &data_1048bcfc, &data_100eb998> Type0;
typedef Pointer<&data_1048bcf0, &data_1048bcf4, &data_100eb988> Type1;
typedef Pointer<&data_10485ed8, &data_10486e88, &data_100eb978> Type2;
typedef Pointer<&data_10485ed0, &data_10486d38, &data_100eb968> Type3;

static inline unsigned level3(const RuntimeTag* other) {
    return (other == Type3::get()) & 0xffu;
}

static inline unsigned level2(const RuntimeTag* other) {
    return other == Type2::get() ? 1u : level3(other) != 0;
}

static inline unsigned level1(const RuntimeTag* other) {
    return other == Type1::get() ? 1u : level2(other) != 0;
}

extern "C" bool fn_025b36b8(const void*, const RuntimeTag* other) {
    if (other == Type0::get())
        return true;
    bool result = level1(other);
    return result;
}
