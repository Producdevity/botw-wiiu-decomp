#include "botw/runtime_tag_query.h"

using runtime_tag_query::Pointer;

extern "C" unsigned data_104874a4;
extern "C" RuntimeTag data_104874a0;
extern "C" const RuntimeVTable data_10017858;
extern "C" unsigned data_1048735c;
extern "C" RuntimeTag data_10487360;
extern "C" const RuntimeVTable data_10017848;
extern "C" unsigned data_10485ed4;
extern "C" RuntimeTag data_10486d3c;
extern "C" const RuntimeVTable data_10017838;
extern "C" unsigned data_10485ed0;
extern "C" RuntimeTag data_10486d38;
extern "C" const RuntimeVTable data_10017828;

typedef Pointer<&data_104874a4, &data_104874a0, &data_10017858> Type0;
typedef Pointer<&data_1048735c, &data_10487360, &data_10017848> Type1;
typedef Pointer<&data_10485ed4, &data_10486d3c, &data_10017838> Type2;
typedef Pointer<&data_10485ed0, &data_10486d38, &data_10017828> Type3;

static inline unsigned level3(const RuntimeTag* other) {
    return (other == Type3::get()) & 0xffu;
}

static inline unsigned level2(const RuntimeTag* other) {
    return other == Type2::get() ? 1u : level3(other) != 0;
}

static inline unsigned level1(const RuntimeTag* other) {
    return other == Type1::get() ? 1u : level2(other) != 0;
}

extern "C" bool fn_020c5938(const void*, const RuntimeTag* other) {
    if (other == Type0::get())
        return true;
    bool result = level1(other);
    return result;
}
