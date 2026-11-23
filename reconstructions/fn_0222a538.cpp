#include "botw/runtime_tag_query.h"

using runtime_tag_query::Pointer;

extern "C" unsigned data_10488e9c;
extern "C" RuntimeTag data_10488ea0;
extern "C" const RuntimeVTable data_1005bf40;
extern "C" unsigned data_10488e94;
extern "C" RuntimeTag data_10488e98;
extern "C" const RuntimeVTable data_1005bf30;
extern "C" unsigned data_10485ed4;
extern "C" RuntimeTag data_10486d3c;
extern "C" const RuntimeVTable data_1005bf20;
extern "C" unsigned data_10485ed0;
extern "C" RuntimeTag data_10486d38;
extern "C" const RuntimeVTable data_1005bf10;

typedef Pointer<&data_10488e9c, &data_10488ea0, &data_1005bf40> Type0;
typedef Pointer<&data_10488e94, &data_10488e98, &data_1005bf30> Type1;
typedef Pointer<&data_10485ed4, &data_10486d3c, &data_1005bf20> Type2;
typedef Pointer<&data_10485ed0, &data_10486d38, &data_1005bf10> Type3;

static inline unsigned level3(const RuntimeTag* other) {
    return (other == Type3::get()) & 0xffu;
}

static inline unsigned level2(const RuntimeTag* other) {
    return other == Type2::get() ? 1u : level3(other) != 0;
}

static inline unsigned level1(const RuntimeTag* other) {
    return other == Type1::get() ? 1u : level2(other) != 0;
}

extern "C" bool fn_0222a538(const void*, const RuntimeTag* other) {
    if (other == Type0::get())
        return true;
    bool result = level1(other);
    return result;
}
