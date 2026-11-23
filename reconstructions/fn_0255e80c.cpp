#include "botw/runtime_tag_query.h"

using runtime_tag_query::Pointer;

extern "C" unsigned data_1048b940;
extern "C" RuntimeTag data_1048b944;
extern "C" const RuntimeVTable data_100df080;
extern "C" unsigned data_1048b520;
extern "C" RuntimeTag data_1048b524;
extern "C" const RuntimeVTable data_100df070;
extern "C" unsigned data_10485ed8;
extern "C" RuntimeTag data_10486e88;
extern "C" const RuntimeVTable data_100df060;
extern "C" unsigned data_10485ed0;
extern "C" RuntimeTag data_10486d38;
extern "C" const RuntimeVTable data_100df050;

typedef Pointer<&data_1048b940, &data_1048b944, &data_100df080> Type0;
typedef Pointer<&data_1048b520, &data_1048b524, &data_100df070> Type1;
typedef Pointer<&data_10485ed8, &data_10486e88, &data_100df060> Type2;
typedef Pointer<&data_10485ed0, &data_10486d38, &data_100df050> Type3;

static inline unsigned level3(const RuntimeTag* other) {
    return (other == Type3::get()) & 0xffu;
}

static inline unsigned level2(const RuntimeTag* other) {
    return other == Type2::get() ? 1u : level3(other) != 0;
}

static inline unsigned level1(const RuntimeTag* other) {
    return other == Type1::get() ? 1u : level2(other) != 0;
}

extern "C" bool fn_0255e80c(const void*, const RuntimeTag* other) {
    if (other == Type0::get())
        return true;
    bool result = level1(other);
    return result;
}
