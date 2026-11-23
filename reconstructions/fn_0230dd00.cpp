#include "botw/runtime_tag_query.h"

using runtime_tag_query::Pointer;

extern "C" unsigned data_10489c88;
extern "C" RuntimeTag data_10489c8c;
extern "C" const RuntimeVTable data_10081bec;
extern "C" unsigned data_10489c70;
extern "C" RuntimeTag data_10489c74;
extern "C" const RuntimeVTable data_10081bdc;
extern "C" unsigned data_10485ed4;
extern "C" RuntimeTag data_10486d3c;
extern "C" const RuntimeVTable data_10081bcc;
extern "C" unsigned data_10485ed0;
extern "C" RuntimeTag data_10486d38;
extern "C" const RuntimeVTable data_10081bbc;

typedef Pointer<&data_10489c88, &data_10489c8c, &data_10081bec> Type0;
typedef Pointer<&data_10489c70, &data_10489c74, &data_10081bdc> Type1;
typedef Pointer<&data_10485ed4, &data_10486d3c, &data_10081bcc> Type2;
typedef Pointer<&data_10485ed0, &data_10486d38, &data_10081bbc> Type3;

static inline unsigned level3(const RuntimeTag* other) {
    return (other == Type3::get()) & 0xffu;
}

static inline unsigned level2(const RuntimeTag* other) {
    return other == Type2::get() ? 1u : level3(other) != 0;
}

static inline unsigned level1(const RuntimeTag* other) {
    return other == Type1::get() ? 1u : level2(other) != 0;
}

extern "C" bool fn_0230dd00(const void*, const RuntimeTag* other) {
    if (other == Type0::get())
        return true;
    bool result = level1(other);
    return result;
}
