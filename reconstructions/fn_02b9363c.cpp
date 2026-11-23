#include "botw/runtime_tag_query.h"

using runtime_tag_query::Pointer;

extern "C" unsigned data_1048fbe4;
extern "C" RuntimeTag data_1049053c;
extern "C" const RuntimeVTable data_101b29a8;
extern "C" unsigned data_1048fbdc;
extern "C" RuntimeTag data_10490534;
extern "C" const RuntimeVTable data_101b2998;
extern "C" unsigned data_10485ed4;
extern "C" RuntimeTag data_10486d3c;
extern "C" const RuntimeVTable data_101b2978;
extern "C" unsigned data_10485ed0;
extern "C" RuntimeTag data_10486d38;
extern "C" const RuntimeVTable data_101b2968;

typedef Pointer<&data_1048fbe4, &data_1049053c, &data_101b29a8> Type0;
typedef Pointer<&data_1048fbdc, &data_10490534, &data_101b2998> Type1;
typedef Pointer<&data_10485ed4, &data_10486d3c, &data_101b2978> Type2;
typedef Pointer<&data_10485ed0, &data_10486d38, &data_101b2968> Type3;

static inline unsigned level3(const RuntimeTag* other) {
    return (other == Type3::get()) & 0xffu;
}

static inline unsigned level2(const RuntimeTag* other) {
    return other == Type2::get() ? 1u : level3(other) != 0;
}

static inline unsigned level1(const RuntimeTag* other) {
    return other == Type1::get() ? 1u : level2(other) != 0;
}

extern "C" bool fn_02b9363c(const void*, const RuntimeTag* other) {
    if (other == Type0::get())
        return true;
    bool result = level1(other);
    return result;
}
