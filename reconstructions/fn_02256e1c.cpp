#include "botw/runtime_tag_query.h"

using runtime_tag_query::Pointer;

extern "C" unsigned data_1048909c;
extern "C" RuntimeTag data_10489098;
extern "C" const RuntimeVTable data_10062f1c;
extern "C" unsigned data_1048908c;
extern "C" RuntimeTag data_10489088;
extern "C" const RuntimeVTable data_10062f0c;
extern "C" unsigned data_10485ed4;
extern "C" RuntimeTag data_10486d3c;
extern "C" const RuntimeVTable data_10062efc;
extern "C" unsigned data_10485ed0;
extern "C" RuntimeTag data_10486d38;
extern "C" const RuntimeVTable data_10062eec;

typedef Pointer<&data_1048909c, &data_10489098, &data_10062f1c> Type0;
typedef Pointer<&data_1048908c, &data_10489088, &data_10062f0c> Type1;
typedef Pointer<&data_10485ed4, &data_10486d3c, &data_10062efc> Type2;
typedef Pointer<&data_10485ed0, &data_10486d38, &data_10062eec> Type3;

static inline unsigned level3(const RuntimeTag* other) {
    return (other == Type3::get()) & 0xffu;
}

static inline unsigned level2(const RuntimeTag* other) {
    return other == Type2::get() ? 1u : level3(other) != 0;
}

static inline unsigned level1(const RuntimeTag* other) {
    return other == Type1::get() ? 1u : level2(other) != 0;
}

extern "C" bool fn_02256e1c(const void*, const RuntimeTag* other) {
    if (other == Type0::get())
        return true;
    bool result = level1(other);
    return result;
}
