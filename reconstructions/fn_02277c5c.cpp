#include "botw/runtime_tag_query.h"

using runtime_tag_query::Pointer;

extern "C" unsigned data_10489350;
extern "C" RuntimeTag data_1048934c;
extern "C" const RuntimeVTable data_10069cfc;
extern "C" unsigned data_1048926c;
extern "C" RuntimeTag data_10489270;
extern "C" const RuntimeVTable data_10069cec;
extern "C" unsigned data_10485ed4;
extern "C" RuntimeTag data_10486d3c;
extern "C" const RuntimeVTable data_10069cdc;
extern "C" unsigned data_10485ed0;
extern "C" RuntimeTag data_10486d38;
extern "C" const RuntimeVTable data_10069ccc;

typedef Pointer<&data_10489350, &data_1048934c, &data_10069cfc> Type0;
typedef Pointer<&data_1048926c, &data_10489270, &data_10069cec> Type1;
typedef Pointer<&data_10485ed4, &data_10486d3c, &data_10069cdc> Type2;
typedef Pointer<&data_10485ed0, &data_10486d38, &data_10069ccc> Type3;

static inline unsigned level3(const RuntimeTag* other) {
    return (other == Type3::get()) & 0xffu;
}

static inline unsigned level2(const RuntimeTag* other) {
    return other == Type2::get() ? 1u : level3(other) != 0;
}

static inline unsigned level1(const RuntimeTag* other) {
    return other == Type1::get() ? 1u : level2(other) != 0;
}

extern "C" bool fn_02277c5c(const void*, const RuntimeTag* other) {
    if (other == Type0::get())
        return true;
    bool result = level1(other);
    return result;
}
