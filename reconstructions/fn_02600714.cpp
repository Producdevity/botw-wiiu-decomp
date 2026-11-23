#include "botw/runtime_tag_query.h"

using runtime_tag_query::Pointer;

extern "C" unsigned data_1048becc;
extern "C" RuntimeTag data_1048bed0;
extern "C" const RuntimeVTable data_100f4508;
extern "C" unsigned data_1048bec4;
extern "C" RuntimeTag data_1048bec8;
extern "C" const RuntimeVTable data_100f44f8;
extern "C" unsigned data_10485ed8;
extern "C" RuntimeTag data_10486e88;
extern "C" const RuntimeVTable data_100f44e8;
extern "C" unsigned data_10485ed0;
extern "C" RuntimeTag data_10486d38;
extern "C" const RuntimeVTable data_100f44d8;

typedef Pointer<&data_1048becc, &data_1048bed0, &data_100f4508> Type0;
typedef Pointer<&data_1048bec4, &data_1048bec8, &data_100f44f8> Type1;
typedef Pointer<&data_10485ed8, &data_10486e88, &data_100f44e8> Type2;
typedef Pointer<&data_10485ed0, &data_10486d38, &data_100f44d8> Type3;

static inline unsigned level3(const RuntimeTag* other) {
    return (other == Type3::get()) & 0xffu;
}

static inline unsigned level2(const RuntimeTag* other) {
    return other == Type2::get() ? 1u : level3(other) != 0;
}

static inline unsigned level1(const RuntimeTag* other) {
    return other == Type1::get() ? 1u : level2(other) != 0;
}

extern "C" bool fn_02600714(const void*, const RuntimeTag* other) {
    if (other == Type0::get())
        return true;
    bool result = level1(other);
    return result;
}
