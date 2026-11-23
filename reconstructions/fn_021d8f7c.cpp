#include "botw/runtime_tag_query.h"

using runtime_tag_query::Pointer;

extern "C" unsigned data_104886c4;
extern "C" RuntimeTag data_104886c8;
extern "C" const RuntimeVTable data_100482cc;
extern "C" unsigned data_10488680;
extern "C" RuntimeTag data_1048867c;
extern "C" const RuntimeVTable data_100482bc;
extern "C" unsigned data_10485ed4;
extern "C" RuntimeTag data_10486d3c;
extern "C" const RuntimeVTable data_100482ac;
extern "C" unsigned data_10485ed0;
extern "C" RuntimeTag data_10486d38;
extern "C" const RuntimeVTable data_1004829c;

typedef Pointer<&data_104886c4, &data_104886c8, &data_100482cc> Type0;
typedef Pointer<&data_10488680, &data_1048867c, &data_100482bc> Type1;
typedef Pointer<&data_10485ed4, &data_10486d3c, &data_100482ac> Type2;
typedef Pointer<&data_10485ed0, &data_10486d38, &data_1004829c> Type3;

static inline unsigned level3(const RuntimeTag* other) {
    return (other == Type3::get()) & 0xffu;
}

static inline unsigned level2(const RuntimeTag* other) {
    return other == Type2::get() ? 1u : level3(other) != 0;
}

static inline unsigned level1(const RuntimeTag* other) {
    return other == Type1::get() ? 1u : level2(other) != 0;
}

extern "C" bool fn_021d8f7c(const void*, const RuntimeTag* other) {
    if (other == Type0::get())
        return true;
    bool result = level1(other);
    return result;
}
